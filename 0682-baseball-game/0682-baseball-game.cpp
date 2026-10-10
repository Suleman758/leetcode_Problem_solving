
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                scores.pop_back();
            }
            else if (operations[i] == "D") {
                scores.push_back(2 * scores.back());
            }
            else if (operations[i] == "+") {
                int last = scores.back();
                int secondLast = scores[scores.size() - 2];
                scores.push_back(last + secondLast);
            }
            else {
                scores.push_back(stoi(operations[i]));
            }
        }

        int total = 0;

        for (int i = 0; i < scores.size(); i++) {
            total += scores[i];
        }

        return total;
    }
};