class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>dat(1001,0);
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                dat[nums[i][j]]++;
            }
        }
        for(int i=0;i<=1000;i++){
            if(dat[i]==nums.size()){
                v.push_back(i);
            }
        }
        return v;
    }
};