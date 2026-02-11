#include <iostream>
using namespace std;

int main () {

    // // printing stars and nums from 1 to n
    // int n = 4;
    // for(int i = 1; i <= n; i++) {    // line
    //     for(int j = 1; j <= n; j++) {   // print nums
    //         cout << "*" << " ";
    //         // cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // // printing characters
    // int n = 4;
    // for(int i=1; i<=n; i++) {
    //     char ch = 'A';
    //     for(int j=1; j<=n; j++) {
    //         cout << ch << " ";
    //         ch += 1;
    //     }
    //     cout << endl;
    // }

    // // nums in increasing order in each line
    // int n = 4;
    // int num = 1;

    // for(int i=1; i<=n; i++) {         // line
    //     for(int j=1; j<=n; j++) {     // increasing number
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // // chars in increasing order
    // int n = 4;
    // char ch = 'A';

    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=n; j++) {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }


    // // triangle pattern of stars
    // int n = 4;

    // for(int i=1; i<=n; i++) {
    //    for(int j=1; j<i+1; j++) {
    //     cout << "*";
    //    }
    //    cout << endl;
    // }

    // triangle pattern of nums
    // int n=4;
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    // cout << endl;


    // triangle pattern of chars
    // int n = 4;
    // for(int i=1; i<=n; i++) {
    //     char ch = 'A' + i - 1;
    //     for(int j=1; j<=i; j++) {
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    
    // triangle pattern nums
    // int n = 4;
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // cout << endl;


    // reverse num triangle pattern [each line with reverse num]
    // int n = 4;
    // for(int i=1; i<=n; i++) {
    //     for(int j=i; j>0; j--) {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // cout << endl;


    // reverse num triangle pattern [each line with reverse char]
    // int n = 4;

    // for(int i=1; i<=n; i++) {
    //     char ch = 'A' + i -1;
    //     for(int j=1; j<=i; j++) {
    //         cout << ch;
    //         ch--;
    //     }
    //     cout << endl;
    // }

    // floyd's triangle 
    // int n = 4;
    // int num = 1;
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }


    // floyd's triangle chars 
    // int n = 4;
    // char ch = 'A';
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }


    // inverted triangle pattern
    // int n=4;
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<i; j++) {      // i=0 && j=0 then j<i false so it prints 0 spaces at frist line
    //         cout << " ";
    //     }
    //     for(int j=0; j<n-i; j++) {
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }

    // inverted triangle pattern chars
    // int n=4;
    // char ch = 'A';

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<i; j++) {
    //         cout << " ";
    //     }
    //     for(int j=0; j<n-i; j++) {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // triangle pattern
    // int n = 4;
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=n-i; j++) {
    //         cout << " ";
    //     }
    //     for(int j=1; j<=i; j++) {
    //         cout << j ;
    //     }
        
    //     cout << endl;
    // }


    // pyramid patter
    int n = 4;
    for(int i=0; i<n; i++) {

        // spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        // nums1 : i + 1
        for(int j=1; j<=i+1; j++) {
            cout << j;
        }

        // nums 2
        for(int j=i; j>0; j--) {
            cout << j;
        }
        cout << endl;
    }


}