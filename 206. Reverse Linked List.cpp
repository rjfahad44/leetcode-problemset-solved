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

ListNode *reverseList(ListNode * head)
{
	ListNode *newHead = NULL;
	while (head != NULL)
	{
		ListNode *next = head->next;
		head->next = newHead;
		newHead = head;
		head = next;
	}
	return newHead;
}

void push(ListNode **head, int val){
	ListNode *newNode = new ListNode();
	newNode->val = val;
	newNode->next = (*head);
	(*head) = newNode;
}

void printList(ListNode *i){
	while(i){
		cout<<i->val<<" ";
		i = i->next;
	}
}


int main()
{
	ListNode *node = NULL;
	push(&node, 4);
	push(&node, 3);
	push(&node, 2);
	push(&node, 1);
	
	ListNode *rl = reverseList(node);
	printList(rl);
	return 0;
}
