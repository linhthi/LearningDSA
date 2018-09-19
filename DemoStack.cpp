#include <iostream>
#include <stack>

using namespace std;

stack <int> s;

int i;

main() {

  for (i=1;i<=5;i++) s.push(i); // s={1,2,3,4,5}
  s.push(100); // s={1,2,3,4,5,100}
  cout << s.top() << endl; // In ra 100
  s.pop(); // s={1,2,3,4,5}
  cout << s.empty() << endl; // In ra 0
  cout << s.size() << endl; // In ra 5 system("pause");

}
