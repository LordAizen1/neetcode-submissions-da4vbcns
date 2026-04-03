class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==0) return {};
        unordered_map<int, int> count;
        vector<pair<int, int>> arr;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }
        for(auto& p: count){
            arr.push_back(p);
        }
        sort(arr.begin(), arr.end(), [](auto& a, auto& b){
            return a.second> b.second;
        });
        for(int i=0; i<arr.size(); i++){
            if(k-- == 0) break;
            result.push_back(arr[i].first);
        }

        return result;
    }
};
