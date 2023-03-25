/* My Template (01-08-2022) */
#include<iostream>
#include<algorithm>
#include <iomanip>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<limits>
#include<iomanip>
#include<numeric>
#include<conio.h>
using namespace std;

#define in(x) cin>>x
#define out(x) cout<<x<<endl
#define to_str(x) # x
#define concat(x,y) x ## y
#define is_even_or_not(x) (x&1)
#define showDecimalValues fixed << setprecision(12)
#define D double
#define lli long long int
#define ll long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define mp map<string, ll>
#define ump unordered_map<string,ll>
#define ummp unordered_multimap<string, ll>
#define vc vector<User>
#define v2d vector<vector<int>>
#define Permutation(ss) while(next_permutation(ss.begin(), ss.end()))
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forr(i, n) for (int i = n; i>=0; i--)
#define optimize() \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define testCase \
    int t; \
    cin>>t; \
    while(t--)

struct User
{
	string k;
	int v;
};

string pushDominoes(string s)
{
	int n = s.size();
	string ans("");
	vector < int >L(n, 0), R(n, 0);
	int c=0;
	char p = '.';

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'R')
		{
			p = 'R', c = 1;
		}
		else if (s[i] == 'L') p = 'L';
		if (s[i] == '.' && p == 'R')
		{
			R[i] = c, c++, p = 'R';
		}
	}

	p = '.', c=0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] == 'L')
		{
			p = 'L', c = 1;
		}
		else if (s[i] == 'R') p = 'R';
		if (s[i] == '.' && p == 'L')
		{
			L[i] = c, c++, p = 'L';
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (L[i] == R[i]) ans += s[i];
		else if (R[i] == 0) ans += 'L';
		else if (L[i] == 0) ans += 'R';
		else if (R[i] > L[i]) ans += 'L';
		else if (R[i] < L[i]) ans += 'R';
	}
	return ans;
}

int main()
{
	optimize();
	string s = ".L.R...LR..L..";	// "RR.L";
	out(s);
	out(pushDominoes(s));
	return 0;
}
