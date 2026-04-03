class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        vector<int> prefix;
        vector<int> suffix;
        prefix.push_back(1);
        for(int i=1; i<nums.size(); i++){
            prefix.push_back(prefix[i-1] *nums[i-1]);
        }
        suffix.resize(nums.size(), 1);
        for(int i=nums.size()-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        for(int i=0; i<nums.size(); i++){
            result.push_back(prefix[i]*suffix[i]);
        }
        return result;
    }
};
