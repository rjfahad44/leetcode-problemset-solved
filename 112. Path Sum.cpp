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
	  TreeNode(int x)
	{
		val = x;
		left, right = nullptr;
	}
};

bool bfs(TreeNode * root, int tSum)
{
	if (!root) return false;
	queue < pair < TreeNode *, int >>q;
	q.push({root, tSum - root->val});

	while (!q.empty())
	{
		TreeNode *node = q.front().first;
		int sum = q.front().second;
		q.pop();

		if (node->left == NULL && node->right == NULL && sum == 0)
			return true;

		if (node->left)
		{
			q.push({node->left, sum - node->left->val});
			}

		if (node->right)
		{
			q.push({node->right, sum - node->right->val});
			}
	}
	return false;
}

bool hasPathSum(TreeNode * root, int targetSum)
{
	if (!root)
		return false;
	if (!root->left && !root->right && root->val == targetSum)
		return true;
	return hasPathSum(root->left, targetSum - root->val)
		|| hasPathSum(root->right, targetSum - root->val);
		
		//also right this bfs solution//
		//return bfs(root, targetSum);
}

int main()
{

	TreeNode *root = new TreeNode(5);
	root->left = new TreeNode(4);
	root->right = new TreeNode(8);
	root->left->left = new TreeNode(11);
	root->left->right = nullptr;
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);
	root->right->left->left = nullptr;
	root->right->left->right = nullptr;
	root->right->right->left = nullptr;
	root->right->right->right = new TreeNode(1);

	/* 
	   TreeNode *root = new TreeNode(1); root->left = new TreeNode(2);
	   root->right = new TreeNode(3); */
	out((hasPathSum(root, 22) ? "true" : "false"));

	return 0;
}
