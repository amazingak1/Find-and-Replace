def find_and_replace(paragraph, word, replacement):
    pos = 0
    
    while True:
        # Find the position of the next occurrence of the word
        pos = paragraph.find(word, pos)
        
        # If no more occurrences are found, break out of the loop
        if pos == -1:
            break
        
        # Check if the found word is a complete word
        # Ensure it's either at the start of the paragraph or preceded by a space
        # Ensure it's either at the end of the paragraph or followed by a space
        if (pos == 0 or paragraph[pos - 1] == ' ') and \
           (pos + len(word) == len(paragraph) or paragraph[pos + len(word)] == ' '):
            # Perform the replacement
            paragraph = paragraph[:pos] + replacement + paragraph[pos + len(word):]
            # Move position forward to skip the replaced word
            pos += len(replacement)
        else:
            # Move position forward to continue searching
            pos += len(word)

    return paragraph

# Example usage
paragraph = "Python is a powerful programming language. A powerful tool for developers."
word = "powerful"
replacement = "versatile"

print("Original paragraph:", paragraph)
modified_paragraph = find_and_replace(paragraph, word, replacement)
print("Modified paragraph:", modified_paragraph)
