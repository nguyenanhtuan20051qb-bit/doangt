class Solution {
public:
    void getLeaves(TreeNode* node, vector<int>& leaves) {
        if (!node) return;
        if (!node->left && !node->right) {
            leaves.push_back(node->val);
            return;
        }
        getLeaves(node->left, leaves);
        getLeaves(node->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        getLeaves(root1, leaves1);
        getLeaves(root2, leaves2);
        return leaves1 == leaves2;
    }
};