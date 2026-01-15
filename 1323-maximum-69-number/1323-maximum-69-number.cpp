class Solution {
public:
    int maximum69Number (int num) {
        vector<int>v;
        int ans=0;
        while(num!=0){
            v.push_back(num%10);
            num=num/10;
        }
        reverse(v.begin(), v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==6){
                v[i]=9;
                break;
            }
        }
        for(int k:v){
            ans=ans*10+k;
        }
        return ans;
    }
};