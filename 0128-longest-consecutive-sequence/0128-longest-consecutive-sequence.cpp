class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end()); 
        int longest = 0;

        for (int num : hash) { 
            if (!hash.count(num - 1)) { 
                int currentNum = num;
                int streak = 1;
                while (hash.count(currentNum + 1)) {
                    currentNum++;
                    streak++;
                }
                longest = max(longest, streak);
            }
        }
        return longest;
    }
};
