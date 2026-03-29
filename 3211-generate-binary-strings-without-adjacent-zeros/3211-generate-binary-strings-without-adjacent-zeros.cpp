class Solution {
public:
    void dfs(int n, string curr, vector<string>& v) {
        if (curr.size() == n) {
            v.push_back(curr);
            return;
        }
        if (curr.empty() || curr.back() == '1') {
            dfs(n, curr + '0', v);
            dfs(n, curr + '1', v);
        } else { 
            dfs(n, curr + '1', v);
        }
    }

    vector<string> validStrings(int n) {
        vector<string> v;
        dfs(n, "", v);   
        return v;
    }
};
