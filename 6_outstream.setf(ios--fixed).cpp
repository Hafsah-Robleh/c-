#include <iostream> 
#include <fstream>
#include <iomanip>

using namespace std;
int main() {
    
ifstream instream("temperatures_c.txt");
    if (!instream) {
        cout << " Failed to open" << endl;
        return 1;
    }
ofstream outstream("temperatures_f.txt");

double temperature_c;
double temperature_f;

outstream.setf(ios::fixed);
outstream.precision(2);

while (instream >>temperature_c) {
    temperature_f = temperature_c * 9.0 / 5.0 + 32;
    
    outstream << temperature_f << endl;
}

instream.close();
outstream.close();
    
}