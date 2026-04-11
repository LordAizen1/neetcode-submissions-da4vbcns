class Solution {
public:
    string minWindow(string s, string t) {
        if(s.empty() || t.empty()) return "";
        int freqT[128] = {0};
        for(char c: t) freqT[c]++;
        int left=0, matched=0, required=t.size();
        int minLen = INT_MAX, startIdx=0;
        string result="";
        int windowFreq[128] = {0};

        for(int right=0; right<s.size(); right++){
            char r= s[right];
            windowFreq[r]++;
            if(freqT[r]>0 && windowFreq[r]<=freqT[r]) matched++;
            while(matched==required){
                if(right-left+1 < minLen){
                    minLen = right-left+1;
                    startIdx = left;
                }
                char l = s[left];
                if(freqT[l]>0 && windowFreq[l]<=freqT[l]) matched--;

                windowFreq[s[left]]--;
                left++;
            }
        } 

        return minLen==INT_MAX ? "" : s.substr(startIdx, minLen);
    }
};
