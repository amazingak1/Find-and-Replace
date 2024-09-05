#include <iostream>
using namespace std;

int main() {
    char paragraph[] = "Python is a best programming language. A best tool for developers.";
    char word[] = "best";
    char replacement[] = "versatile";
    char result[500];  // To store the modified paragraph
    int i = 0, j = 0, k = 0;
    int start, end;
    int res_index = 0;
    bool is_word_match;

    while (paragraph[i] != '\0') {
        // Check if the current character matches the first character of the word
        if (paragraph[i] == word[j]) {
            start = i;  // Possible start of the word in the paragraph
            k = i;
            is_word_match = true;

            // Check if the word matches from current position
            while (word[j] != '\0' && paragraph[k] == word[j]) {
                k++;
                j++;
            }

            // If the entire word is matched
            if (word[j] == '\0') {
                // Ensure the word is a complete match by checking boundaries
                if ((paragraph[k] == ' ' || paragraph[k] == '\0') &&
                    (start == 0 || paragraph[start - 1] == ' ')) {
                    
                    // Append the replacement word to result
                    for (int r = 0; replacement[r] != '\0'; r++) {
                        result[res_index++] = replacement[r];
                    }
                    i = k;  // Move the index to skip the matched word
                } else {
                    // If not a complete match, copy the characters from start to end
                    while (start < k) {
                        result[res_index++] = paragraph[start++];
                    }
                }
                j = 0;  // Reset j for the next possible match
            } else {
                // If word isn't completely matched, copy the characters from start to end
                while (start < k) {
                    result[res_index++] = paragraph[start++];
                }
            }
        } else {
            // If no match, copy the current character to result
            result[res_index++] = paragraph[i++];
        }
    }

    result[res_index] = '\0';  // Null-terminate the result string

    // Output the modified paragraph
    cout << "Modified paragraph: " << result << endl;

    return 0;
}
