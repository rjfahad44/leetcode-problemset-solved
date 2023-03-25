
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
/*_________________________________________________*/
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define in(x) cin>>x
#define outl(x) cout<<x<<endl
#define out(x) cout<<x
#define to_str(x) # x
#define concat(x,y) x ## y
#define is_even_or_not(x) (x&1)
#define D double
#define lli long long int
#define ll long long
#define ld long double
#define ull unsigned long long
#define loop(i,n) for(i=n/2; i>=1; i--)
#define pb push_back
#define mp map<string, ll>
#define ump unordered_map<string,ll>
#define ummp unordered_multimap<string, ll>
#define vc vector<User>

using namespace std;

struct User
{
	string k;
	int v;
};


ll gcd(ll a, ll b)
{
	return b == 0 ? a : gcd(b, a % b);
}

bool reorderedPowerOf2(ll n){
    string s = to_string(n);
	    sort(s.begin(), s.end());
	    for(ll i=0; i<31; i++){
	        string sum = to_string((1<<i));
	        sort(sum.begin(), sum.end());
	        //out(sum<<" ");
	        if(s==sum){
	            return true;
	        }
	    }
	    //outl("");
    return false;
}


int main()
{
	ll n;
	while (in(n))
	{
	    outl(reorderedPowerOf2(n));
	}
	return 0;
}
