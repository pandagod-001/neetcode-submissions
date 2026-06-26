class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max_water = 0;
        
        while (left < right) {
            int width = right - left;
            int h = (height[left] < height[right]) ? height[left++] : height[right--];
            max_water = std::max(max_water, h * width);
        }
        
        return max_water;
    }
};