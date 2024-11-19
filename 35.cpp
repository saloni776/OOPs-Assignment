#include <iostream>  
#include <sstream>   
#include <string>    
using namespace std;
string findLargestWord(const string&str){
    stringstream ss(str);
    string word;
    string largestWord;
    size_t maxLength=0;
    while(ss>>word){
        if(word.length()>maxLength){
            maxLength=word.length();
            largestWord=word;
        }
    }
    return largestWord;
}
int main()
{
    string input;
    cout<<"Enter a string";
    getline(cin,input);
    string largestWord=findLargestWord(input);
    cout<<"The largest word is "<<largestWord<<endl;
    return 0;
}
