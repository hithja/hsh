#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include <fstream>

#define RED "\033[31m"
#define SKYBLUE "\033[94m"
#define RESET "\033[0m"

using namespace std;
using namespace std::filesystem;

void change_dir(vector<string> args);