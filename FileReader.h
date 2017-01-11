#ifndef FILEREADER_H_
#define FILEREADER_H_

#include <fstream>
#include <string>

class FileReader {
public:
  std::string readFromFileToStringLineByLine(std::string fileName);
};

#endif /* FILEREADER_H_ */
