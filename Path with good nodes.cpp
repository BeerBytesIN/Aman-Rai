void dfs(vector<int>&A,vector<int>arr[],int C,int i,int &ans,int g)
{
    if(A[i-1]==1)g++;
    if(arr[i].size()==0)
    {   
        if(g<=C)ans++;
        return;    
    }
    int j;
    for(j=0;j<arr[i].size();j++)
    {
        dfs(A,arr,C,arr[i][j],ans,g);
    }
}
    
int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) {
    vector<int>arr[A.size()+1];
    int n=A.size()+1,i;
    for(i=0;i<B.size();i++)
    {
        if(B[i][0]<B[i][1])
        arr[B[i][0]].push_back(B[i][1]);
        else
             arr[B[i][1]].push_back(B[i][0]);
    }
    int ans=0,g=0;
    dfs(A,arr,C,1,ans,g);
    return ans;
}   
