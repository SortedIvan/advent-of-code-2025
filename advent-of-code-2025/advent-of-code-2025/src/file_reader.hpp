#include <fstream>
#include <string>
#include <vector>

static class FileReader {
public:
    static std::vector<std::string> readLines(const std::string& path) {
        std::vector<std::string> lines;
        std::ifstream file(path);

        if (!file.is_open()) {
            throw std::runtime_error("Unable to open file: " + path);
        }

        std::string line;
        while (std::getline(file, line)) {
            lines.push_back(line);
        }

        return lines;
    }
};