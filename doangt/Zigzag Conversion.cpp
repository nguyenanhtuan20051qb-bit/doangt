class Solution {
public:
    string convert(string s, int numRows) {
        // Trường hợp đặc biệt: Chỉ có 1 hàng hoặc chuỗi quá ngắn
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        // Tạo một mảng các chuỗi, mỗi chuỗi đại diện cho một hàng
        vector<string> rows(min(numRows, (int)s.length()));
        int currRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currRow] += c;
            
            // Đổi hướng khi chạm hàng trên cùng hoặc hàng dưới cùng
            if (currRow == 0 || currRow == numRows - 1) {
                goingDown = !goingDown;
            }
            
            // Di chuyển đến hàng tiếp theo
            currRow += goingDown ? 1 : -1;
        }

        // Gộp tất cả các hàng lại thành chuỗi kết quả
        string result;
        for (string row : rows) {
            result += row;
        }
        
        return result;
    }
};