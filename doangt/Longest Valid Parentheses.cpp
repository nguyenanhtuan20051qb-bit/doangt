class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); // Điểm neo khởi đầu
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    // Nếu trống, dấu ')' này là dư thừa, 
                    // ta dùng nó làm điểm neo mới
                    st.push(i);
                } else {
                    // Tính độ dài từ chỉ số hiện tại đến chỉ số 
                    // của dấu ngoặc mở chưa được khớp gần nhất
                    maxLength = max(maxLength, i - st.top());
                }
            }
        }

        return maxLength;
    }
};