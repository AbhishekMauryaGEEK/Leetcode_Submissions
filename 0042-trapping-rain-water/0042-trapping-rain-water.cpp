class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        int sum = 0;
        vector<int> maxleft(n), maxright(n), minLR(n);
        maxleft[0] = height[0];
        for (int i = 1; i < n; i++) {
            if (maxleft[i-1] < height[i]) {
                maxleft[i] = height[i];
            } else {
                maxleft[i] = maxleft[i-1];
            }
        }
        maxright[n-1] = height[n-1];
        for (int i = n-2; i >= 0; i--) {
            if (maxright[i+1] < height[i]) {
                maxright[i] = height[i];
            } else {
                maxright[i] = maxright[i+1];
            }
        }
        for (int i = 0; i < n; i++) {
            if (maxleft[i] < maxright[i]) {
                minLR[i] = maxleft[i];
            } else {
                minLR[i] = maxright[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (minLR[i] > height[i]) {
                sum += (minLR[i] - height[i]);
            } else {
                sum += 0;
            }
        }

        return sum;
    }
};
