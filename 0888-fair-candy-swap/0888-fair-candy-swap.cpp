class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {

        int sumA = 0, sumB = 0;

        for(int x : aliceSizes)
            sumA += x;

        for(int y : bobSizes)
            sumB += y;

        int diff = (sumA - sumB) / 2;

        for(int x : aliceSizes) {
            for(int y : bobSizes) {
                if(x - y == diff) {
                    return {x, y};
                }
            }
        }

        return {};
    }
};