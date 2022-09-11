
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> _array = { 1, 12, 2, 3, 1, 1, 2, 3, 1, 3, 4, 3, 1, 5, 0, 3, 2, 1, 9, 19, 1, 19, 5, 23, 2, 23, 13, 27, 1, 10, 27, 31, 2, 31, 6, 35, 1, 5, 35, 39, 1, 39, 10, 43, 2, 9, 43, 47, 1, 47, 5, 51, 2, 51, 9, 55, 1, 13, 55, 59, 1, 13, 59, 63, 1, 6, 63, 67, 2, 13, 67, 71, 1, 10, 71, 75, 2, 13, 75, 79, 1, 5, 79, 83, 2, 83, 9, 87, 2, 87, 13, 91, 1, 91, 5, 95, 2, 9, 95, 99, 1, 99, 5, 103, 1, 2, 103, 107, 1, 10, 107, 0, 99, 2, 14, 0, 0 };
	for (int i = 0; i < _array.size(); i += 4) {
		int opcode = _array[i];
		int positions1 = _array[i + 1];
		int positions2 = _array[i + 2];
		int positions3 = _array[i + 3];
		
		switch (opcode) {
		case 1:
			_array[positions3] = _array[positions1] + _array[positions2];
			_array[0] = _array[positions3];
			break;
		case 2:
			_array[positions3] = _array[positions1] * _array[positions2];
			_array[0] = _array[positions3];
			break;
		case 99:
			cout << _array[0] << endl;
			exit(0);
			break;
		default:
			cout << "Invalid opcode at index: " << i << ", with a value of: " << _array[i] << endl;
		}
	}

	system("PAUSE");
	return 0;
}
