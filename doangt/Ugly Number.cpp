class Solution {
public:
    bool isUgly(int n) {
        // Ugly numbers phải là số dương
        if (n <= 0) return false;

        // Triệt tiêu hết các thừa số 2, 3, 5
        // Sử dụng vòng lặp để chia liên tục
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        // Nếu sau khi chia hết mà n còn lại là 1 thì đó là số xấu xí
        return n == 1;
    }
};