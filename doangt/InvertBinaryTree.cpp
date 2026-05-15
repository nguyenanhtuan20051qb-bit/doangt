
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }
        
        // Hoán đổi con trái và con phải
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        // Tiếp tục đảo ngược các nhánh con
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};