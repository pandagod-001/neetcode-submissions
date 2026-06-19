#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; 

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            
            if (mp.find(need) != mp.end()) {
                int j = mp[need];
                
                return {min(i, j), max(i, j)};
            }

            
            mp[nums[i]] = i;
        }

        return {}; 
    }
};
