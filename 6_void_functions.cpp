#include <iostream>
#include <fstream>

using namespace std; 

void Addplusplus(ifstream& instreamParam, ofstream& outstreamParam);
int main() {

ifstream instream("c.txt");

ofstream outstream("c++.txt");
    
Addplusplus(instream,outstream);    
}

void Addplusplus (ifstream& instreamParam, ofstream& outstreamParam) {
    char character; 
    while (instreamParam.get(character)) {
        if (character == 'C') {
            outstreamParam << "C++";
        }
        else {
            outstreamParam << character;
        }
    }
}