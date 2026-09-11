#include<iostream>
#include<string>
using namespace std;
int main() {
    string S;
    cout<<"Enter a word: ";
    cin>>S;
    cout<<"Length : "<<S.length()<<endl;
    cout<<"upper";
    for(char c:S) cout<<(char)toupper(c);
    cout<<endl;
    bool pal=true;
    for (size_t i=0,j=S.size()-1;i<j;++i,--j)
        if(S[i]!=S[j]){
            pal=false;
            break;
        }
    
    cout<<S<<(pal ?" is ":"is not")<<" a palindrome\n";
    size_t pos=S.find("an");
    if(pos!=string::npos)cout<<" 'an' found at index "<<pos<<endl;
    else cout<<" 'an' not found\n";
    return 0;
}