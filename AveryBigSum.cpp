#include <iostream>
#include <vector>

using namespace std;

long aVeryBigSum(long ar[],int n) {
    long sum = 0;
    for (int i=0; i<n; i++) {
        sum += ar[i];
    }
    return sum;

}

int main()
{
    int n;
    cin >> n;
    long ar[n];
    for (int i=0; i<n; i++) {
        cin >> ar[i];
    }
    long result = aVeryBigSum(ar,n);
    cout << result << endl;
    return 0;
}
