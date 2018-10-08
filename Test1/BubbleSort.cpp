/* Ho va ten: Hoang Thi Linh
	Lop : INT2203 6
	MaSV: 17020852
*/
#include <iostream>
#include <fstream>
using namespace std;
void BubbleSort(int a[], int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n-i-1; j++) {
			if (a[j] < a[j+1]) 
               swap(a[j], a[j+1]);
		}
	}
}
int main() {
	int n;
    ifstream fin;
    fin.open("input.txt");
    fin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
    	fin >> a[i];
	}
	fin.close();
	BubbleSort(a,n);
	ofstream fout;
	fout.open("output.txt");
	for (int i=0; i<n; i++) {
		fout << a[i] << " ";
	}
	fout.close();
	return 0;
}
