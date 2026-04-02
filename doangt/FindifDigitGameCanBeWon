class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigitSum = 0;
        int doubleDigitSum = 0;
        
        for (int x : nums) {
            if (x < 10) {
                singleDigitSum += x;
            } else {
                doubleDigitSum += x;
            }
        }
        
        return singleDigitSum != doubleDigitSum;
    }
};