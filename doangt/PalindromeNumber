class Solution {
public:
    bool isPalindrome(int x) {
        // Loại bỏ các trường hợp âm và kết thúc bằng 0 (ngoại trừ 0)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        // Chạy vòng lặp cho đến khi x nhỏ hơn hoặc bằng số đã đảo ngược
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        return x == revertedNumber || x == revertedNumber / 10;
    }
};