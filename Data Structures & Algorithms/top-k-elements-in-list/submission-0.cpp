#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::unordered_map<int, int> countMap;
        for (int num : nums) {
            countMap[num]++;
        }
        

        std::vector<std::vector<int>> buckets(n + 1);
        for (auto const& [num, count] : countMap) {
            buckets[count].push_back(num);
        }
        

        std::vector<int> result;
        for (int i = n; i >= 0 && result.size() < k; --i) {
            if (!buckets[i].empty()) {
                for (int num : buckets[i]) {
                    result.push_back(num);
                    if (result.size() == k) break;
                }
            }
        }
        
        return result;
    }

};