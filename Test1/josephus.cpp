#include<iostream>
#include <fstream>

using namespace std;

int main()
{
	int n,m;
  ifstream fin;
  fin.open("input.txt");
	fin >> n>> m;
  fin.close();
  
	int a[n+1];
  //Sinh mang tu 1 den n
	for (int i=1;i<=n;i++)
		a[i]=i;
  
  ofstream fout;
  fout.open("output.txt");
  
	int dau=1;
  int vtthuong;
	while (n>0)
	{
		vtthuong = m+d-1;
		while(vtthuong>n)
			vtthuong = vtthuong - n;
		fout <<a[vtthuong]<<" ";
		dau=vtthuong;
		for (i=vtthuong;i<n;i++)
			a[i]=a[i+1];
		n--;
	}
  fout.close();
  
	return 0;
}
