class Solution {
public:
  int x=0;
  void get(TreeNode *root,int m1)
  {
      int prev_max;
    if(!root)return ;
      if(root->val>=m1)
      { m1=root->val;x++;}
       prev_max=m1;
      get(root->left,m1);
      m1=prev_max;
       get(root->right,m1);
  }
    int goodNodes(TreeNode* root) {
      int m1=INT_MIN;   
      get(root,m1);   return x; 
     }
};
