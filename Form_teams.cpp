class Solution {
public:
    int numTeams(vector<int>& nums) {
        int i,j,k;
		int t=0;
		int n=nums.size();
		for(i=1;i<n-1;i++)
		{
			int ls=0,ll=0,rs=0,rl=0;
			for(j=i-1;j>=0;j--)
			{
				if(nums[j]>nums[i])ll++
				else if(nums[j]<nums[i])ls++;
			}
			for(j=i+1;j<n;j++)
			{
				if(nums[i]<nums[j)rl++;
				else if(nums[i]>nums[j])rs++;
			}
			t=t+(ll*rs)+(ls*rl);
		}
		return t;
	}
};