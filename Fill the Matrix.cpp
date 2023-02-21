class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        int count=0;
        vector<vector<bool>> grid(N, vector<bool>(M, false));
        grid[x-1][y-1]=true;
        int dispX[]={1,-1,0,0};
        int dispY[]={0,0,1,-1};
        queue<pair<int,int>> q;
        q.push({x-1,y-1});
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                pair<int,int> cur=q.front();
                int curX=cur.first;
                int curY=cur.second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    if(curX+dispX[i]<N && curX+dispX[i]>=0 && curY+dispY[i]<M && curY+dispY[i]>=0 && grid[curX+dispX[i]][curY+dispY[i]]==false)
                    {
                        grid[curX+dispX[i]][curY+dispY[i]]=true;
                        q.push({curX+dispX[i],curY+dispY[i]});
                    }
                }
            }
            count++;
        }
        return count-1;
    }
};
