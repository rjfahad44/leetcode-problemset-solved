/* My Template (01-08-2022) */
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
#define optimize(); \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define testCase \
    int t; \
    cin>>t; \
    while(t--)

void merge(vector < int >nums1, int m, vector < int >nums2, int n)
{
	vector < int >mrg;
	for (int i = 0; i < m; i++)
	{
		mrg.push_back(nums1[i]);
	}
	for (int i = 0; i < n; i++)
	{
		mrg.push_back(nums2[i]);
	}
	sort(mrg.begin(), mrg.end());
	nums1 = mrg;
  for (auto i:nums1)
	{
		cout << i << " ";
	}
}

/*
void mergeBestWay(vector < int >nums1, int m, vector < int >nums2, int n)
{
	int k = m + n - 1;
	for (int i = m - 1, j = n - 1; j >= 0; k--)
	{
		if (i < 0)
		{
			nums1[k] = nums2[j--];
			continue;
		}
		nums1[k] = (nums1[i] <= nums2[j] ? nums2[j--] : nums1[i--]);
	}
}

void mergeBestWay(vector < int >nums1, int m, vector < int >nums2, int n)
{
int i = m - 1;      // nums1's index (actual nums)
    int j = n - 1;      // nums2's index
    int k = m + n - 1;  // nums1's index (next filled position)

    while (j >= 0)
      if (i >= 0 && nums1[i] > nums2[j])
        nums1[k--] = nums1[i--];
      else
        nums1[k--] = nums2[j--];
}
*/

int main()
{
	vector < int >a1
	{
	0};
	vector < int >a2
	{
	1};
	int n = 1;
	int m = 0;
	merge(a1, m, a2, n);

	return 0;
}
