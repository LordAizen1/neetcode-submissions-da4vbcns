class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==0) return {};
        vector<int> result;
        unordered_map<int, int> freq;
        vector<pair<int, int>> temp;
        for(auto& num: nums){
            freq[num]++;
        }

        for(auto& x: freq){
            temp.push_back(x);
        }

        sort(temp.begin(), temp.end(), [](auto& a, auto& b){
            return a.second> b.second;
        });

        for(auto& num: temp){
            if(k-- ==0) break;
            result.push_back(num.first);
        }

        return result;
    }
};
