#include <iostream>
using namespace std;


void printArray(int input[], int n) {

    cout << "Print the Array : ";
    for ( int i = 0; i < n; i++ ) {
        cout << input[i] << " ";
    }

    cout << endl;
}

void increment( int a, int b[], int n ) {
    a++;
    b[0]++;
}

void reverse( int input[], int n ) {
    int i =0, j = n - 1;

    while ( i < j ) {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int a = 10;
    int b[10] = {1, 2, 3, 4, 5};
    
    reverse(b, 5);
    printArray(b, 5);

    
}

// int main() {
//     int a = 10;
//     int b[10] = {1, 2, 3};
//     increment(a, b, 10);


//     cout << "a : " << a << endl;
//     cout << "b[0] : "  << b[0] << endl;
// }
// int main() {

//     int input[100] = {1, 2, 3};
//     /*
//     cout << "Enter the Array elements : ";
//     //cout << input << endl;

//     for ( int i = 0; i < n; i++ ) {
//         cin >> input[i];
//     }
//     */
    
//     printArray(input, 100);
// }