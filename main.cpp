
#include <iostream>
#include <string>

using namespace std;
 
string ROT13(string input)
{
	string transformed;
	for (size_t i = 0; i < input.size(); ++i) {
		if (isalpha(input[i])) {
			if ((tolower(input[i]) - 'a') < 14)
				transformed.append(1, input[i] + 13);
			else
				transformed.append(1, input[i] - 13);
		} else {
			transformed.append(1, input[i]);
		}
	}
	return transformed;
}

int main()
{
	string input;
	cout << "Write your text: " << endl;
	getline(cin, input);
	cout << "ROT13: " << ROT13(input) << endl;
	return 0;
}