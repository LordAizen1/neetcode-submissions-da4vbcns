class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;
        for(auto& num: nums){
            if(!st.count(num-1)){
                int length = 1;
                while(st.count(length+num)){
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest; 
    }
};
