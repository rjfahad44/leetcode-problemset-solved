/*
My Template
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<limits>
#include<iomanip>
#include<conio.h>
using namespace std;

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
#define V2d vector<vector<char>>
#define vc vector<User>


int dfs(vector<vector<char>> &grid, int i, int j){
	if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j] == '0') return 0;
	grid[i][j]='0';
	dfs(grid, i+1, j);
	dfs(grid, i-1, j);
	dfs(grid, i, j+1);
	dfs(grid, i, j-1);
	
	return 1;
}

int numOfIslands(vector<vector<char>> &grid){
	int nIsLands = 0;
	int r = grid.size();
	int c = grid[0].size();
	for(int i=0; i<r; i++){
		for(int j=0; j< grid[i].size(); j++){
			if(grid[i][j]=='1'){
				nIsLands += dfs(grid, i, j);
			}
		}
	}
	return nIsLands;
}

int main(){
	V2d v{
		/*
		{'1', '1','1', '1', '0'},
		{'1', '1','0', '1', '0'},
		{'1', '1','0', '0', '0'},
		{'0', '0','0', '0', '0'},
		*/
		{'1','1','0', '0', '0'},
		{'1','1','0', '0', '0'},
		{'0','0','1', '0', '0'},
		{'0','0','0', '1', '1'}
	};
	out(numOfIslands(v));
	return 0;
}