class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for(int i=num1;i<=num2;i++){
            vector<int>num;
            int k=i;
            while(k!=0){
                num.push_back(k%10);
                k=k/10;
                }
                reverse(num.begin(),num.end());
                for(int j=1;j+1<num.size();j++){
                    int a=num[j-1],b=num[j],c=num[j+1];
                    if((a<b&&b>c)||(a>b&&b<c)){
                        count++;
                    }
                }
            }
        return count;
    }
};