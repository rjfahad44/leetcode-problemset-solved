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

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	  TreeNode():val(0), left(nullptr), right(nullptr)
	{}
	TreeNode(int x):val(x), left(nullptr), right(nullptr)
	{}
	TreeNode(int x, TreeNode * left, TreeNode * right):val(x), left(left), right(right)
	{}
};


string getHint(string secret, string guess)
{
	unordered_map < char, int >um;
	int bulls = 0, cows = 0;

	for (int i = 0; i < secret.length(); i++)
	{
		if (secret[i] == guess[i])
			bulls++;
		else
		{
			if (um[secret[i]]++ < 0)
				cows++;
			if (um[guess[i]]-- > 0)
				cows++;
		}
	}
	return (to_string(bulls)+ "A"+ to_string(cows)+ "B");
}



int main()
{
	string s = "1807";
	string g = "7810";
	out(getHint(s, g));
	return 0;
}
