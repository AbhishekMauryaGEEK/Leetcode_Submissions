class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128, 0); // cover all ASCII chars
        for(char c : s) {
            freq[c]++;
        }
        
        int out = 0;
        bool hasOdd = false;
        for(int count : freq) {
            if(count % 2 == 0) {
                out += count;
            } else {
                out += count - 1; 
                hasOdd = true;
            }
        }
        
        if(hasOdd) out += 1; 
        return out;
    }
};
