/* My Template (01-08-2022) */
#include<iostream>
#include<algorithm>
#include <iomanip>
#include<map>
#include<unordered_map>
#include<vector>
#include<queue>
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
#define optimize(); \
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
	TreeNode(): val(0), left(nullptr), right(nullptr){}
	TreeNode(int x):val(x), left(nullptr), right(nullptr){}
	TreeNode(int x, TreeNode * left, TreeNode * right):val(x), left(left), right(right){}
};

bool isMirror(TreeNode* p, TreeNode* q){
	if (p == NULL && q == NULL)
		return true;
	return (p && q && p->val == q->val) && isMirror(p->right, q->left) && isMirror(p->left, q->right);
}

bool isSymmetric(TreeNode * p)
{
	return isMirror(p, p);
}


int main()
{
	TreeNode *p = new TreeNode(1); 
 
    if(isSymmetric(p)) 
        cout << "true"; 
    else
        cout << "false"; 
	
	return 0;
}
