class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int applecount=0;
        int count=0;
        int j=0;
        for(int i=0;i<apple.size();i++){
            applecount +=apple[i];
        }
        sort(capacity.begin(),capacity.end(),greater<int>());
            while(applecount>0 && j<capacity.size()){
                applecount -=capacity[j];
                count++;
                j++;
            }
    return count;
    }
};