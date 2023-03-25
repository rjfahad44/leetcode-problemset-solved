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


string multiply(string num1, string num2) {
    int l1 = num1.length();
    int l2 = num2.length();
    string ans(l1 + l2, '0');
    
    for (int i = l1 - 1; i >= 0; --i){
      for (int j = l2 - 1; j >= 0; --j) {
        int sum = (ans[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0');        
        ans[i + j + 1] = (sum % 10) + '0';
        ans[i + j] += sum / 10;
      }
    }
    for (int i = 0; i < ans.length(); ++i){
    	if (ans[i] != '0' || i == ans.length() - 1) {
    		//cout<<i<<" "<<ans[i];
    		return ans.substr(i);
    		}
    }
    return "";
  }


int main()
{
	
	string num1="15";
	string num2 = "16";
	out(multiply(num1, num2));
	return 0;
}
