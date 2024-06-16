#include <iostream>
using namespace std;

void printArray(int input[], int n) {
	for(int i = 0; i < n; i++) {
		cout << input[i] << " " ;
	}
	cout << endl;
}

void insertionSort(int arr[], int n) {
    for ( int i = 1; i < n; i++ ) {
        int current = arr[i];
        int j;
        for ( j = i - 1; j >= 0; j-- ) {
            if ( current < arr[j] ) {
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        arr[j+1] = current;
    }
}

int main() {
	// Take array input from the user
	int n;
    cout << "Enter the value of n : ";
	cin >> n;

	int input[100];
	
    cout << "Enter the Array elements : ";
	for(int i = 0; i < n; i++) {
		cin >> input[i];
	}
	
    // calling insertioneSort function
	insertionSort(input, n);

    // After Sorting Print the giving array
    cout << "After Sorting : ";
	printArray(input, n);
	
}



/*--------------------------------------------------------------------------------------------------------------------------------*/
// Problem Description:- Code Insertion Sort

/*
Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.
Note:
    Change in the input array/list itself. You don't need to return or print the elements.
Input format :
    The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
    First line of each test case or query contains an integer 'N' representing the size of the array/list.
    Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
    For each test case, print the elements of the array/list in sorted order separated by a single space.
    Output for every test case will be printed in a separate line.
Constraints :
    1 <= t <= 10^2
    0 <= N <= 10^3
    Time Limit: 1 sec
Sample Input 1:
    1
    7
    2 13 4 1 3 6 28
Sample Output 1:
    1 2 3 4 6 13 28
Sample Input 2:
    2
    5
    9 3 6 2 0
    4
    4 3 2 1
Sample Output 2:
    0 2 3 6 9
    1 2 3 4
*/

// #include <iostream>
// using namespace std;

// // #include "solution.h"
// void insertionSort(int *input, int size)
// {
//     // Write your code here
//     for (int i = 1; i < size; i++)
//     {
//         int current = input[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (input[j] > current)
//             {
//                 input[j + 1] = input[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         input[j + 1] = current;
//     }
// }

// int main()
// {
//     int t;
//     cout << "Enter the number of testcases or Queries to be run : ";
//     cin >> t;

//     while (t--)
//     {
//         int size;
//         cout << "Enter the size of an Array : ";
//         cin >> size;
//         int *input = new int[size];


//         cout << "Enter the elements of an array : ";
//         for (int i = 0; i < size; i++)
//         {
//             cin >> input[i];
//         }

//         insertionSort(input, size);
        
//         cout << "After Sorting : ";
//         for (int i = 0; i < size; i++)
//         {
//             cout << input[i] << " ";
//         }

//         delete[] input;
//         cout << endl;
//     }

//     return 0;
// }