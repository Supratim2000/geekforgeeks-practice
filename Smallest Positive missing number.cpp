#include <iostream>
#define hashsize 1000000
using namespace std;

int main()
{
	int n,miss=-1;
	cin>>n;
	int arr[n],hash[hashsize]={0};
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i]>=0)
	        hash[arr[i]]++;
	}
	for(int i=1;i<hashsize;i++)
	{
	    if(hash[i]==0)
	    {
	        miss=i;
	            break;
	    }
	}
	cout<<miss<<endl;
	return 0;
}
