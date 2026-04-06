class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        if(s.size()==1) return 1;
        int result = 0;
        int left = 0, right = 0;
        unordered_set<char> seen;
        while(right<s.size()){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            result = max(result, right-left+1);
            right++;
        }
        return result; 
    }
};
