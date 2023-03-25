/* My Template */
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
	TreeNode():val(0), left(nullptr), right(nullptr)
	{}
	TreeNode(int x):val(x), left(nullptr), right(nullptr)
	{}
	TreeNode(int x, TreeNode * left, TreeNode * right):val(x), left(left), right(right)
	{}
};

vector<double> averageOfLevels(TreeNode * root)
{
	vector<double> ave;
    queue<TreeNode*> q{{root}};

    while (!q.empty()) {
      long sum = 0;
      int levelSize = q.size();
      //cout<<"level size : "<<levelSize<<" -> ";
      for (int i = 0; i < levelSize; ++i) {
        TreeNode* node = q.front(); q.pop();
        //cout<<node->val<<"   ";
        sum += node->val;
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
      }
      //out("");
      ave.pb(sum / (double)levelSize);
    }

    return ave;
}


int main()
{
	TreeNode *root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);
	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);

	for(auto i: averageOfLevels(root)){
		cout<<i<<"  ";
	}
	return 0;
}
