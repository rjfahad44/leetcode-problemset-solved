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


class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>res;
        vector<int>indegree(numCourses);
        vector<vector<int>>graph(numCourses);
        for(auto p: prerequisites){
            graph[p[1]].push_back(p[0]);
            indegree[p[0]]++;
        }
        for(int i = 0; i < numCourses; i++){
            int j = 0;
            for(; j < numCourses; j++) if(indegree[j] == 0) break;
            if(j == numCourses) return vector<int>();
            indegree[j] = -1;
            for(auto x: graph[j]) indegree[x]--;
            res.push_back(j);
        }
        return res;
    }
};


int main()
{
	Solution solution;
	int n=2;
	vector<vector<int>>v{
		 {1,0}
	};
	auto ans = solution.findOrder(n, v);
	for(auto i: ans){
		cout<<" "<<i;
	}
	return 0;
}
