#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int h[n],res=0;
		for(int i=0;i<n;i++)
		cin>>h[i];
		if(h[0]>k)
		{
			res=res+h[0]/k;
			if(h[0]%k==0)
			res--;
	}
		for(int i=0;i<n-1;i++)
		{
			if((h[i+1]-h[i])>k)
			{
				res+=(h[i+1]-h[i])/k;
				if((h[i+1]-h[i])%k==0)
				res--;
			}
		}
		cout<<res<<endl;
				
	}
	return 0;
}
