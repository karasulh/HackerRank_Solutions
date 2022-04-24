/*
 * Complete the 'sumXor' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

long sumXor(long n) {
    /*//Subtask
    long result=0;
    for(long i=0;i<=n;i++){
        if((n^i)==(n+i))
            result++;
    }
    return result;
    */
    
    /*//Another Solution
    for (unsigned long long i = 1; i > 0 && i < n; i = i << 1)
        bin_zeros += !(n & i);
        return pow(2,bin_zeros);
    */
    
    //Think it as bits 5=101=>Take Xor of it => 2=010 => res=0_0=> 010 and 000 =>2
    //10=1010 => xored:0101 => result combination of it:0_0_ => 4 different choice
    int p=0;
    while(1){
        if(pow(2,p)>n)
            break;
        p++;
    }
    int count=0;
    long int xored = (pow(2,p)-1)-n;

    for(int i=0;i<p;i++){
        if((xored & 1)){
            count++;
            cout<<xored<<endl;
        }
        xored>>=1;
       
    }
    return pow(2,count);  
}
