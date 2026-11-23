#include <string>
#include <unordered_set>
#include <vector>

class Solution {
public:
    int numUniqueEmails(std::vector<std::string>& emails) {
        std::unordered_set<std::string> uniqueEmails;

        for (const std::string& email : emails) {
            auto atPos = email.find('@');
            std::string domain = email.substr(atPos); // includes '@'

            std::string local;
            local.reserve(atPos);
            for (std::size_t i = 0; i < atPos; ++i) {
                char c = email[i];
                if (c == '+') {
                    break;
                }
                if (c != '.') {
                    local.push_back(c);
                }
            }

            uniqueEmails.insert(local + domain);
        }

        return static_cast<int>(uniqueEmails.size());
    }
};