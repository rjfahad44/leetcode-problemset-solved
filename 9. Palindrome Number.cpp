#include<iostream>
using namespace std;

bool isPalindrome(int x){
	string s=to_string(x);
	string s1=s;
	reverse(s1.begin(),s1.end());
	if(s==s1)return true;
	else return false;
}

int main()
{
	int s;
	cin >> s;
	cout << isPalindrome(s)<<endl;
}