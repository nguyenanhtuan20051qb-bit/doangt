class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        // Bảng ánh xạ số sang chữ cái
        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        vector<string> result;
        string current;
        backtrack(digits, 0, mapping, current, result);
        return result;
    }

private:
    void backtrack(const string& digits, int index, const vector<string>& mapping, 
                   string& current, vector<string>& result) {
        // Điều kiện dừng: Nếu đã duyệt hết các chữ số
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        // Lấy danh sách chữ cái tương ứng với chữ số hiện tại
        string letters = mapping[digits[index] - '0'];
        
        for (char c : letters) {
            current.push_back(c);           // Thử thêm chữ cái
            backtrack(digits, index + 1, mapping, current, result); // Đệ quy
            current.pop_back();            // Quay lui (xóa chữ cái vừa thêm)
        }
    }
};