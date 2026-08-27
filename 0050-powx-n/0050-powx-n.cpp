class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            return 1/power(x,-N);
        }
        return power(x,N);
    }
    double power(double x, long long n) {
        if(n==0){
            return 1;
        }
        if(n%2==0){
            double half=pow(x,n/2);
            return half*half;
            
        }
        else{
            double half=pow(x,n-1);
            return half*x;
        }
    

    }
};  
    