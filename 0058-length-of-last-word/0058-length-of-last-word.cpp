class Solution {
public:
    int lengthOfLastWord(string s) {
        string word;
        stringstream ss(s);
        vector<string> k;
        while (getline(ss, word, ' ')) {
            if (!word.empty()) {
                k.push_back(word);
            }
        }
        return k.back().size();
    }
};