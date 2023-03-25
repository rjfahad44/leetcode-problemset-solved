 /* 
    My Template */
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<limits>
#include<iomanip>
#include<conio.h>

#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
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


using namespace std;

struct User
{
	string k;
	int v;
};

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode():val(0), left(nullptr), right(nullptr){}
	TreeNode(int x):val(x), left(nullptr), right(nullptr){}
	TreeNode(int x, TreeNode * left, TreeNode * right):val(x), left(left), right(right){}
};


int dfs(TreeNode * root, int mx)
{
	if(!root) return 0;
    int cur=0;
   // if(mx <= root->val) cur++;
    cur = root->val>=mx;
    mx=max(mx,root->val);
    cur+=dfs(root->left,mx) + dfs(root->right,mx);
	return cur;
}

int goodNodes(TreeNode * root)
{
	return dfs(root, INT_MIN);
}


int main()
{
	TreeNode* root= new TreeNode(3);
    root->left=  new TreeNode(1);
    root->right=  new TreeNode(4);
    root->left->left=  new TreeNode(3);
    root->right->left=  new TreeNode(1);
    root->right->right=  new TreeNode(5);
    
    cout<< goodNodes(root) ;
	return 0;
}
