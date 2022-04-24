/*
 * Complete the 'counterGame' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts LONG_INTEGER n as parameter.
 */

string counterGame(long n) {
    if(n==1) return "Richard";
    int order=0;
    while(n>1){
        order++;
        order%=2;
        cout<<n<<endl;
        int j=0;
        for(;j<64;j++){
            if(pow(2,j)==n){
                n/=2;
                break;
            }
            if(pow(2,j)>n){
                n=n-pow(2,j-1);
                break;
            }
        }   
    }
    
    if(order==0)
        return "Richard";
    else    
        return "Louise";
}
