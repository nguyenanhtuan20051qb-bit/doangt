class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        // Bước 1: Tạo mảng các cặp {chiều cao, tên}
        vector<pair<int, string>> people;
        for (int i = 0; i < n; i++) {
            people.push_back({heights[i], names[i]});
        }
        sort(people.rbegin(), people.rend());

        // Bước 3: Lấy tên sau khi đã sắp xếp
        vector<string> result;
        for (int i = 0; i < n; i++) {
            result.push_back(people[i].second);
        }

        return result;
    }
};