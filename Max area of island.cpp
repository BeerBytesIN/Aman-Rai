class Solution {
public:
  int area(int i,int j,int m,int n,vector<vector<int>>&grid,vector<vector<bool>>&vis)
  {
      if(i<0 or j<0 or i>=m or j>=n or grid[i][j]==0 or !vis[i][j])return 0;
      vis[i][j]=false;
     return 1+area(i,j-1,m,n,grid,vis)+area(i,j+1,m,n,grid,vis)+area(i-1,j,m,n,grid,vis)+area(i+1,j,m,n,grid,vis);
  }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m,n;
       m=grid.size(),n=grid[0].size();
      vector<vector<bool>>vis(m,vector<bool>(n,true));
      int ar=0,i,j;
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          if(grid[i][j]==0)continue;
          ar=max(ar,area(i,j,m,n,grid,vis));
         }
      }
      return ar;  
    }
};