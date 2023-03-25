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
#include<stack>
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
	  TreeNode():val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x):val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode * left, TreeNode * right):val(x), left(left), right(right) {}
};


string decodeString(string s)
{
	stack < string > stks;
	stack < int >stki;

	string curs = "";
	int curi = 0;

  for (char c:s)
	{
		if (c == '[')
		{
			stks.push(curs);
			stki.push(curi);
			curs = "";
			curi = 0;
		}
		else if (c == ']')
		{
			string pres = stks.top();
			stks.pop();
			int prei = stki.top();
			stki.pop();

			string tmp;
			for (int i = 0; i < prei; ++i)
			{
				tmp += curs;
			}
			curs = pres + tmp;
		}
		else if (isdigit(c))
		{
			curi = curi * 10 + (c - '0');
		}
		else { curs += c; }
	}
	return curs;
}


int main()
{
	string s= "3[a]2[bc]";
	out(decodeString(s));
	return 0;
}
