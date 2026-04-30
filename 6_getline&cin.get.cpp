#include <iostream>
#include <string>

using namespace std;

int main() {
    
string Fullname; 
cout << "Enter your fullname ";
getline(cin,Fullname);
cout << Fullname<<endl;


char FirstInitial;
char Space;
char SecInitial;

cout << " Enter your Initials seperated by a space" << endl;
cin.get(FirstInitial);
cin.get(Space);
cin.get(SecInitial);

cout << FirstInitial << Space << SecInitial;

    
    
}