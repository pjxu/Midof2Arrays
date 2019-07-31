//Find the Median of Two Arrays.cpp
// 4.12.2019
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
class MidoArrays {
public:
	void getInput();
	void getLen();
	void findMid();
	void getOutput();
	void clearVec();
private:
	vector<int> arr1;
	vector<int> arr2;
	vector<int> ints;
	int len1;
	int len2;
	int vecLen;
	double median;
	int item;
};

void MidoArrays::getInput() {
	cout << "Input two arrays: " << endl;
	cout << "How many items for the 1st one? ";
	cin >> len1;
	cout << "Now input individual items: ";
	cin >> item;
	arr1.push_back(item);
	for (int m = 0; m < (len1 - 1); ++m) {
		cout << "Now input individual items: ";
		cin >> item;
		arr1.push_back(item);
	}
	cout << "How many items for the 2nd one? ";
	cin >> len2;
	cout << "Now input individual items: ";
	cin >> item;
	arr2.push_back(item);
	for (int n = 0; n < (len2 - 1); ++n) {
		cout << "Now input individual items: ";
		cin >> item;
		arr2.push_back(item);
	}
	//check
	cout << "Array One has " << arr1.size() << " items" << endl << "Array Two has " << arr2.size() << " items" << endl;
}

void MidoArrays::getLen() {
	vecLen = len1 + len2;
}

void MidoArrays::findMid() {
	for (int m = 0; m < len1; ++m) {
		ints.push_back(arr1[m]);
	}
	for (int n = 0; n < len2; ++n) {
		ints.push_back(arr2[n]);
	}
	sort(ints.begin(), ints.end());
	if ((vecLen % 2) != 0) {
		median = ints[(vecLen-1)/2];
	}
	else {
		median = (double(ints[(vecLen/2)] + ints[(vecLen/2)-1]))/2.0;
	}
}

void MidoArrays::getOutput() {
	cout << "The Median is " << setprecision(3) << median << endl;
}

void MidoArrays::clearVec() {
	arr1.clear();
	arr2.clear();
	ints.clear();
}

int main() {
	MidoArrays m;
	m.getInput();
	m.getLen();
	m.findMid();
	m.getOutput();
	m.clearVec();
	char c;
	cout << "Continue?(y/n)";
	cin >> c;
	while (c == 'y') {
		MidoArrays m;
		m.getInput();
		m.getLen();
		m.findMid();
		m.getOutput();
		m.clearVec();
		char c;
		cout << "Continue?(y/n)";
		cin >> c;
		if (c != 'y') {
			break;
		}
	}
}
