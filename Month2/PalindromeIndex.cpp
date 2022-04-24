/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int palindromeIndex(string s) {
    
    int i=0;
    int suspect;
    
    for(;i<s.length()/2;i++){             
        if(s[(s.length()-1-i)]!=s[i]){
            suspect=i;
            break;  
        }           
    }
    if(s.length()/2==i)
        return -1;
    
    //Second condition should be writen because there are some cases where first condition satisfies but it is not working totally like this example: abcddbca
    if(s[suspect+1]==s[(s.length()-1-suspect)] && s[suspect+2]==s[(s.length()-2-suspect)] )
        return suspect;
    else
        return s.length()-1-suspect; 
    
}
