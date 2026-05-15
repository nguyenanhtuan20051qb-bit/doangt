class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0]; // Giả định số đầu tiên là gần nhất

        for (int i = 1; i < nums.size(); i++) {
            // So sánh giá trị tuyệt đối
            if (abs(nums[i]) < abs(closest)) {
                closest = nums[i];
            } 
            // Nếu khoảng cách bằng nhau, chọn số lớn hơn
            else if (abs(nums[i]) == abs(closest)) {
                if (nums[i] > closest) {
                    closest = nums[i];
                }
            }
        }

        return closest;
    }
};