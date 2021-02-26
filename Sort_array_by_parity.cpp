class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int ev=0,od=0;
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j)
        {
          if(nums[i]%2==0 and nums[j]%2){i++;j--;}
          else if(!(nums[i]%2))i++;
          else if(nums[j]%2)j--;
          else 
            swap(nums[i++],nums[j--]);
        }
      return nums;
    }
};