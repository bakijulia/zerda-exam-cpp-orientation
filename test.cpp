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

TEST_CASE("Decrypter.decryptCaesarCipher() should return 'C' from 'Z', if shift 3 ") {
  Decrypter decrypter;
  std::string input = "Z";
  std::string decrypted = "";
  int shift = 3;
  decrypted = decrypter.decryptCaesarCipher(input, shift);
  REQUIRE(decrypted == "C");
}

TEST_CASE("Decrypter.decryptCaesarCipher() should return 'X' from 'A', if shift -3 ") {
  Decrypter decrypter;
  std::string input = "A";
  std::string decrypted = "";
  int shift = -3;
  decrypted = decrypter.decryptCaesarCipher(input, shift);
  REQUIRE(decrypted == "X");
}

TEST_CASE("Decrypter.decryptCaesarCipher() should return 'X' from 'C', if shift -6 ") {
  Decrypter decrypter;
  std::string input = "C";
  std::string decrypted = "";
  int shift = -3;
  decrypted = decrypter.decryptCaesarCipher(input, shift);
  REQUIRE(decrypted == "X");
}

#endif
