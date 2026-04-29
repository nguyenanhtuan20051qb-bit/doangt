class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = nums[0]; // Tổng lớn nhất toàn cục
        int current_max = nums[0]; // Tổng lớn nhất kết thúc tại vị trí hiện tại

        for (int i = 1; i < nums.size(); i++) {
            // Quyết định: Cộng dồn hay bắt đầu lại từ nums[i]?
            current_max = max(nums[i], current_max + nums[i]);
            
            // Cập nhật kỷ lục toàn cục
            max_so_far = max(max_so_far, current_max);
        }

        return max_so_far;
    }
};