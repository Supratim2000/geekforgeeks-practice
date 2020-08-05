#include <iostream>
typedef long long int ll;
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll count=0;
	    ll n;
	    cin>>n;
	    ll arr[n];
	    for(ll i=0;i<n;i++)
	        cin>>arr[i];
	    ll lmax[n],rmax[n];
	    lmax[0]=arr[0];
	    rmax[n-1]=arr[n-1];
	    for(ll i=1;i<n;i++)
	        lmax[i]=std::max(arr[i],lmax[i-1]);
	    for(ll i=n-2;i>=0;i--)
	        rmax[i]=std::max(arr[i],rmax[i+1]);
	    for(ll i=1;i<n-1;i++)
	        count+=std::min(rmax[i],lmax[i])-arr[i];
        cout<<count<<endl;
	}
	return 0;
}
