
  /* 
     My Template */
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
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
#define vc vector<User>
#define v2d vector<vector<int>>


using namespace std;

struct User
{
	string k;
	int v;
};

vector < vector < int >>dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void dfs(vector < vector < int >>&matrix, vector < vector < bool >> &visited, int pre, int i, int j)
{
	int m = matrix.size();
	int n = matrix[0].size();
	if (i < 0 || i >= m || j < 0 || j >= n || visited[i][j] || matrix[i][j] < pre) return;
	visited[i][j] = true;
  for (auto dir:dirs)
	{
		int x = i + dir[0];
		int y = j + dir[1];
		dfs(matrix, visited, matrix[i][j], x, y);
	}
}

vector<vector<int>> pacificAtlantic(vector < vector < int >>&matrix)
{
	if (matrix.empty()) return{};
	vector<vector<int>> res;
	int m = matrix.size();
	int n = matrix[0].size();
	vector < vector < bool >> pacific(m, vector < bool > (n, false));
	vector < vector < bool >> atlantic(m, vector < bool > (n, false));
	for (int i = 0; i < m; i++)
	{
		dfs(matrix, pacific, INT_MIN, i, 0);
		dfs(matrix, atlantic, INT_MIN, i, n - 1);
	}
	for (int i = 0; i < n; i++)
	{
		dfs(matrix, pacific, INT_MIN, 0, i);
		dfs(matrix, atlantic, INT_MIN, m - 1, i);
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (pacific[i][j] && atlantic[i][j])
			{
				res.push_back({i, j});
			}
		}
	}
	return res;
}



int main()
{
	vector<vector<int>> v{
		{1,2,2,3,5},
		{3,2,3,4,4},
		{6,71,4,5},
		{5,1,1,2,4}
	};
	
	vector<vector<int>> ans = pacificAtlantic(v);
	int r = ans.size();
	int c = ans[0].size();
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<ans[i][j]<<" ";
		}
		out("");
	}
	return 0;
}
