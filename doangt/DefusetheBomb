class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        if (k == 0) return res;

        // Xác định phạm vi cửa sổ ban đầu [l, r]
        int l = 1, r = k;
        if (k < 0) {
            l = n - abs(k);
            r = n - 1;
        }

        // Tính tổng cửa sổ đầu tiên
        int currentSum = 0;
        for (int i = l; i <= r; i++) {
            currentSum += code[i];
        }

        // Trượt cửa sổ qua từng vị trí i
        for (int i = 0; i < n; i++) {
            res[i] = currentSum;
            
            // Di chuyển cửa sổ: Trừ phần tử l cũ, thêm phần tử r mới
            currentSum -= code[l % n];
            l++;
            r++;
            currentSum += code[r % n];
        }

        return res;
    }
};