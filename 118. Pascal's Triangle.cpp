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

vector < vector < int >>generate(int n)
{
	vector<vector<int>> ans;
	for (int line = 1; line <= n; line++)
	{
		vector<int> lvl;
		int C = 1;
		for (int i = 1; i <= line; i++)
		{
			lvl.push_back(C);
			C = C * (line - i) / i;
		}
		ans.push_back(lvl);
	}
	return ans;
}


int main()
{
	int n=5;
	auto v = generate(n);
	for(int i=0; i<v.size(); i++){
		cout<<"[ ";
		for(int j=0; j<v[i].size(); j++){
			cout<<v[i][j]<<"  ";
		}
		out("] ");
	}
	return 0;
}
