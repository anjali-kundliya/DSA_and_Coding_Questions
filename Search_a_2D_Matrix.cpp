class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (!matrix.size() || !matrix[0].size())
            return false;
		int row, l = 0, r = matrix.size() - 1, mid;
        while (l < r) {
            mid = (l + r) / 2;
            if (matrix[mid].back() < target) l = mid + 1;
            else if (matrix[mid][0] > target) r = mid - 1;
            else {
                l = mid;
                break;
            };
        }

        row = l;
        l = 0;
        r = matrix[0].size() - 1;
        while (l <= r) {
            mid = (l + r) / 2;
            if (matrix[row][mid] < target) l = mid + 1;
            else if (matrix[row][mid] > target) r = mid - 1;
            else
                return true;
        }
        return false;
    }
};
