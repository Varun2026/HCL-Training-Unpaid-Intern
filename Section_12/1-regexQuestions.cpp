#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> questions = {
        "1. What is regex?",
        "2. How to match digits?",
        "3. How to match letters?",
        "4. What is alternation in regex?",
        "5. How to use quantifiers?",
        "6. What is a character class?",
        "7. How to match word boundaries?",
        "8. What is greedy matching?",
        "9. How to make quantifiers lazy?",
        "10. What is a lookbehind?",
        "11. How to match email addresses?",
        "12. What is regex in C++?",
        "13. How to use std::regex?",
        "14. What is std::regex_match?",
        "15. How to use std::regex_search?",
        "16. What is std::regex_replace?",
        "17. How to handle case insensitive matching?",
        "18. What are regex flags?",
        "19. How to escape special characters?",
        "20. What is a backreference?",
        "21. How to use groups in regex?",
        "22. What is a non-capturing group?",
        "23. How to match repeated patterns?",
        "24. What is regex performance?",
        "25. How to debug regex?"
    };
    for (auto& q : questions) {
        std::cout << q << std::endl;
    }
    return 0;
}