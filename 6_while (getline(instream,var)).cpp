#include <iostream>
#include <fstream>
#include <string> 

using namespace std; 
int main() {

ifstream instream("lines.txt");
    if (!instream) {
        cout << " Failed unfort" << endl;
        return 1;
    }
    
ofstream outstream("numbered_lines.txt");

string fullline;
int num = 1;

while (getline(instream,fullline)) {
    outstream << num << ": " << fullline <<endl;
    num++;
}

}