class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1, -1};
        unordered_map<int, int> seen;
        for(int i=0; i<nums.size(); i++){
            int expected_sum = target - nums[i];
            if(seen.find(expected_sum)!=seen.end()) return {seen[expected_sum], i};
            seen[nums[i]] = i;
        }
        return {-1, -1};
    }
};
