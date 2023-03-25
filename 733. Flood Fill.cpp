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

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	  TreeNode():val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x):val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode * left, TreeNode * right):val(x), left(left), right(right) {}
};

void fill(vector<vector<int>>& image,int m,int n,int r,int c,int color,int newcolor)
{
    if(r < 0 || r >= m || c < 0 || c>= n || image[r][c] != color)return;
    image[r][c] = newcolor;
    fill(image,m,n,r+1,c,color,newcolor);
    fill(image,m,n,r-1,c,color,newcolor);
    fill(image,m,n,r,c+1,color,newcolor);
    fill(image,m,n,r,c-1,color,newcolor);
}


vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
{
    int m = image.size(),n = image[0].size();
    if(image[sr][sc] != newColor) fill(image,m,n,sr,sc,image[sr][sc],newColor);
    
    return image;        
}

void printImage(const vector<vector<int>>& image){
    for(vector<int> row: image){
        for(int pixel: row)
            cout << pixel << "\t";
        cout << endl;
    }
}

int main()
{
	vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    printImage(floodFill(image, 1, 1, 2));

    return 0;
}
