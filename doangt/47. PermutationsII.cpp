class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        vector<bool> used(nums.size(), false);
        
        // Bắt buộc phải sắp xếp để các phần tử trùng nhau nằm kề nhau
        sort(nums.begin(), nums.end());
        
        backtrack(nums, used, current, result);
        return result;
    }

private:
    void backtrack(vector<int>& nums, vector<bool>& used, 
                   vector<int>& current, vector<vector<int>>& result) {
        // Điều kiện dừng: Hoán vị đã đủ quân số
        if (current.size() == nums.size()) {
            result.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            // Nếu phần tử đã dùng rồi thì bỏ qua
            if (used[i]) continue;

            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
                continue;
            }

            used[i] = true;
            current.push_back(nums[i]);
            
            backtrack(nums, used, current, result);
            
            // Quay lui
            used[i] = false;
            current.pop_back();
        }
    }
};