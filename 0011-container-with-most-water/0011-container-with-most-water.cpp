class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxcap = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left <= right) {
            if (height[left] > height[right]) {
                maxcap = max(maxcap, ((right -left) * height[right]));
                right--;
            } else if (height[left] < height[right]) {
                maxcap=max(maxcap,((right-left)*height[left]));
                left++;
            }
            else{
               maxcap=max(maxcap,((right-left)*height[left]));
               left ++;
               right -- ;
            }
        }
        return maxcap;
    }
};