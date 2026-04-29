class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(nums, 0, result);
        return result;
    }

private:
    void backtrack(vector<int>& nums, int start, vector<vector<int>>& result) {
        // Điều kiện dừng: Nếu đã đứng ở vị trí cuối cùng
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            // Hoán đổi phần tử tại start với phần tử tại i
            swap(nums[start], nums[i]);
            
            // Tiếp tục tìm hoán vị cho phần còn lại của mảng
            backtrack(nums, start + 1, result);
            
            // Quay lui (Backtrack): Tráo đổi lại để trả mảng về trạng thái cũ
            swap(nums[start], nums[i]);
        }
    }
};