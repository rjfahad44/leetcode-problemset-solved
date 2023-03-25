/* My Template (01-08-2022) */
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<queue>
#include<set>
#include<limits>
#include<iomanip>
#include<conio.h>

#define in(x) cin>>x
#define out(x) cout<<x<<endl
#define to_str(x) # x
#define concat(x,y) x ## y
#define is_even_or_not(x) (x&1)
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
#define optimize(); \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define testCase \
    int t; \
    cin>>t; \
    while(t--)

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	  TreeNode(int x):val(x), left(NULL), right(NULL)
	{}
};


TreeNode *pruneTree(TreeNode * root)
{
	if (!root)
		return root;
	root->left = pruneTree(root->left);
	root->right = pruneTree(root->right);
	if (root->val == 0 && !root->left && !root->right){
		//return NULL: // NULL and nullptr is similar
		return nullptr;
	}
	return root;
}



int main()
{

	return 0;
}
