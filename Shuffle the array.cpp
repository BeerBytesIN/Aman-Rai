class Solution {
public:
    vector<int> shuffle(vector<int>& num, int n) {
       vector<int>v1,v2;
     int i, j=n;
       for(i=0;i<n;i++,j++)
       {
         v1.push_back(num[i]);
         v1.push_back(num[j]);
       }
      return v1;
    }
};