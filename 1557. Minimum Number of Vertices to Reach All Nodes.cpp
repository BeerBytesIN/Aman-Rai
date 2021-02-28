class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& nums) {
         int i,j;
         vector<int>arr[n];
          vector<int>in(n,0);
        for(i=0;i<nums.size();i++)
        {
          arr[nums[i][0]].push_back(nums[i][1]);
          in[nums[i][1]]++;
        }
      vector<int>res;
        for(i=0;i<n;i++)
        {
          if(in[i]==0)res.push_back(i);
        }
      return res;
             
    }
};