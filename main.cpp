#include <iostream>
#include <string>

class solution {
public:
  std::string shortestPalindrome(const std::string & s) {
    size_t i = 0;
    while (i < s.size() && !std::equal(s.begin(), s.begin()+s.size()-i, s.rbegin()+i))
      i++;
    std::string prepend;
    for (size_t j = 0; j < i; j++)
      prepend.append(1, *(s.rbegin()+j));
    prepend += s;
    return prepend;
  }
};

int main() {
  // std::string s{"aacecaaa"};
  std::string s{"abcd"};

  solution soln;
  std::string shortest = soln.shortestPalindrome(s);
  std::cout << "The shortest Palindrome string is:\n"
	    << shortest << std::endl;
}
