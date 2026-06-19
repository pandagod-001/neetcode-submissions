#include <string>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }

        // Vector of size 26 for lowercase 'a'-'z'
        std::vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++; // Increment for string s
            count[t[i] - 'a']--; // Decrement for string t
        }

        // If all counts are 0, it's an anagram
        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }

        return true;
    }
};

