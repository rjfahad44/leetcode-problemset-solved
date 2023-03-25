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

bool cmp(pair < string, int >&a, pair < string, int >&b)
{
	return a.second > b.second;
}

vector < string > sortPair(vector < string > &n, vector < int >&h)
{
	vector < string > ans;
	vector < pair < int, string >>vp;
  for (int i=0; i<h.size(); i++)
	{
		vp.push_back({h[i], n[i]});
	}
	sort(vp.begin(), vp.end(), greater <>());
	
  for (auto & it:vp)
	{
		ans.push_back(it.second);
	}
	
	return ans;
}

int main()
{
	vector<string>n{"Alice","Bob","Bob"};
	vector<int>h{155,185,150};
	for(auto i: sortPair(n, h)){
		cout<<i<<"   ";
	}
	return 0;
}
