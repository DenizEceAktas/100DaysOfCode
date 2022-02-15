//pages start from right side with 1 and to get to p how many pages should be turned from start and end(n) find minimum

int pageCount(int n, int p) {
    int front=(p)/2;
    if(p<2){
        front=1;
    }
    if(p==1){
        return 0;
    }
    int back=(n-p)/2;
    if(p%2==1 && n-p<2){
        back++;
    }
    if(n==p){
        back=0;
    }
    
    return min(front,back);
}