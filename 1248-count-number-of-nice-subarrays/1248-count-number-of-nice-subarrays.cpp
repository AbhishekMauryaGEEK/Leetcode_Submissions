class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int prefix = 0;
        unordered_map<int,int> freq;
        
        // Base case: prefix sum 0 has occurred once
        freq[0] = 1;
        
        for (int i = 0; i < n; i++) {
            // Count odds: add 1 if odd, else 0
            prefix += (nums[i] % 2);
            
            // If prefix - k has appeared before, those subarrays are valid
            if (freq.find(prefix - k) != freq.end()) {
                ans += freq[prefix - k];
            }
            
            // Record current prefix
            freq[prefix]++;
        }
        
        return ans;
    }
};
