class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int total = 0;
        int i = 0;

        while (i < n) {
            char c = colors[i];
            int sum = 0, mx = 0;

            // process the whole group of same colors
            while (i < n && colors[i] == c) {
                sum += neededTime[i];
                mx = max(mx, neededTime[i]);
                i++;
            }

            // remove all except the max
            total += sum - mx;
        }

        return total;
    }
};
