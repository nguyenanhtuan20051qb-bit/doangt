class Solution {
public:
    string intToRoman(int num) {
        // Định nghĩa các cặp giá trị và ký hiệu tương ứng theo thứ tự giảm dần
        vector<pair<int, string>> romanValues = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string result = "";

        for (auto const& [value, symbol] : romanValues) {
            // Trong khi số hiện tại vẫn lớn hơn hoặc bằng giá trị mốc
            while (num >= value) {
                result += symbol; // Thêm ký hiệu vào chuỗi kết quả
                num -= value;    // Trừ giá trị đó đi
            }
        }

        return result;
    }
};