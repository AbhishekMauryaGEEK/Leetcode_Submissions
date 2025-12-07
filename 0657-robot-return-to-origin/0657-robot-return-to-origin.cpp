class Solution {
public:
    bool judgeCircle(string s) {
        int l = 0;
        int r = 0;
        int d = 0;
        int u = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == 'L') {
                l++;
            } else if (s[i] == 'U') {
                u++;
            } else if (s[i] == 'R') {
                r++;
            } else if (s[i] == 'D') {
                d++;
            }
        }
        if (l == r && d == u) {
            return true;
        }
        return false;
    }
};