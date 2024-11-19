#include<iostream>
#include<string>
using namespace std;
void capitalizeFirstLetter(string&str){
    bool capitalize=true;
for (int i=0;i<str.length();i++){
    if(capitalize &&isalpha(str[i])){
        str[i]=toupper(str[i]);
        capitalize=false;
    } else if(str[i]==' '){
    capitalize =true;
    }
}
}
int main()
{
    string input;
    cout<<"Enter a string";
    getline(cin,input);
    capitalizeFirstLetter(input);
    cout<<"Capitalized String"<<input<<endl;
    return 0;
}
