#include "Decrypter.h"
#include <ctype.h>

Decrypter::Decrypter() {
}

std::string Decrypter::decryptCaesarCipher(std::string input, int shift) {
  std::string result = "";
  for (unsigned int i = 0; i < input.size(); i++) {
    if (!isalnum(input[i]) || isdigit(input[i])) {
      result += input[i];
    } else {
      if (input[i] == 'z' && shift > 0) {
        result += (input[i] - 26) + shift;
      } else if (input[i] == 'a' && shift < 0) {
        result += (input[i] + 26) + shift;
      } else {
        result += input[i] + shift;
      }
    }
  }
  return result;
}

Decrypter::~Decrypter() {
}

