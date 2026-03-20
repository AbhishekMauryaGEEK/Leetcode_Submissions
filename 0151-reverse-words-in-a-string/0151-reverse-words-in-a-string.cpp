class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int p1 = n - 1, p2 = n - 1;
        string result;
        while (p1 >= 0) {
            while (p1 >= 0 && s[p1] == ' ') p1--;
            if (p1 < 0) break;
            p2 = p1;
            while (p1 >= 0 && s[p1] != ' ') p1--;
            string word = s.substr(p1 + 1, p2 - p1);
            if (!result.empty()) result += " ";
            result += word;
        }
        return result;
    }
};
