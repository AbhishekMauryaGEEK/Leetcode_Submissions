class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>v;
        int alice,bob;
        sort(nums.begin(),nums.end(),greater<int>());
        while(!nums.empty()){
             alice =nums.back();
             nums.pop_back();
             bob =nums.back();
             nums.pop_back();
            v.push_back(bob);
            v.push_back(alice);
        }
        return v;
    }
};