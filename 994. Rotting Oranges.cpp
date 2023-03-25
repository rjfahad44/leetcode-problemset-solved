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
	  TreeNode():val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x):val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode * left, TreeNode * right):val(x), left(left), right(right) {}
};

struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x, ListNode* next) :
	val(x), next(next) {}
};

int orangesRotting(vector < vector < int >>&grid)
{
	int n = grid.size();
	int m = grid[0].size();
	//int dx[4] = { 0, 1, 0, -1 };
	//int dy[4] = { -1, 0, 1, 0 };
	vector<int> dirs{0, 1, 0, -1, 0};
	queue < pair < int, int >>q;
	int fresh = 0;
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[i].size(); j++)
		{
			if (grid[i][j] == 2) q.push({i, j});
			if (grid[i][j] == 1) fresh++;
		}
	}
	int days = 0;
	while (!q.empty() && fresh)
	{
		days++;
		int levelNodes = q.size();
		while (levelNodes--)
		{
			pair < int, int >f = q.front();
			q.pop();
			int x = f.first, y = f.second;
			for (int i = 0; i < 4; i++)
			{
				int X = x + dirs[i];
				int Y = y + dirs[i+1];
				if ((X >= 0 && X < n) && (Y >= 0 && Y < m) && grid[X][Y] == 1)
				{
					fresh--;
					grid[X][Y] = 2;
					q.push({X, Y});
				}
			}
		}
	}
	return (fresh == 0) ? days : -1;
}


int main()
{
	/*
	0 means empty.
	1 means fresh orange.
	2 means rotten orange.
	*/
	vector<vector<int>>v{
		{2,1,1},
		{1,1,0},
		{0,1,1}
	};
	out(orangesRotting(v));
	return 0;
}
