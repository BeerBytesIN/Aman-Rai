class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int f) {
          
      int i,j;
      int n=nums.size();
      for(i=0;i<n and f>=0;i++)
      {
        if(i==0)
        {
          if(nums[i]==0 and i+1<n and nums[i+1]==0)
            nums[i]=1,f--;
          else if(i==n-1 and nums[i]==0)
            nums[i]=1,f--;
        }
        else if(i==n-1)
        {
          if(nums[i]==0 and nums[i-1]==0)
            nums[i]=1,f--;
        }
        else if(nums[i-1]+nums[i]+nums[i+1]==0)
          nums[i]=1,f--;
      }
      return f<=0;
      
    }
};
/*





*/