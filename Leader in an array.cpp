#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        vector<int> vec;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int temp=arr[n-1];
        vec.push_back(temp);
        int max=temp;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=max)
                {
                    max=arr[i];
                    vec.push_back(max);
                }
        }
        for(auto it=vec.rbegin();it!=vec.rend();it++)
            cout<<*it<<" ";
        cout<<endl;
	}
	return 0;
}
