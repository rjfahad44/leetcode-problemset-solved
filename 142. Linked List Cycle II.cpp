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


struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x, ListNode* next) :
	val(x), next(next) {}
};


/*
// Run Time : 20 ms.
ListNode *detectCycle(ListNode *head) {
   unordered_set<ListNode *> seen;

  // for each node in the list
  while (head) {
    // if you've seen the next node already
    if (seen.count(head) > 0) return head;
    seen.insert(head);
    head = head->next;
  }
  return nullptr;
}
*/

//Run Time : 10ms
ListNode *detectCycle(ListNode *head) {
	ListNode *slow= head;
	ListNode *fast= head;
	bool isCycle = false;
	
	while(fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
			isCycle = true;
			break;
		}
	}
	
	if(isCycle){
		fast = head;
		while(slow!=fast){
			slow = slow->next;
			fast = fast->next;
		}
		return slow;
	}else{
		return nullptr;
	}
}


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
	optimize();
	ListNode *node = nullptr;
	
	push(&node, 3);
	push(&node, 2);
	push(&node, 0);
	push(&node, -4);
	
	ListNode *cycle = detectCycle(node);
	printList(cycle);
	
	return 0;
}
