/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
int max(int x1, int x2)
{
    if (x1 < x2)
        return x2;
    return x1;
}
class Solution {
public:
    int maxDepth(TreeNode *root) {
        if(root == NULL)
            return 0;    
        
        return max(maxDepth(root->left), maxDepth(root->right))+1;
    }
};
