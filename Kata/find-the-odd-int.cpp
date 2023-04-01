#include <iostream>
#include <vector>
using namespace std;

int findOdd(const vector<int> &numbers){
  for(auto x : numbers){
    int n = count(numbers.begin(), numbers.end(), x);
    if(n % 2 != 0){
      return x;
    }
  }
}
