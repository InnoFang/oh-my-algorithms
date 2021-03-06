#include <iostream>
#include <string>

int getIndex(std::string text, std::string pattern) {
    int t = 0, p = 0;
    while (t < text.length() && p < pattern.length()) {
        if (text[t] == pattern[p]) {
            ++t;
            ++p;
        } else {
            t = t - p + 1;
            p = 0;
        }
    }
    return p == pattern.length() ? t - p : -1;
}

bool hasSubstring(std::string text, std::string pattern) {   
    return getIndex(text, pattern) != -1;	
}

int main() {
    std::string text = "abcabaaabaabcac";
    std::string pattern = "abaabcac";   
    std::cout << "Does the `text` contain the `pattern`? " << hasSubstring(text, pattern) << std::endl;
    std::cout << "What's the index that the `pattern` in the `text`? " << getIndex(text, pattern) << std::endl;
    return 0;
}
