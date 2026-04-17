class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp;
        int check = 0;
        while (check < arr.size()) {
            for (int i = 0; i < arr.size(); i++) {
                if (check >= arr.size()) {
                    break;
                }
                if (arr[i] == 0) {
                    temp.push_back(0);
                    check++;
                    temp.push_back(0);
                    check++;
                } else {
                    temp.push_back(arr[i]);
                    check++;
                }
            }
        }
        arr = temp;
    }
};