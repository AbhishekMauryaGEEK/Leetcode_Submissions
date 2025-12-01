class Solution {
public:
    vector<int> findWordsContaining(vector<string>& w, char x) {
        vector<int>v;
        for(int i=0;i<w.size();i++){
            string s=w[i];
           for(int j=0;s[j]!='\0';j++){
                if(x==s[j]){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};