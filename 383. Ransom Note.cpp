#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>

#define in(x) cin>>x
#define out(x) cout<<x<<endl
#define to_str(x) # x
#define concat(x,y) x ## y
#define is_even_or_not(x) (x&1)
#define D double
#define ll long long int
#define mp map<string, ll>
#define ump unordered_map<string,ll>
#define ummp unordered_multimap<string, ll>
#define vc vector<User>

using namespace std;

int isCon(string s1, string s2)
{
	ll l1 = s1.size();
	ll l2 = s2.size();
	ll c=0;
	//ll arr[l2]={0}; //not support at leedcode compailer
	ll arr[l2];
	fill_n (arr, l2, 0);
	for(ll i=0; i<l1; i++){
		for(ll j=0; j<l2; j++){
			if(s1[i]==s2[j] && arr[j]==0){
				c++;
				arr[j] = 1;
				break;
			}
		}
	}
    return c;
}



int main(){
	string a,b;
	while(in(a>>b)){
		if(isCon(a,b)==a.size()){
			out("true");
		}else out("false");
	}
	
	return 0;
}
/*
bg
efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj
=> true
aab
baa
=> true
*/