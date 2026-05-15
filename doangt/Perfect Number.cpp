class Solution {
public:
    bool checkPerfectNumber(int num) {
        // Số hoàn hảo phải lớn hơn 1 (số 1 không có ước nào khác chính nó để cộng)
        if (num <= 1) return false;

        int sum = 1; // 1 luôn là ước của mọi số dương > 1
        
        // Duyệt từ 2 đến căn bậc hai của num
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                // Nếu i * i == num (số chính phương) thì chỉ cộng i một lần
                // Nếu không, cộng thêm ước còn lại là num / i
                if (i * i != num) {
                    sum += num / i;
                }
            }
        }

        return sum == num;
    }
};