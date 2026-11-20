#include <numeric>
#include <unordered_map>
#include <vector>

class Solution {
public:
    bool hasGroupsSizeX(std::vector<int>& deck) {
        std::unordered_map<int, int> freq;
        for (int card : deck) {
            ++freq[card];
        }

        int g = 0;
        for (const auto& [_, count] : freq) {
            g = std::gcd(g, count);
            if (g == 1) {
                return false; // Early exit: no X >= 2 can divide all counts
            }
        }

        return g >= 2;
    }
};