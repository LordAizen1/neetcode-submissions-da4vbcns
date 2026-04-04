class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return false;
        string cleaned = "";
        for(char ch: s){
            if(isalnum(ch)){
                cleaned+=tolower(ch);
            }
        }

        string rev = cleaned;
        reverse(rev.begin(), rev.end());
        return cleaned == rev;
    }
};

//time complexity O(n) but takes space O(n) for cleaned and rev
