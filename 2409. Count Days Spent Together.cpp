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

int daysConverter(string &s){
	int mn[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int dayCount = 0;
	int m =(( s[0]-48)*10)+(s[1]-48);
	int d = ((s[3]-48)*10)+(s[4]-48);
	for(int i=0; i<m; dayCount+=mn[i], i++);
	return dayCount + d;
}

int countDaysTogether(string ar, string al, string br, string bl){
	int asd = daysConverter(ar);
	int bsd = daysConverter(br);
	int aed = daysConverter(al);
	int bed = daysConverter(bl);
	int startDays = max(asd, bsd);
	int endDays = min(aed, bed);
	if(startDays>endDays) return 0;
	return endDays-startDays+1;
}

int main()
{
	string ar,al, br, bl;
	ar ="10-01";
	al = "10-31";
	br = "11-01";
	bl = "12-31";
	cout<<countDaysTogether(ar, al, br, bl)<<endl;
	return 0;
}
