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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int>inter(2);
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
         inter[0]=intervals[0][0];
         inter[1]=intervals[0][1];
        for(int i=1;i<(int)intervals.size();i++){
            if(intervals[i][0]<=inter[1]){
                inter[1] = max(inter[1],intervals[i][1]);
            }
            else{
                 ans.push_back(inter);
                 inter[0]=intervals[i][0];
                 inter[1]=intervals[i][1];
            }
        }
        ans.push_back(inter);
        
        return ans;
    }
};


int main()
{
	Solution so;
	vector<vector<int>>v{
		{1,3},
		{2,6},
		{8,10},
		{15,18}
	};
	auto ans = so.merge(v);
	for(auto i: ans){
		int c=0;
		cout<<"[";
		for(auto j: i){
			cout<<j;
			if(c<1) cout<<", ";
			c++;
			
		}
		cout<<"] ";
	}
	return 0;
}
