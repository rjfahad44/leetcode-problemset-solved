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


int numBusesToDestination(vector < vector < int >>&routes, int source, int target)
{
	unordered_map < int, vector < int >>to_routes;
	for (int i = 0; i < routes.size(); ++i)
	  for (int j:routes[i])
			to_routes[j].push_back(i);
	queue < pair < int, int >>bfs;
	bfs.push({source, 0});
	unordered_set < int >seen = { source };
	while (!bfs.empty())
	{
		int stop = bfs.front().first, bus = bfs.front().second;
		bfs.pop();
		if (stop == target) return bus;
	  for (int i:to_routes[stop])
		{
		  for (int j:routes[i])
			{
				if (seen.find(j) == seen.end())
				{
					seen.insert(j);
					bfs.push({j, bus + 1});
				}
			}
			routes[i].clear();
		}
	}
	return -1;
}


int main()
{
	vector<vector<int>>v{
		{1,2,7},
		{3,6,7}
	};
	
	int source = 1;
	int target = 6;
	out(numBusesToDestination(v, source, target));
	
	return 0;
}
