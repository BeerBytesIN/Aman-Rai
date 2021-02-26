class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        stack<int>s1;
        int n=nums.size();
        vector<int>dis(n,-1);
        int i;
        for(i=0;i<n;i++)
        {
          while(!s1.empty() and nums[s1.top()]>=nums[i])
          {
            dis[s1.top()]=nums[i];
            s1.pop();
          }
          s1.push(i);
        }
      for(i=0;i<n;i++)
        nums[i]=dis[i]>-1?nums[i]-dis[i]:nums[i];
      return nums;
    }
};