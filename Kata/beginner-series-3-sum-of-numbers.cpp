#include<iostream>
#include<algorithm>
using namespace std;

int get_sum(int a, int b)
{
  int sum = 0;
  for(int i = min(a,b); i<=max(a,b); i++){
    sum += i;
  }
  return sum;
}
