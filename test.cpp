#ifdef _TEST
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Decrypter.h"


TEST_CASE("Decrypter.decryptCaesarCipher() should return string with shifted the characters ") {
  Decrypter decrypter;
  std::string input = "alma";
  std::string decrypted = "";
  int shift = 1;
  decrypted = decrypter.decryptCaesarCipher(input, shift);
  REQUIRE(decrypted == "bmnb");
}

TEST_CASE("Decrypter.decryptCaesarCipher() should return string with shifted the characters except numbers") {
  Decrypter decrypter;
  std::string input = "al3ma";
  std::string decrypted = "";
  int shift = 1;
  decrypted = decrypter.decryptCaesarCipher(input, shift);
  REQUIRE(decrypted == "bm3nb");
}

TEST_CASE("Decrypter.decryptCaesarCipher() should return string with shifted the characters except whitespaces") {
  Decrypter decrypter;
  std::string input = "al ma";
  std::string decrypted = "";
  int shift = 1;
  decrypted = decrypter.decryptCaesarCipher(input, shift);
  REQUIRE(decrypted == "bm nb");
}

TEST_CASE("Decrypter.decryptCaesarCipher() should return 'c' from 'z', if shift 3 ") {
  Decrypter decrypter;
  std::string input = "z";
  std::string decrypted = "";
  int shift = 3;
  decrypted = decrypter.decryptCaesarCipher(input, shift);
  REQUIRE(decrypted == "c");
}

TEST_CASE("Decrypter.decryptCaesarCipher() should return 'x' from 'a', if shift -3 ") {
  Decrypter decrypter;
  std::string input = "a";
  std::string decrypted = "";
  int shift = -3;
  decrypted = decrypter.decryptCaesarCipher(input, shift);
  REQUIRE(decrypted == "x");
}

#endif
