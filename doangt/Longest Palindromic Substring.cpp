class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() < 1) return "";
        int start = 0, end = 0;

        for (int i = 0; i < s.length(); i++) {
            // Trường hợp tâm là 1 ký tự (chuỗi lẻ: "aba")
            int len1 = expandAroundCenter(s, i, i);
            // Trường hợp tâm nằm giữa 2 ký tự (chuỗi chẵn: "abba")
            int len2 = expandAroundCenter(s, i, i + 1);
            
            int len = max(len1, len2);
            // Nếu tìm thấy chuỗi dài hơn, cập nhật vị trí biên
            if (len > end - start + 1) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }

private:
    int expandAroundCenter(string s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // Trả về độ dài của chuỗi đối xứng tìm được
        return right - left - 1;
    }
};