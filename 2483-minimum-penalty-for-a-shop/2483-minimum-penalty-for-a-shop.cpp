class Solution {
public:
    int bestClosingTime(string s) {
        int min_palenty = INT_MAX;
        int cur_palenty=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='Y'){
                cur_palenty++;
            }
        }
        int temp_pen=cur_palenty;
        for (int i = 1; i < s.size(); i++) {
            if(s[i]=='Y'){
                temp_pen--;
            }
            else{
                temp_pen++;
            }
           min_palenty= min(min_palenty,temp_pen);
        }
        if(cur_palenty==s.size()||cur_palenty==0){
            return cur_palenty;
        }
        else{

        return min_palenty;
        }
    }
};