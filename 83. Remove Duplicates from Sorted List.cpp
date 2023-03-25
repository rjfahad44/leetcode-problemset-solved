/* My Template (01-08-2022) */
#include<iostream>
#include<algorithm>
#include <iomanip>
#include<map>
#include<unordered_map>
#include<vector>
#include<queue>
#include<set>
#include<limits>
#include<iomanip>
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
#define optimize(); \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define testCase \
    int t; \
    cin>>t; \
    while(t--)

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x, ListNode* next) :
	val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head){
	if(head==nullptr) return nullptr;
	ListNode* curr = head;
	ListNode* temp;
	while(curr->next != nullptr){
		if(curr->val == curr->next->val){
			temp = curr->next->next;
			delete curr->next;
			curr->next = temp;
		}else curr = curr->next;
	}
	return head;
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
    while (node!=NULL)  
    {  
        cout<<" "<<node->val;  
        node = node->next; 
    }  
}  

int main()
{
	ListNode* head = nullptr;
	push(&head, 1);
	push(&head, 1);
	push(&head, 1);
	push(&head, 2);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 4);
	deleteDuplicates(head);
	printList(head);
	return 0;
}
