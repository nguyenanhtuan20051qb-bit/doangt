class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int n = s.length();
        int wordLen = words[0].length();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;

        if (n < totalLen) return result;

        // Lưu tần suất các từ mục tiêu
        unordered_map<string, int> wordFreq;
        for (const string& w : words) {
            wordFreq[w]++;
        }

        // Chạy cửa sổ trượt wordLen lần
        for (int i = 0; i < wordLen; i++) {
            int left = i;
            int count = 0;
            unordered_map<string, int> seen;

            for (int right = i; right <= n - wordLen; right += wordLen) {
                string sub = s.substr(right, wordLen);

                if (wordFreq.count(sub)) {
                    seen[sub]++;
                    count++;

                    // Nếu từ này xuất hiện nhiều hơn mức cho phép, thu hẹp left
                    while (seen[sub] > wordFreq[sub]) {
                        string leftWord = s.substr(left, wordLen);
                        seen[leftWord]--;
                        count--;
                        left += wordLen;
                    }

                    // Nếu tìm đủ số lượng từ
                    if (count == wordCount) {
                        result.push_back(left);
                    }
                } else {
                    // Gặp từ không có trong danh sách, reset cửa sổ
                    seen.clear();
                    count = 0;
                    left = right + wordLen;
                }
            }
        }

        return result;
    }
};