#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "../include/utils.h"
using namespace std;


vector<string> split_sentence(string sen, char delimiter) {
    stringstream ss(sen);
    string token;
    vector<string> words;
    
    while (getline(ss, token, delimiter)) {
        if (!token.empty())
            words.push_back(token);
    }
    // Hello Worldd
    return words;
}
