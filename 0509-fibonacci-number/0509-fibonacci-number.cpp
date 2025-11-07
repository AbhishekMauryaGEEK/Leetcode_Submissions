class Solution {
public:
int dat[31]={0};
    int fib(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1||n==2){
            return 1;
        }
        else{
            if(dat[n]==0){
                dat[n]=fib(n-1)+fib(n-2);
            }
            return dat[n];
        }
    }
};