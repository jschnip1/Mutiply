#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string;

void Mulitply(string num, char del) {
	if (num == "") {
		cout << 0 << endl;
	}
	else{
		int total = 1;
		int i = 0;
		std::vector<string> ntm;
		string temp;
		while (i < num.size()) {
			if (num[i] != del) {
				temp = temp + num[i];
			}
			else {
				ntm.push_back(temp);
				temp.clear();
			}
			++i;
		}
		ntm.push_back(temp);
		for (auto i : ntm) {
			int n = std::stoi(i);
			total = total * n;
		}
		cout << total << endl;
	}
}

int main() {
	Mulitply("", ' ');
	Mulitply("33 3", ' ');
	Mulitply("4,3,3", ',');
	Mulitply("3 3 4", ' ');
	Mulitply("3/3/4", '/');



}