class Solution {
public:
    bool validMountainArray(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        for(i=0;i<n-1;i++)
        {
          if(nums[i]<nums[i+1])continue;
          else break;
        }
      if(i==n-1)return false;
        for(j=0;j<n-1;j++)
        {
          if(nums[j]>nums[j+1])continue;
          else break;
        }
      if(j==n-1)return false;
      while(i<n-1)
      {
        if(nums[i]<=nums[i+1])return false;
        i++;
      }
      return true;
    }
};