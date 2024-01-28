/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
           return 0;
        }
       else if(root->right==NULL && root->left==NULL)
       {
           return 1;
       }
       else 
       {
      int r=root->right!=NULL?maxDepth(root->right): INT_MIN;
        int l=root->left!=NULL ?maxDepth(root->left):INT_MIN;
        return 1+max(l,r);
       }
      
    }
};