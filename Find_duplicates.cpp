 Find All Duplicates in an Array
Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i,j;
      int n=nums.size();
      vector<int>res;
        for(i=0;i<n;i++)
        {
          int s=abs(nums[i]);
          if(nums[s-1]>0)nums[s-1]=-nums[s-1];
          else if(nums[s-1]<0){res.push_back(s);}
        }
      return res;
    }
};