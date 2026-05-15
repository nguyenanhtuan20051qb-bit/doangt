class Solution {
public:
    void traverse(TreeNode* node, vector<int>& res) {
        if (node == nullptr) return;
        
        traverse(node->left, res);   // Trái
        traverse(node->right, res);  // Phải
        res.push_back(node->val);    // Gốc
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};