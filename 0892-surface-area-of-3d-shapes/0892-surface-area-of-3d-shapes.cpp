class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {

        int n = grid.size();
        int area = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                int h = grid[i][j];

                if(h == 0)
                    continue;

                // Top and bottom
                area += 2;

                // Four sides
                area += 4 * h;

                // Remove overlapping sides with left neighbor
                if(i > 0)
                    area -= 2 * min(h, grid[i-1][j]);

                // Remove overlapping sides with upper neighbor
                if(j > 0)
                    area -= 2 * min(h, grid[i][j-1]);
            }
        }

        return area;
    }
};