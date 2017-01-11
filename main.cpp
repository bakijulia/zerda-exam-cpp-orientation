#ifndef _TEST

#include <iostream>
#include <stdlib.h>
#include "FileReader.h"
#include "FileWriter.h"
#include "Decrypter.h"

int main(int argc, char *argv[]) {
  std::string inputFileName;
  std::string outputFileName;
  std::string content;
  int shift;

  FileReader fileReader;
  FileWriter fileWriter;
  Decrypter decrypter;

  try {
    if (argc == 1) {
      std::cout << "No file provided.";
    } else if (argc == 2) {
      inputFileName = (std::string) argv[1];
      std::cout << inputFileName << std::endl;
      content = fileReader.readFromFileToStringLineByLine(inputFileName);
    } else if (argc == 3 && (std::string) argv[2] == "-s") {
      std::cout << "No shift is provided" << std::endl;
    } else if (argc == 4 && (std::string) argv[2] == "-s") {
      shift = atoi(argv[3]);
      std::cout << shift << std::endl;
      std::cout << "Decrypted content" << std::endl;
    } else if (argc == 6 && (std::string) argv[4] == "-o") { //if every arguments provided
      inputFileName = (std::string) argv[1];
      content = fileReader.readFromFileToStringLineByLine(inputFileName);
      shift = atoi(argv[3]);
      std::string decryptedContent = decrypter.decryptCaesarCipher(content, shift);
      outputFileName = (std::string) argv[5];
      fileWriter.writeToFileFromString(outputFileName, decryptedContent);
    }
  } catch (const char* errorMessage) {
    std::cout << "Error: " << errorMessage << std::endl;
  }
  return 0;
}

#endif
