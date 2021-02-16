class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        vector<int>arr(n*n+1);
        int i,j,k=1;
      bool flag=true;  
      for(i=n-1;i>=0;i--)
        {
          if(flag){
            for(j=0;j<n;j++)arr[k++]=board[i][j];
            flag=false;
          }
          else{
            for(j=n-1;j>=0;j--)arr[k++]=board[i][j];
            flag=true;
          }
        }
      for(i=1;i<=n*n;i++)cout<<i<<" "<<arr[i]<<"\n";
      n=n*n;
      vector<bool>vis(n+1,true);
      int start=arr[1]>-1?arr[1]:1;
      int step=0;
      queue<int>q1;
      q1.push(start);
      vis[start]=false;
      while(!q1.empty())
      {
        int size=q1.size();
        while(size--)
        {
            int curr=q1.front();
          if(curr==n)return step;
             q1.pop();
            
            for(i=curr+1;i<=curr+6 and i<=n;i++)
            {
                int t=arr[i]>-1?arr[i]:i;
                if(!vis[t])continue;
                vis[t]=false;
                q1.push(t);
            }
        }
        step++;
       
      }
      return -1;
    }
};