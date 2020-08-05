#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,temp;
        cin>>r>>c;
        int arr[r][c];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>arr[i][j];
        for(int j=0;j<c;j++)
        {
            for(int i=0;i<r;i++)
            {
                if(arr[i][j]==1)
                {
                    temp=i;
                    goto end;
                }
            }
        }
        end:cout<<temp<<endl;
    }
    return 0;
}
