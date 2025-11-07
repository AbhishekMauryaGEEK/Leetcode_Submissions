class Solution {
public:
int dat[46]={0};
    int climbStairs(int n) {
        if(n==0){
            return 1;
        }
        else if (n<0){
            return 0;
        }
        else{
            if(dat[n]==0){
                dat[n]=climbStairs(n-1)+climbStairs(n-2);
            }
            return dat[n];
        }
    }
};