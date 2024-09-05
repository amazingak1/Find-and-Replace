#include <iostream>
#include <string>
using namespace std;

void find_and_replace(string& paragraph, const string& word, const string& replacement) {
    size_t pos = 0;
    
    // Loop to find all occurrences of the word
    while ((pos = paragraph.find(word, pos)) != string::npos) {
        // Check if the found word is a complete word
        if ((pos == 0 || paragraph[pos - 1] == ' ') && 
            (pos + word.length() == paragraph.length() || paragraph[pos + word.length()] == ' ')) {
            paragraph.replace(pos, word.length(), replacement);
        }
        // Move the position forward after replacement
        pos += replacement.length();
    }
}

int main() {
    string paragraph = "Python is a powerful programming language. A powerful tool for developers.";
    string word = "powerful";
    string replacement = "versatile";

    cout << "Original paragraph: " << paragraph << endl;
    find_and_replace(paragraph, word, replacement);
    cout << "Modified paragraph: " << paragraph << endl;

    return 0;
}
