vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    int i=0;
    int j=0;
    vector<long long> answer;
    queue<long long> negQueue;
    while(j<N)
    {
        if(A[j]<0)
            negQueue.push(A[j]);
        if(j-i+1<K)
            j++;
        else if(j-i+1==K)
        {
            if(negQueue.empty())
                answer.push_back(0);
            else
            {
                answer.push_back(negQueue.front());
                if(negQueue.front()==A[i])
                    negQueue.pop();
            }
            i++;
            j++;
        }
    }
    return answer;
}
