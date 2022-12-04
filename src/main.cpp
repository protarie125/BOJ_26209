#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x;
	for (auto i = 0; i < 8; ++i) {
		cin >> x;
		if (9 == x) {
			cout << "F";
			return 0;
		}
	}

	cout << "S";

	return 0;
}