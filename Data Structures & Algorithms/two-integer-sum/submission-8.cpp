class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1, -1};
        unordered_map<int, int> result;
        for(int i=0; i<nums.size(); i++){
            int expected_sum = target - nums[i];
            if(result.find(expected_sum)!=result.end()) return {result[expected_sum], i};
            result[nums[i]] = i;
        }
    }
};
