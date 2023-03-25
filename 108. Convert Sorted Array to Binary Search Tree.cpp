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
		left = right = nullptr;
	}
};

TreeNode *createBST(vector < int >nums, int start, int end)
{
	if (start > end) return nullptr;
	
	int mid = start + (end - start) / 2;
	TreeNode *node = new TreeNode(nums[mid]);

	node->left = createBST(nums, start, mid - 1);
	node->right = createBST(nums, mid + 1, end);

	return node;
}

TreeNode *sortedArrayToBST(vector < int >nums)
{
	return createBST(nums, 0, nums.size() - 1);
}


void printBST(const string& prefix,const TreeNode* node, bool isLeft)
{
    if( node != nullptr )
    {
        cout << prefix;
        cout << (isLeft ? "├──" : "└──" );
        cout <<" "<< node->val <<" "<< endl;
        
        printBST( prefix + (isLeft ? "│   " : "    "), node->left, true);
        printBST( prefix + (isLeft ? "│   " : "    "), node->right, false);
    }
}

void printBST(const TreeNode* node)
{
    printBST("", node, false);    
}

int main()
{
	vector<int> v{-10,-3,0,5,9};
	printBST(createBST(v, 0, v.size()-1));
	
	return 0;
}
