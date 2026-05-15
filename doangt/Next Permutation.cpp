class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Bước 1: Tìm chỉ số i đầu tiên từ phải sang mà nums[i] < nums[i+1]
        while (i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }

        if (i >= 0) {
            // Bước 2: Tìm số đầu tiên bên phải lớn hơn nums[i] để swap
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        // Bước 3: Đảo ngược phần bên phải của i
        // Nếu i < 0 (mảng giảm dần hoàn toàn), nó sẽ đảo ngược cả mảng về tăng dần
        reverse(nums.begin() + i + 1, nums.end());
    }
};