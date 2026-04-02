class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char, int> char_count;
        for(int i=0; i<s.length(); i++){
            char_count[s[i]]++;
            char_count[t[i]]--;
        }
        // for(char ch: t){
        //     char_count[ch]--;
        // }
        for(auto& x: char_count){
            if(x.second!=0) return false;
        }
        return true;
    }
};
