# Find-and-Replace
This is code where we can find and replace words in any paragraph. with and wothout functions added



Description
This C++ program replaces all occurrences of a specified word in a paragraph with a replacement word. The replacement is only done if the word matches completely, not as part of another word.

Key Components
Initialization:

paragraph[]: The text to search and modify.
word[]: The target word to find.
replacement[]: The word to use as a replacement.
result[]: A buffer for the modified text.
Finding and Matching:

The program scans the paragraph character by character.
When a match for word is found, it checks if it's a complete word by examining its boundaries.
Replacement:

If the word is a complete match, it is replaced with replacement.
Non-matching characters and parts of the text are copied as is.
Output:

The modified text is stored in result[] and printed.
Example
For paragraph = "Python is a powerful programming language.", word = "powerful", and replacement = "versatile", the output will be "Python is a versatile programming language.".

This code processes the text manually, ensuring only complete words are replaced.








