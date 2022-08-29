#include <iostream>
#include <vector>
using namespace std;

void selectionSort(std::vector<int>& arr) {
    int si = arr.size();
    for (int i = 0; i < si - 1; i++) {
        int minuim = arr[i];
        int minuim_index = i;
        for (int j = i + 1; j < si; j++) {
            if (minuim > arr[j]) {
                minuim = arr[j];
                minuim_index = j;
            }

        }
        if (minuim_index != i) {
            arr[minuim_index] = arr[i];
            arr[i] = minuim;
        }

    }
}

int main() {

    vector<int> vector{ 2,3,1,5,-10,20,19,1,3,2,11 };
    selectionSort(vector);
    for (int i = 0; i < vector.size(); i++)
        cout << vector[i] << endl;
    return 0;
}