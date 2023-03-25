/* 
   My Template */
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<limits>


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


using namespace std;

struct User
{
	string k;
	int v;
};

int maxSumSubmatrix(vector < vector < int >>&matrix, int k)
{
 	const int m = matrix.size();
	const int n = matrix[0].size();
	int ans = INT_MIN;

	for (int baseCol = 0; baseCol < n; ++baseCol)
	{
		vector < int >sums(m, 0);
		for (int j = baseCol; j < n; ++j)
		{
			for (int i = 0; i < m; ++i)
				sums[i] += matrix[i][j];
			set < int >accumulate{0};
			int prefix = 0;
		  for (const int sum:sums)
			{
				prefix += sum;
				auto it = accumulate.lower_bound(prefix - k);
				if (it != cend(accumulate))
					ans = max(ans, prefix - *it);
				accumulate.insert(prefix);
			}
		}
	}
	return ans;
}


int main()
{
	int k = 3;					// 2
	vector < vector < int >>matrix
	{
		// {1, 0, 1},
		// {-2, 0, 3}
		{
		2, 2, -1}
	};

	out(maxSumSubmatrix(matrix, k));

	return 0;
}
