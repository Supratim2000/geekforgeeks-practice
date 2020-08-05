#include<iostream>
#include<cstring>
using namespace std;
const int Nmax=100000;

bool prime[Nmax+1];
int ccount[Nmax+1]={0};

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
    
    int count=0;
    for(int i=0;i<=Nmax;i++)
    {
        if(prime[i])
            ccount[i]=++count;
        else
            ccount[i]=count;
    }
    
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        cout<<ccount[r]-ccount[l-1]<<endl;
    }
    
    return 0;
}
