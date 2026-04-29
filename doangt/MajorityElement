class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        
        for (int num : nums) {
            // Nếu số phiếu bị triệt tiêu hết, chọn ứng cử viên mới
            if (count == 0) {
                candidate = num;
            }
            
            // Nếu gặp cùng phe thì tăng phiếu, khác phe thì giảm phiếu
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;
    }
};