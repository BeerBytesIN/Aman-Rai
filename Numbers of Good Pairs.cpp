class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      unordered_map<int,int>m1;
      int i,p=0;
      for(i=0;i<nums.size();i++)
      {
        p=p+m1[nums[i]];
        m1[nums[i]]++;  
      }
      return p;      
      
    }
};