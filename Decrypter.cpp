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
      if (isOverflowBack(input[i]) && shift > 0) {
        result += (input[i] - 26) + shift;
      } else if (isOverflowUp(input[i]) && shift < 0) {
        result += (input[i] + 26) + shift;
      } else {
        result += input[i] + shift;
      }
    }
  }
  return result;
}

bool Decrypter::isOverflowBack(char input) {
  return input == 'z' || input == 'Z';
}

bool Decrypter::isOverflowUp(char input){
  return input == 'a' || input == 'A';
}

Decrypter::~Decrypter() {
}
