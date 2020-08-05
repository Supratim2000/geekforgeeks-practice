#include <iostream>
#include<cstring>
const int Nmax=1000000;
using namespace std;

bool prime[Nmax+1];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int i=2;i*i<=Nmax;i++)
	{
	    if(prime[i])
	    {
	        for(int j=i*i;j<=Nmax;j+=i)
	            prime[j]=false;
	    }
	}
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag=false;
	    cin>>n;
	    if(n==1)
	        cout<<-1<<endl;
	    else if(n==2)
	        cout<<-1<<endl;
	    else if(n>2)
	    {
	        for(int i=2;i<n-1;i++)
	        {
	            if(prime[i] && prime[n-i])
	            {
	                cout<<i<<" "<<n-i<<endl;
	                flag=true;
	                break;
	            }
	        }
	        if(flag==false)
	            cout<<-1<<endl;
	    }
	}
	return 0;
}
