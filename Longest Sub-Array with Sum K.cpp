class Solution {
  public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int ans=0;
        int sum=0;
        unordered_map<int,int> preSum;
        preSum.insert({0,-1});
        for(int i=0;i<N;i++) {
            sum+=A[i];
            if(preSum.find(sum-K)!=preSum.end())
                ans=max(i-preSum[sum-K],ans);
            if(preSum.find(sum)==preSum.end())
                preSum.insert({sum,i});
        }
        return ans;
    } 
};
