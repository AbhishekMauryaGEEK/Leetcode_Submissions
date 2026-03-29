class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool res=false;
        unordered_map<int,int>freq;
        for(int nums:nums){
            freq[nums]++;
            if(freq[nums]>1){
                res=true;
                break;
            }
        }
        // for( auto &k:freq){
        //     if(k.second>1){
        //         res=true;
        //         break;
        //     }
        // }
        return res;
    }
};