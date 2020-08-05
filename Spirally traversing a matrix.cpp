#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    int arr[r][c];
	    for(int i=0;i<r;i++)
	        for(int j=0;j<c;j++)
	            cin>>arr[i][j];
	   
	    int dir=0;
	    int top=0;
	    int bottom=r-1;
	    int left=0;
	    int right=c-1;
	    
	    while(top<=bottom && left<=right)
	    {
	        if(dir==0)
	        {
	            for(int i=left;i<=right;i++)
	            {
	                cout<<arr[top][i]<<" ";
	            }
	            top++;
	            dir=1;
	        }
	        else if(dir==1)
	        {
	            for(int j=top;j<=bottom;j++)
	            {
	                cout<<arr[j][right]<<" ";
	            }
	            right--;
	            dir=2;
	        }
	        else if(dir==2)
	        {
	            for(int i=right;i>=left;i--)
	            {
	                cout<<arr[bottom][i]<<" ";
	            }
	            bottom--;
	            dir=3;
	        }
	        else if(dir==3)
	        {
	            for(int j=bottom;j>=top;j--)
	            {
	                cout<<arr[j][left]<<" ";
	            }
	            left++;
	            dir=0;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
