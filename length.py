class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        
        // Bỏ qua khoảng trắng cuối chuỗi
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        
        int length = 0;
        // Đếm độ dài từ cuối cùng
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        
        return length;
    }
};
