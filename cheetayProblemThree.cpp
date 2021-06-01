#include <iostream>
using namespace std;


int countMin(string str){
    int count[256]={0};
     int count2[256]={0};
     for (int i = 0; i < str.length(); i++){
            count[str[i]]++;
            
     }
     int i=0;
     for(;i<str.length();i++){
           count2[str[i]]++;
        if(count2[str[i]]==count[str[i]]){
            i++;
           // cout<<str[i]<<count[str[i]];
            break;
        }
     }
     return (str.length()-i);
     
}

int main() {
string str = "aabbcc";
cout<<"Minimum required characters = "<<countMin(str);
return 0;
}