#include<iostream>
#include<cstring>
using namespace std;
const int Nmax=100000;

bool prime[Nmax+1];

int main()
{
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
        int l,r;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
            if(prime[i])
                cout<<i<<" ";
        cout<<endl;
    }
	
	return 0;
}
