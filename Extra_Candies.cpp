class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int extra) {
        int i,j;
        int d1=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        vector<bool>res(n);
        for(i=0;i<n;i++)
        {
          if(nums[i]>=d1)res[i]=true;
          else if(nums[i]+extra>=d1)res[i]=true;
          else
              res[i]=false;
        }
      return res;
    }
};