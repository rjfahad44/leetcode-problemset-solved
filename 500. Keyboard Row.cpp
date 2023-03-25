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

vector < string > findWords(vector < string > &words)
{
	map < char, int >key;
	key['q'] = 1, key['w'] = 1, key['e'] = 1, key['r'] = 1, key['t'] = 1, key['y'] = 1, key['u'] = 1, key['i'] = 1, key['o'] = 1, key['p'] = 1;
	key['a'] = 2, key['s'] = 2, key['d'] = 2, key['f'] = 2, key['g'] = 2, key['h'] = 2, key['j'] = 2, key['k'] = 2, key['l'] = 2;
	key['z'] = 3, key['x'] = 3, key['c'] = 3, key['v'] = 3, key['b'] = 3, key['n'] = 3, key['m'] = 3;
	
	vector < string > ans;
	
	for (int i = 0; i < words.size(); i++)
	{
		bool inLine = true;
		for (int j = 0; j < words[i].size() - 1; j++)
		{
			if (key[tolower(words[i][j])] != key[tolower(words[i][j + 1])])
			{
				inLine = false;
				break;
			}
		}
		if (inLine) ans.push_back(words[i]);
	}
	return ans;
}


int main()
{
		vector<string>v {
			"Hello","Alaska","Dad","Peace"
		};
		for(auto i: findWords(v)){
			out(i);
		}
	return 0;
}
