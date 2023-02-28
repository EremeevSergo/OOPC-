#include <iostream>
using namespace std;
class Base{
  public:
      int x(){
        return 4;
      }
      int f(int a){
        return a * 2;
      }
};
int main() {
  Base b;
  int n;
  cin >> n;

  cout << b.f(n);
  }  