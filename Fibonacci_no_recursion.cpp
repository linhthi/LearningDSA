#include <iostream>
#include <fstream>

using namespace std;
int Fibonacci(int n);
int main() {
    int n;
    ifstream inStream;
    inStream.open("input.txt");
    inStream >> n;

    inStream.close();

    ofstream outStream;
    outStream.open("output.txt");

    for (int i=0; i<n; i++)
    {
        outStream << Fibonacci(i) << " ";
    }
    outStream.close();

    return 0;
}
int Fibonacci(int n) {
    if (n==0 || n== 1) return 1;
    else
    {
        int f0=1, f1=1, temp;
        for (int i=2; i<=n; i++) {
            temp = f0 + f1;
            f0 = f1;
            f1 = temp;
        }
        return temp;
}
}
