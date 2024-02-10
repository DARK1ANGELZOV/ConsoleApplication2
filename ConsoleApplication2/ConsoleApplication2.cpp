
#include <iostream>
using namespace std;

int lineyka(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Ключ найден!" << endl;
            return i;
        }

    }
    return -1;
}
int main()
{
    setlocale(LC_ALL, "RU");
    int n;
    cin >> n;
    int* arr = new int[n];
    cout << "Массив: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Ключ: " << endl;
    int key;
    cin >> key;
    int result = lineyka(arr, n, key);

    if (result == -1) {
        cout << "Ключ не найден!" << endl;
    }
    else {
        cout << "Ключ найден: " << result << endl;
    }

    delete[] arr;
}

