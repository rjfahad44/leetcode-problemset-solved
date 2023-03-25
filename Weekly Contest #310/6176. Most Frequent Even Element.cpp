/*My Template (01-08-2022) */
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


using namespace std;

struct User{
	string k;
	int v;
};

int mostFrequentEven(vector<int>& n){
	vector<int>v;
	for(int i=0; i<n.size(); i++){
		if(n[i]%2==0){
			v.push_back(n[i]);
		}
	}
	if(v.size()==0) return -1;
	else{
		sort(v.begin(),v.end());
		int mxC =0;
		int ans =0;
		for(int i=0; i<v.size(); i++){
			int count = 0;
			for(int j= 0; j<v.size(); j++){
				if (v[i]==v[j]) count++;
			}
			if(count>mxC){
				mxC = count;
				ans = v[i];
			}
		}
		return ans;
	}
}


int main(){
	vector<int> v{0,0,0,0};
	
	out(mostFrequentEven(v));
	return 0;
}