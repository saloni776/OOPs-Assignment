#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

int countRepeatedLetters(const string &word) {
    unordered_map<char, int> letterCount;
    int repeated = 0;

    for (char ch : word) {
        letterCount[ch]++;
        if (letterCount[ch] == 2) { 
            repeated++;
        }
    }
    return repeated;
}

int main() {
    string input, word, resultWord;
    int maxRepeated = 0;

    cout << "Enter a sentence: ";
    getline(cin, input);

    
    stringstream ss(input);

    
    while (ss >> word) {
        int repeated = countRepeatedLetters(word);
        if (repeated > maxRepeated) {
            maxRepeated = repeated;
            resultWord = word;
        }
    }

    
    if (!resultWord.empty()) {
        cout << "Word with the highest number of repeated letters: " << resultWord << endl;
    } else {
        cout << "No word with repeated letters found." << endl;
    }

    return 0;
}

