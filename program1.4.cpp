#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
int vowels=0,consonants=0;
cout<<"enter a sentence:";
getline(cin,s);
for (char ch:s){
    if(isalpha(ch)){
        ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        vowels++;
    }else{
        consonants++;

    }
    }
}
cout<<"vowels="<<vowels<<endl;
cout<<"consonants="<<consonants<<endl;
return 0;
}
