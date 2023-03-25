#include<iostream>
#include<string>
using namespace std;

int romanValue(char c)
{
	switch (c)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		return 0;
	}
}

int romanToInt(string s)
{
	int sum = 0;
	int len = s.size()-1;
	for (int i = len; i>=0; i--)
	{
			if(romanValue(s[i+1])<=romanValue(s[i])){
				sum+=romanValue(s[i]);
			}else{
				sum-=romanValue(s[i]);
			}
	}
	return sum;
}

int main()
{
	string s = "MCMXCIV";
	cout << romanToInt(s) << endl;
	return 0;
}
