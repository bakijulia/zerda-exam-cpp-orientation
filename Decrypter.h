#ifndef DECRYPTER_H_
#define DECRYPTER_H_

#include <string>

class Decrypter {
private:
  bool isOverflow(char);
public:
  Decrypter();
  std::string decryptCaesarCipher(std::string, int shift);
  ~Decrypter();
};

#endif /* DECRYPTER_H_ */
