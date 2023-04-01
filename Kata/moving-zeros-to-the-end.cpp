#include <vector>

using namespace std;

vector<int> move_zeroes(vector<int> input) {
  vector<int> v; int n = 0;
  for(int i = 0; i < input.size(); i++){
    if(input[i] != 0){
      v.push_back(input[i]);
    }else{
      n++;
    }
  }
  while(n){
    v.push_back(0);
    n--;
  }
  return v;
}
