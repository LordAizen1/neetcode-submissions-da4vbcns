class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        string encoded_string = "";
        for(string s: strs){
            encoded_string += to_string(s.length())+"#"+s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        while(i<s.length()){
            int j = s.find('#', i);
            int len = stoi(s.substr(i, j-i));
            result.push_back(s.substr(j+1, len));
            i = j+1+len;
        }
        return result;
    }
};
