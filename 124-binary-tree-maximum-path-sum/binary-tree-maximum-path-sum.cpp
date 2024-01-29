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
int height(TreeNode* node, int& maxi)
{


         if(node==0)
        {
            return 0; 
        }
        else 
        {
            int l=max(0, height(node->left,maxi));
            int r=max(0,height(node->right,maxi)); 
            maxi=max(maxi,node->val+l+r);
            return node->val + max(l,r);
        }
}

    
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        height(root,maxi);
        return maxi;
    }
};