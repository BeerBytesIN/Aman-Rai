class Solution {
public:
 void dfs(vector<vector<char>>& grid,vector<vector<bool>>&vis,int i,int j,int m,int n)
{
    if(i<0 or j<0 or i>=m or j>=n or grid[i][j]=='0' or vis[i][j]==true)return;
    vis[i][j]=true;
    dfs(grid,vis,i-1,j,m,n);dfs(grid,vis,i+1,j,m,n);dfs(grid,vis,i,j-1,m,n);dfs(grid,vis,i,j+1,m,n);
}
    int numIslands(vector<vector<char>>& grid) {
     int m,n;
      m=grid.size(),n=grid[0].size();
      vector<vector<bool>>vis(m,vector<bool>(n,false));
      int i,j,cnt=0;
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          if(grid[i][j]=='0' or vis[i][j]==true)continue;
          cnt++;
          dfs(grid,vis,i,j,m,n);
        }
      }
      return cnt;
    }
};