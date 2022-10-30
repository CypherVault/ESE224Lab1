
#include <iostream>
using namespace std;

void quickSort(int qsarray[], int begin, int end)
{

	if (begin >= end) {
		return;
	}

	int p = partitionarr(qsarray, begin, end);

	// sort  left part
	quickSort(qsarray, begin, p - 1);

	// sort right part
	quickSort(qsarray, p + 1, end);
}

int partitionarr(int qsarray[], int begin, int end)
{

	int pivot = qsarray[begin];

	int count = 0;
	for (int i = begin + 1; i <= end; i++) {
		if (qsarray[i] <= pivot)
			count++;
	}

	int pivINDX = begin + count;
	swap(qsarray[pivINDX], qsarray[begin]);
//standard function ^^
	int i = begin, j = end;

	while (i < pivINDX && j > pivINDX) {

		while (qsarray[i] <= pivot) {
			i++;
		}

		while (qsarray[j] > pivot) {
			j--;
		}

		if (i < pivINDX && j > pivINDX) {
			swap(qsarray[i++], qsarray[j--]);
		}
	}

	return pivINDX;
}

void print(int A[], int size) {
	for (auto i = 0; i < size; i++) {
		cout << A[i] << " ";
	}
	cout << "\n";
}

int main()
{

	int qsarray[] = { 18, 13, 4, 200, 43, 5 , 3 , 0 , 3};
	int n = 9;
	
	cout << "before a quick sort:";
	print(qsarray, n);
	cout << "\n";
	quickSort(qsarray, 0, n - 1);
	

	cout << "after a quick sort:";
	print(qsarray, n);


	return 0;
}
