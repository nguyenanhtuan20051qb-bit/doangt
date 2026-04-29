class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        
        string res = "1";
        
        // Lặp từ 2 đến n để xây dựng chuỗi tiếp theo
        for (int i = 2; i <= n; i++) {
            string next_res = "";
            int len = res.length();
            
            for (int j = 0; j < len; j++) {
                int count = 1;
                // Đếm các ký tự giống nhau liên tiếp
                while (j + 1 < len && res[j] == res[j + 1]) {
                    count++;
                    j++;
                }
                // Thêm: [Số lượng] + [Ký tự]
                next_res += to_string(count) + res[j];
            }
            res = next_res; // Cập nhật chuỗi cho lần lặp sau
        }
        
        return res;
    }
};