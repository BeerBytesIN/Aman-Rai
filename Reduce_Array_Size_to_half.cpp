class Solution {
public:
    int minSetSize(vector<int>& nums) {
        unordered_map<int,int>m1;
        int i,j,k;
        int n=nums.size();
        for(i=0;i<n;i++)
          m1[nums[i]]++;
        vector<pair<int,int>>res;
       for(auto it:m1)
         res.push_back(make_pair(it.second,it.first));
       int r=n/2;
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
      int c=0;
        for(i=0;i<res.size();i++)
        {
          r-=res[i].first;c++;
          if(r<=0)break;
        }
          return c;
    }
};