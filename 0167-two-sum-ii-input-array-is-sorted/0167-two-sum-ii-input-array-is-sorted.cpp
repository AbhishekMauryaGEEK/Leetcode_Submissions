class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        for (int i = 0; i < numbers.size() - 1; i++) {
            int value = target - numbers[i];
            int low = i+1;
            int high = numbers.size() - 1;
            while(low<=high){
                int mid= low+(high-low)/2;
                if (value == numbers[mid]) {
                    return{i+1,mid+1};
                } else if (value > numbers[mid]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return {};
    }
};