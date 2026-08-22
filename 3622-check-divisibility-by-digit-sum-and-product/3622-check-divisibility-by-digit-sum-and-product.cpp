class Solution {
public:
    bool checkDivisibility(int n) {
        int original =n;
     int digit_sum=0;
     int digit_mul=1;

        while(n>0){
            digit_sum+=n%10;
            digit_mul*=n%10;

            n=n/10;
        }
        int number=digit_sum+digit_mul;

        if(original%number==0){ return true;
        }
        return false ;
    }
};