class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";
        vector<int> freqT(128, 0);
        for (char c : t) freqT[c]++;
        vector<int> freqS(128, 0);
        int required = t.size(); 
        int left = 0, right = 0;
        int minLen = INT_MAX, start = 0;
        while (right < s.size()) {
            if (freqT[s[right]] > 0) {
                if (freqS[s[right]] < freqT[s[right]]) {
                    required--;  
                }
            }
            freqS[s[right]]++;
            right++;
            while (required == 0) {
                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }
                freqS[s[left]]--;
                if (freqT[s[left]] > 0 && freqS[s[left]] < freqT[s[left]]) {
                    required++; 
                }
                left++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
