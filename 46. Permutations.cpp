#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution
{
  public:
	vector < vector < int >>ans;
	void dfs(vector < int >&nums, int l)
	{
		if (l >= nums.size())
		{
			ans.push_back(nums);
			return;
		}

		for (int i = l; i < nums.size(); i++)
		{
			swap(nums[l], nums[i]);
			dfs(nums, l + 1);
			swap(nums[l], nums[i]);
		}
	}

	vector < vector < int >>permute(vector < int >&nums)
	{
		dfs(nums, 0);
		return ans;
	}
};

int main()
{
	vector < int >v {1, 2, 3};
	Solution s;
	for (auto a:s.permute(v)){
	  for (auto i:a){
			cout << i << ", ";
		}
		puts("");
	}
}
