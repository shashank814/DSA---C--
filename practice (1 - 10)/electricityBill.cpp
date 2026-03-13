#include<iostream>
#include<vector>
using namespace std;

// int main() {
//     int units, bill = 0;
//     cout << "Enter units consumed : ";
//     cin >> units;
    
//     if(units > 200) {
//         bill = bill + (units - 200) * 9;
//         units = 200;
//     } 

//     if(units > 100) {
//         bill = bill + (units - 100) * 7;
//         units = 100;
//     }

//     bill = bill + units * 5;

//     cout << "Total electricity bill = " << bill << endl;
//     return 0;
// }

int elecBill(int units ) {
    int bill = 0;

    if(units > 200) {
        bill = bill + (units - 200) * 9;
        units = 200;
    } 

    if(units > 100) {
        bill = bill + (units - 100) * 7;
        units = 100;
    }

    bill = bill + units * 5;

    return bill;
}
int main() {
    int units ;

    cout << "Enter units consumed : ";
    cin >> units;

    int bill = elecBill(units);
    cout << "Total electricity bill = " << bill << endl;
    return 0;
}