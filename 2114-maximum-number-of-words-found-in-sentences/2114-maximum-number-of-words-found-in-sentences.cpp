class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int max_count = 0;
        for (string &s : s) {
            int count = 1;
            for (char c:s) {
                if (c ==' ') {
                    count++;
                }
            }
            max_count = max(count, max_count);
        }
        return max_count;
    }
};