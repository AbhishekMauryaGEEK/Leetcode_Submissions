class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        bool flag1 = true;
        bool flag2 = true;
        for (int i = 0; s1[i] != '\0'; i++) {
            if (s1[i] - s2[i] > 0) {
                flag1 = false;
                break;
            }
        }
        for (int i = 0; s1[i] != '\0'; i++) {
            if (s2[i] - s1[i] > 0) {
                flag2 = false;
                break;
            }
        }
        if (flag1 == true || flag2 == true) {
            return true;
        } else {
            return false;
        }
    }
};