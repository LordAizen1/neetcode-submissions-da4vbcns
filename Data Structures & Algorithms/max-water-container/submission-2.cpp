class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxWater = 0;

        int left = 0, right = n-1;
        while(left<right){
            int area = min(heights[left], heights[right]) * (right - left);
            maxWater = max(maxWater, area);
            if(heights[left]<heights[right]) left++;
            else right--;
        }
        return maxWater;
    }
};
