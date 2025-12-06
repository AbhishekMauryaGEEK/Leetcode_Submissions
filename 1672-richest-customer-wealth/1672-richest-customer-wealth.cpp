class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwel=0;
        for(int i=0;i<accounts.size();i++){
            int tempmax=0;
            for(int j=0;j<accounts[i].size();j++){
                tempmax+=accounts[i][j];
            }
            maxwel=max(maxwel,tempmax);
        }
        return maxwel;
    }
};