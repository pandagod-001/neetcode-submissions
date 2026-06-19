#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         std::map<std::vector<int>, std::vector<string>> hash;
        for (string s: strs) {
            std::vector<int> bin_rep(26,0);
            for (char c: s) {
                bin_rep[c - 'a']++;
            }
            hash[bin_rep].push_back(s);
        }
        std::vector<std::vector<string>> retrun;
        for (pair<std::vector<int>, std::vector<string>> hp: hash) {
            retrun.push_back(hp.second);
        }
        return retrun;;
    }
};
