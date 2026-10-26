
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        string word = "";
        string ans = "";
        int maxFreq = 0;

        paragraph += ' ';

        for (char c : paragraph) {
            if (isalpha(c)) {
                word += tolower(c);
            } else if (!word.empty()) {
                if (ban.find(word) == ban.end()) {
                    freq[word]++;

                    if (freq[word] > maxFreq) {
                        maxFreq = freq[word];
                        ans = word;
                    }
                }
                word = "";
            }
        }

        return ans;
    }
};
