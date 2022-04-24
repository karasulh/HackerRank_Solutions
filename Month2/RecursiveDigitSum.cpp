int superDigit(string n, int k) {

long int sum=0;
    
if(n.length()==1)
    return stoi(n);

for(char& c:n){
    sum += c-48;
}
sum*=k;

return superDigit(to_string(sum),1);   
}

 
 //This solution exceeds time only for two case
/* 
int sumOfDigit(string m,int indx,int stlen){
    if(indx>=stlen)
        return 0;
    int sum=0;
    string sub= m.substr(indx,5);
    if(stlen>indx+5){
        indx+=5;
    }      
    else{
        sub=m.substr(indx,stlen-indx);
        indx=indx+(stlen-indx);
    }
    int num=stoi(sub);
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    
    return sum+sumOfDigit(m,indx,stlen);
}

int superDigit(string n, int k) {

long long int sum=0;
int temp=0;

int stlen=n.length();
sum=sumOfDigit(n,0,stlen);

sum*=k;
//Due to this while loops, it exceeds time. 
while(sum>10){
    while(sum>0){
        temp+=sum%10;
        sum/=10;
    }
    sum=temp;
    temp=0;
}

return sum;   
}
*/
