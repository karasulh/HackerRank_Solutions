 void separateNumbers(string s) {
    long long int first; //should be long long for edge cases
    bool flag;
    
    for(int i=1;i<=s.length()/2;i++){
        flag=false;    
        long long int temp=stoull(s.substr(0,i));
        first=temp;
        string should_be=to_string(temp);
        for(;should_be.size()<s.size();){
            temp+=1;
            should_be+=to_string(temp);//create the expected s
        }
        //cout<<"should:"<<should_be<<endl; 
        if(should_be==s){ //compare "s" with expected s
            flag=true;
            string result="YES "+ to_string(first);
            cout<<result<<endl;
            break;
        }                      
    }   
    if(flag==false){
    string result="NO";
    cout<<result<<endl;
    }
}

//It is NOT working for some cases 
/*
void separateNumbers(string s) {
    int first;
    bool flag;
    
    for(int i=1;i<=s.length()/2;i++){
        flag=true;    
        int temp=stoi(s.substr(0,i));
        //cout<<"temp "<<temp<<endl;
        first=temp;
        for(int k=1;k<s.size()/i;k++){
            string s1=s.substr(k*i,i);
            int temp2;
            if(s1[0]!='0')
                temp2=stoi(s1);
            string s3=s.substr(k*i,i+1);
            int temp3;
            if(s3[0]!='0')
                temp3=stoi(s3);
            
            //cout<<"temp2 "<<temp2<<endl;
            //cout<<"temp3 "<<temp3<<endl;
            if(temp2==(temp+1)){
                temp=temp2;
            }
            else if(temp3==(temp+1)){
                temp=temp3;
                i++;
            }
            else{
                 flag=false;
                 break;
            }         
        }  
        if(flag==true){
            string result="YES "+ to_string(first);
            cout<<result<<endl;
            break;
        }                      
    }   
    if(flag==false){
    string result="NO";
    cout<<result<<endl;
    }
}
*/
