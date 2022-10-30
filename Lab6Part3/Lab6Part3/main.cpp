#include <iostream>

using namespace std;

void print(int A[], int size) {
    for (auto i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";
}
void mergesorting(int tobesorted[], int
    const strt, int
    const fin) {
    if (strt >= fin) {
        return;
    }

    auto mid = strt + (fin - strt) / 2;
    mergesorting(tobesorted, strt, mid);
    mergesorting(tobesorted, mid + 1, fin);
    merge(tobesorted, strt, mid, fin);
}

//main
int main() {
    int arr[] = {
            200,
            37,
            10,
            5,
            42,
            13
    };
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Starting array to be sorted is: ";
    print(arr, arr_size);

    mergesorting(arr, 0, arr_size - 1);

    cout << "After sorting it is: ";
    print(arr, arr_size);
    return 0;
}

void merge(int tobesorted[], int
    const left, int
    const mid,
    int
    const right) {
    auto
        const subA1 = mid - left + 1;
    auto
        const SubA2 = right - mid;

    auto* lefttobesorted = new int[subA1],
        * righttobesorted = new int[SubA2];

    for (auto i = 0; i < subA1; i++)
        lefttobesorted[i] = tobesorted[left + i];
    for (auto j = 0; j < SubA2; j++)
        righttobesorted[j] = tobesorted[mid + 1 + j];

    auto indexOfSubA1 = 0,
        indexOfSubA2 = 0;
    int indexOfMergeArr = left;

    while (indexOfSubA1 < subA1 &&
        indexOfSubA2 < SubA2) {
        if (lefttobesorted[indexOfSubA1] <=
            righttobesorted[indexOfSubA2]) {

            tobesorted[indexOfMergeArr] = lefttobesorted[indexOfSubA1];
            indexOfSubA1++;

        }
        else {
            tobesorted[indexOfMergeArr] = righttobesorted[indexOfSubA2];
            indexOfSubA2++;
        }
        indexOfMergeArr++;
    }

    while (indexOfSubA1 < subA1) {
        tobesorted[indexOfMergeArr] = lefttobesorted[indexOfSubA1];
        indexOfSubA1++;
        indexOfMergeArr++;
    }

    while (indexOfSubA2 < SubA2) {
        tobesorted[indexOfMergeArr] = righttobesorted[indexOfSubA2];
        indexOfSubA2++;
        indexOfMergeArr++;
    }
    delete[] lefttobesorted;
    delete[] righttobesorted;
}
