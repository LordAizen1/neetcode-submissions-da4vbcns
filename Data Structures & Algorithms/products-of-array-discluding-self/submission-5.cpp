class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return {};
        vector<int> result(n, 1);
        for(int i=1; i<n; i++){
            result[i] = nums[i-1]*result[i-1];
        }
        int suffix=1;
        for(int i=n-2; i>=0; i--){
            suffix = suffix * nums[i+1];
            result[i] = result[i]*suffix;
        }
        return result;
    }
};
