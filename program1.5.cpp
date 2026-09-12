#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s1,s2;
    cout<<"enter first word:";
    cin>>s1;
    cout<<"enter second word:";
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if (s1==s2)
    cout<<"the words are anagrams."<<endl;
    else
    cout<<"the words are not anagrams."<<endl;
    return 0;
}