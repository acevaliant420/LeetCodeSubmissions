//Coded by Rajat Kumar Thakur
class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        root->val = 0;

        vector<TreeNode*> arr = {root};
        while (!arr.empty()) {
            int sum = 0;
            for (auto node : arr) {
                if (!node) continue;
                if (node->left) sum += node->left->val;
                if (node->right) sum += node->right->val;
            }

            vector<TreeNode*> childArr;
            for (auto node : arr) {
                int curSum = 0;
                if (node->left) curSum += node->left->val;
                if (node->right) curSum += node->right->val;

                if (node->left) {
                    node->left->val = sum - curSum;
                    childArr.push_back(node->left);
                }
                if (node->right) {
                    node->right->val = sum - curSum;
                    childArr.push_back(node->right);
                }
            }

            arr = childArr;
        }

        return root;
    }
};
