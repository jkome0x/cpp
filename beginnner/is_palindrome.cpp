#include <iostream>

bool is_palindrome(std::string text){
    std::string reversed_str;
    
    for (int i = text.length() - 1; i >= 0; --i) {
        reversed_str += text[i];
    }
    return (reversed_str==text);

}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
