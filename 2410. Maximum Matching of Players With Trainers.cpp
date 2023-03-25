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
#define optimize(); \
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

int matchPlayersAndTeachers(vector<int>&p, vector<int> t){
	int m =0;
	int k=0;
	sort(p.begin(), p.end());
	sort(t.begin(), t.end());
	for(int i=0; i<p.size(); i++){
		for(int j=k; j<t.size(); j++){
			if(p[i]<=t[j]){
				m++;
				k = j+1;
				break;
			}
		}
	}
	return m;
}

int main()
{
	vector<int> p{1,1,1};
	vector<int> t{10};
	
	out(matchPlayersAndTeachers(p,t));
	return 0;
}
