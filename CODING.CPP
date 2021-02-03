#include <bits/stdc++.h>
using namespace std;

// using ll = long long;

#define     int              long long

#define     fr(i,a,b)      for(int i=a;i<b;i++)

#define     rep(i,a,b)      for(int i=a;i>=b;i--)

#define     t()             int test;cin>>test;while(test--)

#define     IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// #define     mod             1000000007

#define     f               first

#define     sec             second

#define    mapii            std::map<int,int> map;

#define    mp               make_pair

#define  pb            push_back


int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output 2.txt", "w", stdout);
#endif

	IOS;


	// t()
	// {
	int n;
	cin >> n;

	int a[n];

	fr(i, 0, n)
	{
		cin >> a[i];
	}

	int i = 0;
	int j = n - 1;
	while (i < j)
	{	if (a[i] > 0 && a[j] < 0)
		{
			i++;
			j--;
		}

		else if (a[i] < 0 && a[j] > 0)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}

		else if (a[i] < 0 && a[j] < 0)
		{
			while (a[j] < 0)
				j--;

			if (i < j && j >= 0)
			{	swap(a[i], a[j]);
				i++;
				j--;
			}
		}

		else
		{
			while (a[i] > 0)
				i++;

			if (i < j && i <= n - 1)
			{	swap(a[i], a[j]);
				i++;
				j--;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
			break;
	}

	j = 1;

	while (j < i)
	{
		if (i <= n - 1 && a[i] < 0 && a[j] > 0)
			swap(a[i], a[j]);
		i++;
		j = j + 2;

	}



	fr(i, 0, n)
	cout << a[i] << " ";


	// }
}