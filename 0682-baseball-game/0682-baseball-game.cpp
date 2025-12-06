class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "+") {
                int a = v[v.size() - 1];
                int b = v[v.size() - 2];
                v.push_back(a + b);
            } 
            else if (ops[i] == "D") {
                v.push_back(2 * v.back());
            } 
            else if (ops[i] == "C") {
                v.pop_back();
            } 
            else {
                v.push_back(stoi(ops[i])); 
            }
        }
        
        int ans = 0;
        for (int x : v) ans += x;
        return ans;
    }
};
