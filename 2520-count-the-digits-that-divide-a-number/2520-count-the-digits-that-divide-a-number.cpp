class Solution {
public:
    int countDigits(int num) {
        int k=num;
        int count =0;
        while(k!=0){
            int l=k%10;
            k=k/10;
            if(num%l==0){
                count++;
            }
        }
        return count;
    }
};