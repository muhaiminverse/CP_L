#include<bits/stdc++.h>
using namespace std;

int partition(char arr[], int low, int high, int k) {
    int i = (low - 1);

    int mid = (sizeof(arr) / sizeof(arr[0])) / 2; //changes made here
    char pivot = arr[mid-1]; //and here

    for (int j = low; j <= high - 1; j++) {
        if ((k == 0 && arr[j] > pivot) || (k == 1 && arr[j] < pivot)) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksort(char arr[], int low, int high, int k) {
    if (low < high) {
        int pi = partition(arr, low, high, k);

        quicksort(arr, low, pi - 1, k);
        quicksort(arr, pi + 1, high, k);
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    char s[n + 1];
    cin >> s;
    int i, j, k;

    for (int l = 1; l <= q; l++) {
        cin >> i >> j >> k;
        if (i <= n && 1 <= i && j <= n && 1 <= j && k <= n) {
            quicksort(s, i - 1, j - 1, k);
        }
    }
    cout << s << endl;
    return 0;
}
