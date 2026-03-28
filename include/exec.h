#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <filesystem>
#include <fstream>
#include <unistd.h>
#include <sys/wait.h>

#define RED "\033[31m"
#define GREEN "\033[92m"
#define SKYBLUE "\033[94m"
#define RESET "\033[0m"

using namespace std;
using namespace std::filesystem;

void execute(string cmd, vector<string> args);
vector<string> exec_cmd(string str);
