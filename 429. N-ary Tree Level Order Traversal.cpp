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


class Node
{
  public:
	int val;
	vector < Node* > children;
	Node(){};
	Node(int _val, vector < Node *> _children){
		val = _val;
		children = _children;
		}
};

vector < vector < int >>levelOrder(Node * root)
{
	vector < vector < int >>ans;
	if(!root) return ans;
	queue < Node * >q;
	q.push(root);
	while (!q.empty())
	{
		 int n = q.size();
		vector < int >level;
		for (int i = 0; i < n; ++i)
		{
			Node *node = q.front();
			q.pop();
			// cout<<node->val<<" ";
			level.push_back(node->val);
			for (Node* child: node->children)
			{
				q.push(child);
			}
		}
		ans.push_back(level);
	}

	return ans;
}


int main()
{

	Node* node = new Node();
	
	vector < vector < int >>v = levelOrder(node);
	
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); i++)
		{
			cout << v[i][j] << " ";
		}
	}

	return 0;
}
