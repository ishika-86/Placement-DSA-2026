class Solution {
public:
    double myPow(double x, int n) {
        
        if(n < 0) {
            x = 1 / x;
        } 
        
        long num = labs(n);
        //converts n to a safe long to avoid integer overflow with INT_MIN
        double pow = 1;
        
        while(num){ // equivalent to while(num != 0)
            if(num & 1) { //even-> no multiply , odd-> multiply
                pow *= x;
            }           
            x *= x;
            num >>= 1;
        }
        
        return pow;
    }
};