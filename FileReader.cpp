#include "FileReader.h"

std::string FileReader::readFromFileToStringLineByLine(std::string fileName) {
  std::ifstream sourceFile(fileName.c_str());
  std::string buffer;
  std::string content = "";
  if (sourceFile.is_open()) {
    while (getline(sourceFile, buffer)) {
      content += buffer + "\n";
    }
    sourceFile.close();
  } else {
    throw "The file is not existing";
  }
  return content;
}
