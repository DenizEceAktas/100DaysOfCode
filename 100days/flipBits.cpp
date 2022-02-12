
/*You will be given a list of 32 bit unsigned integers. Flip all the bits ( and ) and return the result as an unsigned integer.
*/
long flippingBits(long n) {
    long result=0;
    bitset<32> b(n);
    for(int i=0;i<b.size();i++){
        if(b[i]==0){
            b[i]=1;
        }else{
            b[i]=0;
        }
    }
    
    result=b.to_ulong();
    
    return result;
}