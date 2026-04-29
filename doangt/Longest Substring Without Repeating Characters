class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Mảng lưu vị trí xuất hiện cuối cùng của ký tự + 1
        // (Khởi tạo bằng 0 nghĩa là chưa từng gặp)
        int lastPos[128] = {0}; 
        int maxLength = 0;
        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            char currentChar = s[right];

            // Nếu ký tự đã xuất hiện và vị trí của nó nằm trong cửa sổ hiện tại
            if (lastPos[currentChar] > left) {
                // Nhảy left đến vị trí sau vị trí cũ của ký tự trùng
                left = lastPos[currentChar];
            }

            // Cập nhật vị trí mới nhất của ký tự
            lastPos[currentChar] = right + 1;
            
            // Tính toán độ dài cửa sổ hiện tại
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};