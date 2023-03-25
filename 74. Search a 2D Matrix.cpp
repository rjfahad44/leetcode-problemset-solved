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

/*
//optimaixed and more faster solution//
bool searchMatrix(vector < vector < int >>&matrix, int target)
{
	for (int i = 0; i < matrix.size(); i++)
	{
		if (target >= matrix[i][0] && target <= matrix[i][matrix[i].size() - 1])
			return find(matrix[i].begin(), matrix[i].end(),
						target) != matrix[i].end()? true : false;
	}
	return false;
}

*/

bool searchMatrix(vector < vector < int >>&matrix, int target)
{
	int row = matrix.size();
	if (row == 0) return false;
	int col = matrix[0].size();
	if (col == 0) return false;
	int r = 0, c = col - 1;
	while (r < row && c >= 0)
	{
		if (matrix[r][c] == target) return true;
		else if (matrix[r][c] > target) c--;
		else r++;
	}
	return false;
}


int main()
{
	vector<vector<int>>v{
		{1,3,5,7},
		{10,11,16,20},
		{23,30,34,60}
	};
	int target = 13;
	
	out(searchMatrix(v, target));
	
	return 0;
}
