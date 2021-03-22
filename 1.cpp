#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter string: ";
	cin>>s;
	int n = s.size();
	vector<int> dp(n, 0);
	dp[0] = (s[0] == '0') ? 1 : -1;
	int ans = -1;
	for(int i=1; i<n; i++)
	{
		if(s[i] == '0')
		{
			dp[i] = max(1+dp[i-1], 1);
		}
		else
			dp[i] = max(-1, dp[i-1]-1);
		ans = max(ans, dp[i]);
		// for(auto x:dp)
		// 	cout<<x<<" ";
		// cout<<endl;
	}
	cout<<ans;
}