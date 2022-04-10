int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int result=0;
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    map<string,int> mapChar;
    mapChar["numbers"]=0;
    mapChar["lower"]=0;
    mapChar["upper"]=0;
    mapChar["special"]=0;
    for(auto ch:password){
        if(numbers.find(ch)!=string::npos){
          mapChar["numbers"]++;
        }
        if(lower_case.find(ch)!=string::npos){
          mapChar["lower"]++;
        }  
        if(upper_case.find(ch)!=string::npos){
          mapChar["upper"]++;
        }
        if(special_characters.find(ch)!=string::npos){
          mapChar["special"]++;
        } 
    }
    for(auto cases:mapChar){
        if(cases.second==0)
            result++;
    }
    
    if((result+n)<6)
        result+=(6-(result+n));
    return result;

}
