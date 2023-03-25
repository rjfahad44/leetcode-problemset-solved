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

struct User
{
	string k;
	int v;
};

vector < string > findRestaurant(vector < string > &list1, vector < string > &list2)
{
	vector < string > ans;
	unordered_map < string, int >m;
	int minC = INT_MAX;

	for (int i = 0; i < list1.size(); m[list1[i]] = i, i++);

	for (int i = 0; i < list2.size(); i++)
	{
		if (m.count(list2[i]))
		{
			int c = m[list2[i]] + i;
			if (c <minC)
			{
				minC = c;
				ans ={list2[i]};
			}
			else if (c == minC)
			{
				ans.push_back(list2[i]);
			}
		}
	}
	return ans;
	
	/*
	vector < string > ans;
    int sum = INT_MAX;
    for (int i=0; i<list1.size(); i++) {
        for (int j=0; j<list2.size(); j++) {
            if (list1[i] == list2[j]) {
                if (i+j==sum) {
                    ans.push_back(list1[i]);
                }
                else if(i+j<sum) {
                    sum = i + j;
                    ans = {list1[i]};
                }
            }
        }
    }
    return ans;
    */
}


int main()
{
	vector < string > l1{"happy", "sad", "good"};
	vector < string > l2{"sad","happy", "good"};
  for (auto i:findRestaurant(l1, l2))
	{
		cout << i << ", ";
	}
}
