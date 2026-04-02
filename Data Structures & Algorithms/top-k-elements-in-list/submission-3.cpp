class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==0) return {};
        unordered_map<int, int> count;
        vector<pair<int, int>> temp;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }

        for(auto& i: count){
            temp.push_back(i);
        }
        
        sort(temp.begin(), temp.end(), [](auto& a, auto& b){
            return a.second > b.second; 
        });

        for(int i=0; i<temp.size(); i++){
            if(k-- == 0) break;
            result.push_back(temp[i].first);
        }

        return result;
    }
};
