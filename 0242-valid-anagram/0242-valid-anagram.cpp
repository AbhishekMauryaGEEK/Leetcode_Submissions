class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;  

        int dat[26] = {0};
        int dat2[26] = {0};

        for(int i = 0; i < s.size(); i++) {
            dat[s[i] - 'a']++;
            dat2[t[i] - 'a']++;
        }

        for(int i = 0; i < 26; i++) {
            if(dat[i] != dat2[i]) return false;
        }

        return true;
    }
};
