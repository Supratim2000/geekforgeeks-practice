class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int i=0;
        int j=K-1;
        long sum=0;
        for(int x=i;x<=j;x++)
            sum+=Arr[x];
        long maxSum=sum;
        while(j<N-1)
        {
            sum+=Arr[++j]-Arr[i++];
            maxSum=max(sum,maxSum);
        }
        return maxSum;
    }
};
