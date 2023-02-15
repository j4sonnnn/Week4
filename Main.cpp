#include "Matrix.h"

int main() {
	int size = 3;
	///int arr[][3];
	int arr[3][3] = { {0,0,0}, {0,0,0}, {0,0,0} };
	ifstream inFile;
	inFile.open("Array.txt");
	if (!inFile.is_open()) {
		cout << "Unablue to open \n";
		return 1;
	}
	fillMatrix(inFile, arr, size);
	printMatrix(arr, size);
	inFile.close();

	vector<vector<int>> v2;
	vector<vector<int>> v1;
	vector<vector<int>> addM;
	vector<vector<int>>multM;
	ifstream inFilee;
	inFilee.open("Vector.txt");
	if (inFilee.is_open()) {
		fillMatrix(inFilee, v1, size);
		fillMatrix(inFilee, v2, size);
		addMatrix(v1, v2, addM, size);
		printMatrix(addM, size);

		multMatrix(v1, v2, multM, size);
		printMatrix(multM, size);
		cout << "nothing";
		inFilee.close();
	}
	
}

