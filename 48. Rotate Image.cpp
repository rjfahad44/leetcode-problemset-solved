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

struct User{
	string k;
	int v;
};

void rotate(vector<vector<int>> & matrix){
	int n = matrix.size();
	reverse(matrix.begin(), matrix.end());
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			swap(matrix[i][j], matrix[j][i]);
		}
	}

		for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<matrix[i][j]<<"\t";
		}
		out("");
	}
}

int main(){
	v2d v{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	rotate(v);
	return 0;
}

/*
1 2 3        7 4 1
4 5 6  => 8 5 2
7 8 9        9 6 3
*/