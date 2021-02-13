bool dfs(vector<vector<int>>&arr,int k,int n,vector<bool>&vis)
{
    if(k==n)return true;
    int i;
    if(!vis[k])return false;
    vis[k]=false;
    for(i=0;i<arr[k].size();i++)
    {
        if(dfs(arr,arr[k][i],n,vis))return true;
    }
    return false;
}
int Solution::solve(int A, vector<vector<int> > &B) {
  vector<vector<int>>arr(A+1);
    int i,j;
    vector<bool>vis(A+1,true);
    for(i=0;i<B.size();i++)
    {
        arr[B[i][0]].push_back(B[i][1]);
    }
    for(i=0;i<arr[1].size();i++)
    {
        if(dfs(arr,arr[1][i],A,vis))return 1;
    }
    return 0;
}
