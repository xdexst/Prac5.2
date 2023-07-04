#include <iostream>
using namespace std;

class LogicalElement {
public:
	bool Value;
	LogicalElement() {
		Value = false;
	}
};

int main() {
	LogicalElement A;
	LogicalElement B;

	cout << "Before:" << endl;
	cout << "A: " << A.Value << endl;
	cout << "B: " << B.Value << endl;

	A.Value = true;
	B.Value = true;

	cout << "After:" << endl;
	cout << "A: " << A.Value << endl;
	cout << "B: " << B.Value << endl;

	return 0;
}
