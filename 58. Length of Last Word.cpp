
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int lengthOfLastWord(string s)
{
	//reverse(s.begin(), s.end());
	cout<<s<<endl;
	int len = 0;
	for (int i = s.size()-1; i>=0; i--)
	{
		if (isalpha(s[i]))
		{
			len++;
		}
		else
		{
			if (len)
				break;
		}
	}
	return len;
}

int main()
{
	string s;
	s = "   fly me   to   the moon  ";
	//getline(cin, s);

	cout << lengthOfLastWord(s) << endl;
}
