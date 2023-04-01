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
#include<numeric>
#include<conio.h>
#include <functional>

using namespace std;

#define in(x) cin>>x
#define out(x) cout<<x
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
#define umlp unordered_multimap<string, ll>
#define iv vector<int>
#define iv2d vector<vector<int>>
#define Permutation(s) while(next_permutation(s.begin(), s.end()))
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
  ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    ListNode* a = headA;
    ListNode* b = headB;

    while (a != b) {
    	a = a ? a->next : headB;
    	b = b ? b->next : headA;
    }
    return a; 
  }
};

void push(ListNode** head, int val)  
{  
    ListNode* new_node = new ListNode();
    new_node->val = val;  
    new_node->next = (*head);
    (*head) = new_node;  
}  

void printList(ListNode *node)  
{  
    while (node)  
    {  
        cout<<" "<<node->val;
        node = node->next; 
    }  
}  


int main()
{
	ListNode *nodeA = nullptr;
	ListNode *nodeB = nullptr;
	Solution s;
	
	push(&nodeA, 4);
	push(&nodeA, 1);
	push(&nodeA, 8);
	push(&nodeA, 4);
	push(&nodeA, 6);
	
	push(&nodeB, 5);
	push(&nodeB, 6);
	push(&nodeB, 1);
	push(&nodeB, 8);
	push(&nodeB, 4);
	push(&nodeB, 5);
	
	printList(s.getIntersectionNode(nodeA, nodeB));
	
	return 0;
}
