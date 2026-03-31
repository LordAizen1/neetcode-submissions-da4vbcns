class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> result;
        for(int x: nums) count[x]++;

        vector<vector<int>> bucket(nums.size()+1);

        for(auto& [num, count]: count){
            bucket[count].push_back(num);
        }

        for(int i=bucket.size()-1; i>=0; i--){
            for(int num: bucket[i]){
                result.push_back(num);
                if(--k ==0) return result;
            }
        }
        return result;
    }
};
