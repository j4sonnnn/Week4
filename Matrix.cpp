#include "Matrix.h"

void fillMatrix(ifstream& inFile, int arr[3][3], int size) {
	for (int r = 0; r < size; r++) {
		for (int c = 0; c < size; c++) {
			inFile >> arr[r][c];
		}
	}
}
void printMatrix(int arr[][3], int size) {
	for (int r = 0; r < size; r++) {
		for (int c = 0; c < size; c++) {
			cout << arr[r][c] << " ";
		}
		cout << endl;
	}
}
void fillMatrix(ifstream& inFile, vector<vector<int>>& v1, int& size) {
	inFile >> size;
	vector<int> tempRow;
	int tempValue;

	for (int r = 0; r < size; r++) {
		for (int c = 0; c < size; c++) {
			inFile >> tempValue;
			tempRow.push_back(tempValue);
		}
		v1.push_back(tempRow);
	}
}
void printMatrix(vector<vector<int>> v1, int size) {
	for (int r = 0; r < size; r++) {
		for (int c = 0; c < size; c++) {
			cout << setw(5) << right << v1[r][c] << " ";
		}
		cout << endl;
	}
}

void addMatrix(vector<vector<int>> v1, vector<vector<int>> v2, vector<vector<int>>& addM, int size) {
	int temp;
	vector<int> tempRow;
	for (int r = 0; r < size; r++) {
		tempRow.clear();
		temp = 0;
		for (int c = 0; c < size; c++) {
			temp += v1[r][c] + v2[r][c];
			tempRow.push_back(temp);
		}
		addM.push_back(tempRow);
	}
}
void multMatrix(vector<vector<int>> v1, vector<vector<int>> v2, vector<vector<int>>& multM, int size) {
	int temp;
	vector<int> tempRow;
	for (int r = 0; r < size; r++) {      ///row in v1 
		tempRow.clear();
		for (int c = 0; c < size; c++) {     ////col in v2
			temp = 0;
			for (int k = 0; k < size; k++) {   ///track the movement through row in v1 and col in v2
				temp += v1[r][k] * v2[k][c];
			}
			tempRow.push_back(temp);
		}
		multM.push_back(tempRow);
	}
}