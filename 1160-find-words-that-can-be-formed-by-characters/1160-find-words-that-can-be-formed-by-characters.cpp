class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq1(26, 0);
        for (char c : chars) {
            freq1[c - 'a']++;
        }
        int len = 0;
        vector<int> freq2(26, 0);
        for (int i = 0; i < words.size(); i++) {
            for (char c : words[i]) {
                freq2[c - 'a']++;
            }
            bool flag = true;
            for (int i = 0; i < 26; i++) {
                if (freq1[i] < freq2[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag == true) {
                len += words[i].size();
            }
            freq2.assign(26,0);
        }
        return len;
    }
};