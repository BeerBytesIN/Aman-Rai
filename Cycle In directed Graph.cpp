bool dfs(vector<int>arr[],vector<bool>vis,int i)
{
    if(vis[i]==false)return true;
    int j;
    if(arr[i].size()==0)return false;
    vis[i]=false;
    for(j=0;j<arr[i].size();j++)
    {
        if(dfs(arr,vis,arr[i][j]))return true;
    }
    return false;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    
    vector<int>arr[A+1];
    int i;
    for(i=0;i<B.size();i++)
    {
        arr[B[i][0]].push_back(B[i][1]);
    }
   for(i=1;i<=A;i++)
   {
      vector<bool>vis(A+1,true);
      if(dfs(arr,vis,i))return 1;
   }
   return 0;
}
