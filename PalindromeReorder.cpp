#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
int main() {
	
	int frequencies[26] = {0};
	string input;
	cin >> input;
	int lim = input.length();
	//int flag = 0;
	vector<int> oddindices;
	vector<int> evenindices;

	for (int i = 0; i < lim; i++) {
		frequencies[input[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++) {
		if (frequencies[i] % 2) {
			oddindices.push_back(i);
		}
		else {
			evenindices.push_back(i);
		}
	}

	if (oddindices.size() > 1) {
		cout << "NO SOLUTION";
		return 0;
	}

	for (int i = 0; i < evenindices.size(); i++) {
		int dummy = evenindices[i];
		for (int j = 0; j < (frequencies[dummy] / 2); j++) {
			char to_print = 'A' + dummy;
			cout << to_print;
		}
		frequencies[dummy] = frequencies[dummy] / 2;
	}

	if (oddindices.size() == 1) {
		char to_print2 = 'A' + oddindices[0];
		for (int i = 0; i < frequencies[oddindices[0]]; i++) {
			cout << to_print2;
		}
		
	}

	for (int i = evenindices.size()-1; i >= 0; i--) {
		int dummy = evenindices[i];
		for (int j = 0; j < (frequencies[dummy]); j++) {
			char to_print = 'A' + dummy;
			cout << to_print;
		}
		
	}


	
	
	return 0;
}

*/