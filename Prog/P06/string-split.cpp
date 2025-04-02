#include <string>
#include "print_string.h"

using namespace std;

void split(const string& s, vector<string>& v) {
    size_t size = s.length();
    size_t pos = 0;
    size_t next_pos = 0;
    string sub;

    while(pos < size){
        if(s[pos] == ' ') pos++;
        else{
            next_pos = s.find(' ', pos);
            if( next_pos == string::npos) next_pos = size;

            sub = s.substr(pos,next_pos - pos);
            v.push_back(sub);
            pos = next_pos;
        }
    }
}