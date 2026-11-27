#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int rows = static_cast<int>(strs.size());
        int cols = static_cast<int>(strs[0].size());
        int deletions = 0;

        for (int col = 0; col < cols; ++col) {
            for (int row = 1; row < rows; ++row) {
                if (strs[row][col] < strs[row - 1][col]) {
                    ++deletions;
                    break;
                }
            }
        }

        return deletions;
    }
};