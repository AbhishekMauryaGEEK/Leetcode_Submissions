class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return false;
        unordered_map<char, int> alphabetMap;
        for (int i = 0; i < s1.size(); i++) {
            alphabetMap[s1[i]]++;
        }
        int left = 0;
        int right = s1.size();
        while (right <= s2.size()) {
            string sub = s2.substr(left, right - left);
            unordered_map<char, int> windowMap;
            for (int i = 0; i < sub.size(); i++) {
                windowMap[sub[i]]++;
            }
            if (windowMap == alphabetMap) {
                return true;
            }
            left++;
            right++;
        }
        return false;
    }
};