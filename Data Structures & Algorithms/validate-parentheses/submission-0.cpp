class Solution {
public:
    bool isValid(string s) {
        if(s.empty()) return true;
        stack<char> st;
        unordered_map<char, char> mp{
            {'}', '{'},
            {')', '('},
            {']', '['}
        };
        for(char c: s){
            if(c=='{' || c=='(' || c=='[') st.push(c);
            else{
                if(st.empty()) return false;
                if(st.top() != mp[c]) return false;
                st.pop();
            }
        }
        return st.empty();    
    }
};
