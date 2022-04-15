class Solution{
public: 
    int prime[100001];
    long long int largestPrimeFactor(int N){
        for(int i=0;i<100001;i++)
            prime[i]=i;
        for(int i=2;i*i<=100000;i++)
        {
            if(prime[i]==i)
            {
                for(int j=i*i;j<=100000;j+=i)
                {
                    if(prime[j]==j)
                        prime[j]=i;
                }
            }
        }
        while(prime[N]!=N)
            N=N/prime[N];
        return N;
    }
};
