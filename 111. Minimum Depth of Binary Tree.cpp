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

int minDepth(TreeNode * root){
	//Test Cases : 52 / 52
	//RunTime : 669 ms
	//Memory Usage: 146.5 MB
	/*
	if(!root) return 0;
	if(!root->left && !root->right) return 1;
	int l=INT_MAX, r= INT_MAX;
	if(root->left) l = minDepth(root->left);
	if(root->right) r = minDepth(root->right);
	return min(l,r)+1;
	*/
	
	//Runtime: 274 ms
    //Memory Usage: 144.7 MB
	if(!root) return 0;
    if(root->left && root->right)
    return 1 + min(minDepth(root->left), minDepth(root->right));
    
    return 1 + max(minDepth(root->left), minDepth(root->right));
}

int main()
{
	TreeNode * root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);
	root->left->left = nullptr;
	root->left->right = nullptr;
	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);
	
	out(minDepth(root));
	return 0;
}
 