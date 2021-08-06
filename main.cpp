#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string path;
    bool PathToFile = true;
    std::ifstream txtFile;
    do
    {
        std::cout << "Please, enter file name to open with full path: ";
        std::cin >> path;
        txtFile.open(path, std::ios::binary);
        if(!txtFile.is_open()){
            std::cout << "Bad file name!" << std::endl;
        }
        std::size_t pos = path.find_last_of(".");
        if(path.substr(pos + 1) != "png"){
            std::cout << "Bad extension of file name!" << std::endl;
            txtFile.close();
        }
    } while (!txtFile.is_open());
    char inp[4];
    txtFile.read(inp,4);
    txtFile.close();
    if(static_cast<int>(inp[0]) == -119 && inp[1] == 'P' && inp[2] == 'N' && inp[3] == 'G')
        std::cout << "File is PNG!" << std::endl;
    else
        std::cout << "File is not PNG!" << std::endl;
    return 0;
}
