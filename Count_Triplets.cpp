class Solution {
public:
    int countGoodTriplets(vector<int>& nums, int a, int b, int c) {
        int i,j,k;
        int n;
        n=nums.size();
        int res=0;
        for(i=0;i<n;i++)
        {
          for(j=i+1;j<n;j++)
          {
            if(abs(nums[i]-nums[j])<=a)
            {
              for(k=j+1;k<n;k++)
              {
                if(abs(nums[j]-nums[k])<=b and abs(nums[i]-nums[k])<=c)
                  res++;
              }
            }
          }
        }
      return res;
    }
};