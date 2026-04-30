#include <iostream> 
#include <fstream>
#include <iomanip>

using namespace std; 
int main() {
    
ifstream instream("students.txt");

ofstream outstream("newfile.txt");

string name;
int age;
double gpa;
while (instream >> name >>age >> gpa) {
    age+= 2;
    gpa+=0.4;
    outstream<< left<< setw(10) << name << setw(5) << age << setw(5) << gpa<< endl;
    
    
}
    
    
}