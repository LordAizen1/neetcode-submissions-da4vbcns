class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        vector<pair<int, int>> temp;
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto& x: freq){
            temp.push_back(x);
        }

        sort(temp.begin(), temp.end(), [](auto& a, auto& b){
            return a.second> b.second;
        });
        
        for(auto& val: temp){
            if(k==0) break;
            result.push_back(val.first);
            k--;
        }
        return result;
    }
};
