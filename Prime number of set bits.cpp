#include <iostream>
#include<cstring>
using namespace std;
const int Nmax=100000;

bool prime[Nmax+1];
int clist_setbit[Nmax+1];

unsigned int count_setbit(unsigned int n)
{
    unsigned int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

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
    
    clist_setbit[0]=0;
    for(int i=1;i<=Nmax;i++)
    {
        int count_sb=count_setbit(i);
        if(prime[count_sb])
            clist_setbit[i]=clist_setbit[i-1]+1;
        else
            clist_setbit[i]=clist_setbit[i-1];
    }
	
	int t;
	cin>>t;
	while(t--)
	{
	    int l,r;
	    cin>>l>>r;
	    cout<<clist_setbit[r]-clist_setbit[l-1]<<endl;
	}
	
	return 0;
}
