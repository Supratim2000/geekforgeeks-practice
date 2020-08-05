#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int hash[n+1]={0};
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        hash[x]++;
	    }
	    for(int i=1;i<n+1;i++)
	    {
	        if(hash[i]==2)
	            cout<<i<<" ";
	    }
	    for(int i=1;i<n+1;i++)
	    {
	        if(hash[i]==0)
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
