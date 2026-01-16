class Solution {
public:
    bool checkString(string s) {
        bool flag=true;
        for(int i=1;i<s.size();i++){
            if(s[i]=='a'&&s[i-1]=='b'){
                flag=false;
                break;
            }
        }
        if(!flag){
            return flag;
        }
        else{
            return flag;
        }
    }
};