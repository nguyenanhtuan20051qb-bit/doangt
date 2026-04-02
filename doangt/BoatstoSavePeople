class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int left = 0;
        int right = people.size() - 1;
        int boats = 0;
        
        while (left <= right) {
            // Nếu người nhẹ nhất và nặng nhất đi chung được
            if (people[left] + people[right] <= limit) {
                left++;
            }
            // Trong mọi trường hợp, người nặng nhất cũng phải đi
            right--;
            boats++;
        }
        
        return boats;
    }
};