//hackerrank towerbreakers

int towerBreakers(int n, int m) {
    int winner=1;
    if(n%2==0 || m==1){
        winner=2;
    }  
    return winner;
}