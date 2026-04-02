class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()) return{};
        unordered_map<string, vector<string>> group;
        vector<vector<string>> result;

        for(string s: strs){
            string t = s;
            sort(s.begin(), s.end());
            group[s].push_back(t);
        }

        for(auto& x: group){
            result.push_back(x.second);
        }
        
        return result;
    }
};
