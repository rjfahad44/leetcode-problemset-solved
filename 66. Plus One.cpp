/*My Template (01-08-2022) */
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<queue>
#include<set>
#include<limits>
#include<iomanip>
#include<conio.h>

#define in(x) cin>>x
#define out(x) cout<<x<<endl
#define to_str(x) # x
#define concat(x,y) x ## y
#define is_even_or_not(x) (x&1)
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


using namespace std;

struct User{
	string k;
	int v;
};

vector<int> plusOne(vector<int>& digits){
	for(int i= digits.size()-1; i>=0; i--){
		if(digits[i]<9){
			digits[i]++;
			return digits;
		}
		digits[i]=0;
	}
	digits.insert(digits.begin(), 1);
	return digits;
	
}


int main(){
	vector<int> v{9,8,9};
	plusOne(v);
	for(auto i: v){
		cout<<i<<", ";
	}
	return 0;
}