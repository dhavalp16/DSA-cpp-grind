#include <iostream>
#include <algorithm>

//print array
void printArray(int arr[], int n) {
	for (int i = 0;i < n;i++) {
		std::cout << arr[i] << " ";
	}
}

//Bubble Sort
void bubbleSort(int arr[], int n) {
	for (int i = 0;i < n - 1;i++) {
		bool isSwap = false;
		for (int j = 0;j < n - 1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
				isSwap = true;
			}
		}
		if (!isSwap) {
			break;
		}
	}
	printArray(arr, n);
}

int main() {
	int arr[] = { 4, 1, 5, 3, 2 };
	bubbleSort(arr, std::size(arr));
	return 0;
}