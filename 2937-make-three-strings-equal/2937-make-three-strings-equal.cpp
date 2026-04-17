class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n = min({s1.size(), s2.size(), s3.size()});
        int lcp = 0;
        
        for(int i=0; i<n; i++){
            if(s1[i] == s2[i] && s2[i] == s3[i]){
                lcp++;
            } else {
                break;
            }
        }
        
        if(lcp == 0) return -1;
        
        return (s1.size() - lcp) + (s2.size() - lcp) + (s3.size() - lcp);
    }
};
