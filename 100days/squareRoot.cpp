//leetcode 69
class Solution {
public:
    int mySqrt(int x) {
        int result=0;
        
        while( result*result<x){
            result++;
            if(result>=46341 ){
                break;
            }
        }
        if(result<46341 && result* result>x){
            result--;
        }
        if(result==46341){
            result--;
        }
        
        return result;
    }
};