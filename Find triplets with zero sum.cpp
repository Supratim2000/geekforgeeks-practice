bool findTriplets(int arr[], int n)
{ 
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        int low = i+1;
        int high = n-1;
        while(low<high)
        {
            if(arr[low]+arr[high]==-arr[i])
                return true;
            else if(arr[low]+arr[high]<-arr[i])
                low++;
            else
                high--;
        }
    }
    return false;
}
