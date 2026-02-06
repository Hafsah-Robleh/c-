#include <iostream>
using namespace std;

int main() {


int popsicle_num;
cout << "Enter the total number of popsicles: " << endl;
cin >> popsicle_num;




int boxes = popsicle_num / 15;
cout << "Full boxes packed: ";
cin >> boxes;


int remaining_popsicles = popsicle_num % 15;
cout << "Remaining popsicles: ";
cin >> remaining_popsicles;


double total_earning = (boxes * 10) * 0.05;
cout << "Total earning (including delivery fee) is: " cout << total_earning << "dollars";

}

// 
