#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int id = 1;
  cout << "CustomerID,Genre,Age,Annual Income (k$),Spending Score (1-100)" << endl;
  for (int i = 0; i < 1000000; i++) {
    string s = to_string(i);
    s += ","; 
    if (rand() % 2 == 0) {
      s += "Female";
    }
    else {
      s += "Male";
    }
    s += ",";
    s += to_string(rand() % 63 + 18);
    s += ","; 
    s += to_string(rand() % 100 + 10);
    s += ","; 
    s += to_string(rand() % 75 + 20);
    cout << s << endl;
  }
}
