#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    long long crnt_sum=0,max_sum=LLONG_MIN;
	    for(int i=0;i<n;i++)
	    {
	        crnt_sum+=arr[i];
	        if(crnt_sum>max_sum)
	            max_sum=crnt_sum;
	        if(crnt_sum<0)
	            crnt_sum=0;
	    }
	    cout<<max_sum<<endl;
	}
	return 0;
}
