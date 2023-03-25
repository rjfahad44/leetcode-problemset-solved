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

int hourMatrixSum(vector<vector<int>>& grid,int i,int j){
        int sum=grid[i][j]+grid[i][j+1]+grid[i][j+2];
        sum+=grid[i+1][j+1];
        sum+=grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];
        return sum;
}

int maxSum(vector<vector<int>>& grid) {
        int maxSum=0;
        for(int i=0;i<=grid.size()-3;i++){
            for(int j=0;j<=grid[0].size()-3;j++){
                int sum=hourMatrixSum(grid,i,j);
                if(maxSum<sum)
                    maxSum=sum;
            }
        }
        return maxSum;
}

int main()
{
	vector<vector<int>> grid{
		{6,2,1,3},
		{4,2,1,5},
		{9,2,8,7},
		{4,1,2,9}
	};
	
	out(maxSum(grid));
	
	return 0;
}