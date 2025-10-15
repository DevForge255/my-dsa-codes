#include <iostream>
#include <string>
using namespace std;
bool isdig( char a){
    char arr[] = {'0','1','2','3','4','5','6','7','8','9'}; // isme ham direct numbers se check kar rahe the par humna unka data type bahar char rakha tha 
    for(int i=0;i<9;i++){
        if(a==arr[i]){
            return true;
        }
        
    }
    return false;
}
bool ischar( char a){
    char arr[]={'+','-'};
    for(int i=0;i<2;i++){
        if(a==arr[i]){
            return true;
        }
        
    }
    return false;
}
int main(){
    string s="-42word98";
    string s1=" ";
    for(int i=0;i<s.length();i++){
        if(ischar(s[i]) || isdig(s[i])){
            s1=s1+s[i];
        }
        
    }
    cout<<"the required number with sign in string is. "<<s1;
}
