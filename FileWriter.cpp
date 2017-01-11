#include "FileWriter.h"
#include <fstream>

void FileWriter::writeToFileFromString(std::string fileName, std::string content) {
  std::ofstream newFile;
  newFile.open(fileName.c_str());
  newFile << content << '\n';
  newFile.close();
}
