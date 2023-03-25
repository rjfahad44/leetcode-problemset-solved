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

vector < int >findClosestElements(vector < int >&arr, int k, int x)
{
	int l = 0, h = arr.size() - 1;
	while (h - l >= k)
	{
		if (abs(arr[l] - x) > abs(arr[h] - x))
			l++;
		else
			h--;
	}
	vector < int >ans;
	for (int i = l; i <= h; i++)
	{
		ans.push_back(arr[i]);
	}
	return ans;
}


int main()
{
	optimize();
	vector < int >v
	{
	1, 2, 3, 4, 5};
	int k = 4, x = -1;
  for (auto i:findClosestElements(v, k, x))
	{
		cout << i << "  ";
	}
	return 0;
}
