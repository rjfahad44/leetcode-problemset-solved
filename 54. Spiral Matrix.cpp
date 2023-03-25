/* My Template (01-08-2022) */
#include<iostream>
#include<algorithm>
#include <iomanip>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<stack>
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


vector < int >spiralOrder(vector < vector < int >>&matrix)
{
	vector < int >ans;
	int m = matrix.size();
	if (m == 0)
		return ans;
	int n = matrix[0].size();
	if (n == 0)
		return ans;

	int r1 = 0, r2 = m - 1, c1 = 0, c2 = n - 1;

	while (r1 <= r2 && c1 <= c2)
	{
		for (int c = c1; c <= c2; ++c)
			ans.push_back(matrix[r1][c]);
		for (int r = r1 + 1; r <= r2; ++r)
			ans.push_back(matrix[r][c2]);
		if (r1 < r2 && c1 < c2)
		{
			for (int c = c2 - 1; c >= c1; --c)
				ans.push_back(matrix[r2][c]);
			for (int r = r2 - 1; r >= r1 + 1; --r)
				ans.push_back(matrix[r][c1]);
		}

		++r1;
		--r2;
		++c1;
		--c2;
	}

	return ans;
}


int main()
{
	vector < vector < int >>v
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
  for (int i:spiralOrder(v))
	{
		cout << "  " << i;
	}
	return 0;
}
