class Solution {
public:
    vector<int> findPeaks(vector<int>& q) {
        vector<int>v;
        for(int i=1;i<q.size()-1;i++){
            if(q[i]>q[i-1] &&q[i]>q[i+1]){
                v.push_back(i);
            }
        }
        return v;
    }
};