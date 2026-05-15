class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // 0 và 1 có căn bậc hai là chính nó

        int low = 1, high = x / 2; // Căn bậc hai của x luôn <= x/2 khi x >= 2
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            long long square = (long long)mid * mid;

            if (square == x) {
                return mid;
            } else if (square < x) {
                ans = mid;   
                low = mid + 1; 
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};