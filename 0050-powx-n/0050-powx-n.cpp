class Solution {

    double power(double x, long long n){
        if(n==0) return 1;

        double half=pow(x,n/2);
        if(n%2==0){
            return half*half;
        }

        return x*half*half;
    }
    public:
    double myPow(double x, int n) {
        long long exponent=n;
        if(exponent<0){
            x=1/x;
            exponent=-exponent;
        }


        return power(x, exponent);
    }
};