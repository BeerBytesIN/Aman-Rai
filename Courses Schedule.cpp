class Solution {
public:
  bool cycle(vector<int>nums[],vector<int>&vis,int i)
  {
        if(vis[i]==1)return true;
        if(vis[i]==0){vis[i]=1;
       for(auto it:nums[i]){
         if(cycle(nums,vis,it))return true;
       }}
      vis[i]=2;
      return false;
  }
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int>nums[n];
        for(auto it:pre)
          nums[it[1]].push_back(it[0]);
        vector<int>vis(n,0);
      for(int i=0;i<n;i++)
      {
          if(cycle(nums,vis,i))return false;
      }
            return true;
     }
  
};
