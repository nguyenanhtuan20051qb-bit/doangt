class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        // Thêm khoảng đầu tiên vào kết quả để bắt đầu so sánh
        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            // Lấy khoảng cuối cùng đã được thêm vào merged
            vector<int>& last = merged.back();
            if (intervals[i][0] <= last[1]) {
                // Gộp bằng cách cập nhật end
                last[1] = max(last[1], intervals[i][1]);
            } else {
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};