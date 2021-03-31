class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l,h;
        l=0,h=nums.size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==t)return mid;
            else if(nums[mid]>t)h=mid-1;
            else
                l=mid+1;
        }
        return l;
    }
};