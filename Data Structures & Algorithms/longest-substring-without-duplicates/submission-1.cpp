class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        if(s.size()==1) return 1;
        int result = 0;
        for(int i=0; i<s.size(); i++){
            unordered_set<int> seen;
            for(int j=i; j<s.size(); j++){
                if(seen.count(s[j])) break;
                seen.insert(s[j]);
                result = max(result, (int)seen.size());
            }
        }
        return result;
    }
};
