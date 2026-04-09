class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        string result = "";
        int minLen = INT_MAX;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                string sub = s.substr(i, j-i+1);

                unordered_map<char, int> sub_str_freq;
                for(char ch: sub) sub_str_freq[ch]++;
                bool valid = true;
                
                for(char ch: t){
                    if(sub_str_freq[ch]<=0){
                        valid = false;
                        break;
                    }
                    sub_str_freq[ch]--;
                }
                if(valid && sub.size()<minLen){
                    minLen = sub.size();
                    result = sub;
                }
            }
        }
        return result;
    }
};
