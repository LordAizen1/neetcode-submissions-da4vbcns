class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1, -1};
        unordered_map<int, int> index;
        for(int i=0; i<nums.size(); i++){
            int expected_num = target-nums[i];
            if(index.find(expected_num)!=index.end()) return {index[expected_num], i};
            index[nums[i]] = i;
        }
        // for(int i=0; i<nums.size(); i++){
        //     int expected_num = target-nums[i];
        //     if(index.find(expected_num)!=index.end() && index[expected_num]!=i) return {i, index[expected_num]};
        // }

        return {-1, -1};
    }
};
