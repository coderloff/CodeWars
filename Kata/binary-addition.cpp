#include <iostream>

using namespace std;

string add_binary(uint64_t a, uint64_t b) {
    long long sum = a + b;
    string s;
    if(sum == 0){
      return "0";
    }
    while(sum > 0){
      s = to_string(sum%2) + s;
      sum /= 2;
    }
    return s;
}
