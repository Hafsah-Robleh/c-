#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main() {

int variable1, variable2, variable3, variable4, variable5;
double avg;
ifstream instream("input_integers.txt");
ofstream outstream("input_integers.txt", ios::app);

if (!instream) {
    cout << "Failed to open" <<endl;
    return 1;
}

instream >> variable1 >> variable2 >> variable3 >> variable4 >> variable5;
avg = ( variable1+variable2+variable3+variable4+variable5)/ 5.0;
//outstream << variable1 <<variable2 << variable3 << variable4<< variable5 << avg<< endl;
outstream << endl;
outstream << "The average is " << fixed << setprecision(2) << avg<< endl;

    
    
    
    
}