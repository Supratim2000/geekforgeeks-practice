void sort012(int a[], int n)
{
    int count0=0,count1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            count0++;
        if(a[i]==1)
            count1++;
    }
    for(int i=0;i<n;i++)
    {
        if(i>=0 && i<count0)
            a[i]=0;
        if(i>=count0 && i<count0+count1)
            a[i]=1;
        if(i>=count0+count1 && i<n)
            a[i]=2;
    }
}
