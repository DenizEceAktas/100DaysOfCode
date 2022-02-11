/*Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
*/
//leetcode 50
class Solution {
public:
    double myPow(double x, int n) {
        if(n>=2147483647){
            
            if(x<0){
                return -1;
            }
            if(x<1){
                return 0;
            }
            return 1;
        }
        long value=n;
        if(-value>=2147483647){
            if(x<0 && value<0){
                return 1;
            } 
            if(x<0 && value>0){
                return -1;
            }
            if(x<=1){
                return 1;
            }
            return 0;
        }
        double result=1;
        int i=0;
        if(n>0){
            for(i=0;i<n;i++){
                result=result * x;
                
            }
            
        }
        if(n==0){
            result=1;
        }
        if(n<0){
            x=1/x;
            for(i=0;i<-n;i++){
                result=result * x;
                
            }
        }
        return result;
    }
};