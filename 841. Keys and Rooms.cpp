class Solution {
public:
  void goAndTravel(vector<int>arr[],int i,vector<bool>&vis)
  {
    if(vis[i]==true)return ;
    int j;
    vis[i]=true;
    for(j=0;j<arr[i].size();j++)
      goAndTravel(arr,arr[i][j],vis);
    
  }
  
    bool canVisitAllRooms(vector<vector<int>>& ro) {
        int n=ro.size();
        vector<int>arr[n];
        int i,j;
        for(i=0;i<n;i++)
        {
          for(j=0;j<ro[i].size();j++)
            arr[i].push_back(ro[i][j]);
        }
      vector<bool>dis(n,false);
        goAndTravel(arr,0,dis);
      for(i=0;i<n;i++)
        if(!dis[i])return false;
      return true;
      
    }
};