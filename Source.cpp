#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	vector<string> firstArray, secondArray;
	string output;
	unsigned int secondSize;
	
	cout << "Enter the first array of strings(9 elements):" << endl;
	while (firstArray.size() != 9) {
		string temp;
		cin >> temp;
		firstArray.push_back(temp);
	}
	cout << "Enter the size of the second array(0-9): ";
	cin >> secondSize;
	cout << "Enter the second array of strings: " << endl;
	while (secondArray.size() != secondSize) {
		string temp;
		cin >> temp;
		secondArray.push_back(temp);
	}
	for (int i = 0; i < firstArray.size(); i++) {
		for (int j = 0; j < secondArray.size(); j++) {
			if (firstArray[i] == secondArray[j])
				output.push_back('1');
		}
		if (!output[i]) output.push_back('0');
	}
	cout << output;
	cout << endl;
	system("pause");
	return 0;
}
