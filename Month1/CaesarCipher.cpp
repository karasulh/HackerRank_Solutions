string caesarCipher(string s, int k) {
    string result;
    for(auto ch:s){
        char t;
        k=k%26; //26 char in alphabet
        if(ch>=65 && ch<=90){
            if(ch+k>90){
                t=(ch+k)%91+65;
            }
            else{
                t=ch+k;
            }
        }
        else if(ch>=97 && ch<=122){
            if(ch+k>122){
                t=(ch+k)%123+97;
            }
            else{
                t=ch+k;
            }
        }
        else{
            t=ch;
        }
        cout<<(int)t<<endl;
        result.push_back(t);
    }
    return result;
}
