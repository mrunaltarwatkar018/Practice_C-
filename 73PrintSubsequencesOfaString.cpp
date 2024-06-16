#include <iostream>
using namespace std;

void print_subs(string input, string output) {
	if (input.length() == 0) {
		cout << output << endl;
		return;
	}

	print_subs(input.substr(1), output);
	print_subs(input.substr(1), output + input[0]);
}

int main() {
	string input;
    cout << "Enter the string : ";
	cin >> input;
	string output = "";
    cout << "Output : ";
	print_subs(input, output);
}