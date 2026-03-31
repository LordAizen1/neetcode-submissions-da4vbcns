class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()) return {};
        vector<vector<string>> result;
        unordered_map<string, vector<string>> groups;
        for(string s: strs){
            string t = s;
            sort(s.begin(), s.end());
            groups[s].push_back(t);
        }

        for(auto& bruh: groups){
            result.push_back(bruh.second);
        }

        return result;
    }
};
