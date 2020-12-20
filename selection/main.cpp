#include <iostream>
#include "selection.h"

using namespace std;

int main()
{
    cout<<"ALGORITMA SELECTION SORT"<<endl;
  	cout<<"----------------------"<<endl;
	int array[100], n, i, j;
	cout << "Masukkan banyak elemen: ";
    cin >> n;
    cout << "Masukkan nilai: \n";
    for (i = 0; i < n; i++){
        cout<<"Masukan Data Ke-"<<i+1<<" = ";
        cin >> array[i];
    }
    cout << " " << endl;
    cout << "Data sebelum diurut:\n";
    for (i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << " " << endl;
    cout << "Proses Pengurutan: " << endl;
    selectionSort(array, n);
    cout << " " << endl;
    cout << "Hasil setelah pengurutan:\n";
    for (i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << "\n";

	system("pause");
	return 0;
}
