#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <filesystem>
#include <fstream>
#include <unistd.h>
#include <sys/wait.h>
#include "../include/exec.h"
#include "../include/utils.h"

#define RED "\033[31m"
#define GREEN "\033[92m"
#define SKYBLUE "\033[94m"
#define RESET "\033[0m"

using namespace std;
using namespace std::filesystem;


void execute(string cmd, vector<string> args) {
    vector<char*> argv;
    argv.push_back((char*)cmd.c_str());

    for (string arg : args) {
        argv.push_back((char*)arg.c_str());
    }

    argv.push_back(nullptr);

    int status = execvp(cmd.c_str(), argv.data());

    if (status < 0) {
        cout << RED << "Error! Status code: " << status << RESET << endl;
        exit(1);
    }
}

vector<string> exec_cmd(string str) {
    vector<string> words = split_sentence(str, ' ');
    return words;
}