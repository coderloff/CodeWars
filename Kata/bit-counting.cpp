#include <iostream>
using namespace std;

unsigned int countBits(unsigned long long n){
  string s; int c = 0;
  while(n){
    s = to_string(n%2) + s;
    n /= 2;
  }
  for(int i = 0; i < s.length(); i++){
    if(s[i] == '1'){
      c++;
    }
  }
  cout << s;
  return c;
}
