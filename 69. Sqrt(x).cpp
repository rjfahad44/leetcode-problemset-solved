/* My Template (01-08-2022) */
#include<iostream>
#include<algorithm>
#include <iomanip>
#include<map>
#include<unordered_map>
#include<vector>
#include<queue>
#include<set>
#include<unordered_set>
#include<limits>
#include<iomanip>
#include<conio.h>


using namespace std;

//big square root [(2^31)-1]
int mySqrt(int x)
{
	//simple solution //
	unsigned long long int i=0;
	while (i*i<=x)
	{
		i++;
	}
	return i-1;
	/*
	if (x == 0) return 0;
	int left = 1;
	int right = x / 2 + 1;
	int res;
	while (left <= right)
	{
		int mid = left + ((right - left) / 2);
		if (mid <= x / mid)
		{
			left = mid + 1;
			res = mid;
		}
		else
		{
			right = mid - 1;
		}
	}
	return res;
	*/
}

int main()
{
	int n = 2147395599;    // 2147395599
	cout << (mySqrt(n));
}
