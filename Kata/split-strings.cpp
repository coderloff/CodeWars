#include <string>
#include <vector>
#include <cstring>

using namespace std;

vector<string> solution(const string &s)
{
  vector<string> v;
  bool isOdd;
  string str = s;
  int n = 0;
  if(s.length() % 2 == 0){
    n = s.length() / 2;
  }else{
    n = (s.length()+1)/2;
    isOdd = true;
  }
  v.resize(n);
  int r = 0;
  for(int i = 0; i < s.length(); i+=2){
    string l;
    l += s[i];
    if(s.length()-i < 2){
      l+= "_";
    }else{
      l += s[i+1];
    }
    v[r] = l;
    r++;
  }
  return v;
}
