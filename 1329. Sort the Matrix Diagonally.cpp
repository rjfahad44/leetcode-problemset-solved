/* 
   My Template */
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<limits>
#include<iomanip>
#include<conio.h>

#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
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
#define umpp unordered_map<int, priority_queue<int>> count;

#define v2d vector<vector<int>>
#define V vector<int>
#define st set<int>
#define vc vector<User>


using namespace std;

struct User
{
	string k;
	int v;
};


v2d diagonalSort(v2d mat)
{
	int m = mat.size();
	int n = mat[0].size();

	unordered_map < int, priority_queue < int >>count;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			count[i - j].push(mat[i][j]);
		}
	}

	for (int i = m - 1; i >= 0; --i)
	{
		for (int j = n - 1; j >= 0; --j)
		{
			mat[i][j] = count[i - j].top(), count[i - j].pop();
		}
	}

	return mat;
}


int main()
{
	v2d v
	{
		/*
		{3,3,1,1},
		{2,2,1,2},
		{1,1,1,2}
		*/
		
		{11, 25, 66, 1, 69, 7},
		{23, 55, 17, 45, 15, 52},
		{75, 31, 36, 44, 58, 8},
		{22, 27, 33, 25, 68, 4},
		{84, 28, 14, 11, 5, 50}
	};

	v2d v2= diagonalSort(v);
	int m= v2.size();
	int n=v2[0].size();
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<v2[i][j]<<" ";
		}
		out("");
	}

	return 0;
}
