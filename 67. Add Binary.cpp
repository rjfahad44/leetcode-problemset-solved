#include<iostream>
#define ll long long

using namespace std;

ll getBit(string s, ll index)
{
	if (index >= 0)
		return (s[index] - '0');
	else
		return 0;
}

string addBinary(string a, string b)
{
	if (a.size() > b.size())
		while (a.size() > b.size())
			b = "0" + b;
	else if (b.size() > a.size())
		while (b.size() > a.size())
			a = "0" + a;

	ll l = max(a.size() - 1, b.size() - 1);

	string result = "";
	ll s = 0;

	while (l >= 0 || s == 1)
	{
		s += getBit(a, l) + getBit(b, l);
		result = char (s % 2 + '0') + result;
		s /= 2;
		l--;
	}
	return result;
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << addBinary(s1, s2) << endl;
}