class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int ex) {
        vector<bool>v;
        int max_ele=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>max_ele){
                max_ele=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]+ ex >=max_ele){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        return v;
    }
};