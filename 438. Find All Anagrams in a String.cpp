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

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	  TreeNode():val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x):val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode * left, TreeNode * right):val(x), left(left), right(right) {}
};


vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>pp(26);
        if(s.size()<p.size()) return ans;
        
        for(int i=0;i<p.size(); pp[p[i++]-97]++);

        for(int i=0;i<=(s.size()-p.size());i++){
            vector<int>ss(26);
            for(int j=i;j<(i+p.size()); ss[s[j++]-97]++);
            if(pp == ss) ans.push_back(i); 
        }
        return ans;
}

int main()
{
	string s ="abab";
	string p="ab";
	
	auto v = findAnagrams(s, p);
	
	for(int i: v){
		cout<<" "<<i;
	}
	
	return 0;
}
