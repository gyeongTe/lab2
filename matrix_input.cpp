#include <iostream>
#include <vector>

int main() {
	int row, col;
	std::cout << "Enter the size of the row :";
	std::cin >> row;

	std::cout << "Enter the size of the col :";
	std::cin >> col;

	std::vector<std::vector<int>> matrix1(row, std::vector<int>(col));
	std::vector<std::vector<int>> matrix2(row, std::vector<int>(col));

	std::cout << "matrix1 Input : \n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cin >> matrix1[i][j];
		}
	}
	
	std::cout << "matrix2 Input : \n";
	for (int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			std::cin >> matrix2[i][j];
		}
	}

	std::cout << "matrix1 + matrix2 result: \n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << matrix1[i][j] + matrix2[i][j] << " " ;
		}
		std::cout << "\n";
	}

	return 0;
}

