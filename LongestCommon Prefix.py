class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // Giả sử prefix ban đầu là chuỗi đầu tiên
        string prefix = strs[0];
        
        // Duyệt qua các chuỗi còn lại
        for (int i = 1; i < strs.size(); i++) {
            // Thu gọn prefix cho đến khi nó khớp với đầu chuỗi strs[i]
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return "";
            }
        }