
/* Ho va ten: Hoang Thi Linh
	Lop : INT2203 6
	MaSV: 17020852
*/
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
int main() {
	int n,m;
	ifstream fin;
	fin.open("Input.txt");
	fin >> n >> m;
	fin.close();

	vector<int> a;
	for (int i=1; i<=n; i++) {
		a.push_back(i);
	}
	ofstream fout;
	fout.open("Output.txt");
	while (n>=m) {
		fout << a[m-1] << " ";

		for (int i=0; i<m-1; i++) {
			a.push_back(a[i]);
		}
        a.erase(a.begin(), a.begin()+m);
		n--;
	}


		while (n>1) {
		fout << a[m-n-1] << " ";
		if (n>2)
		a.erase(a.begin()+m-n-1);
		n--;
	}
	if (n==1) fout << a[0];
	fout.close();
	return 0;
}
