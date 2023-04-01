#include <iostream>
using namespace std;

class WhichAreIn
{

  public:
  static vector<string> inArray(vector<string> &array1, vector<string> &array2);
};
vector<string> WhichAreIn::inArray(vector<string> &array1, vector<string> &array2){
    vector<string> array;
    for(int i = 0; i < array1.size(); i++){
      for(int j = 0; j < array2.size(); j++){
        if(array2[j].find(array1[i]) != string::npos){
          array.push_back(array1[i]);
          break;
        }
      }
    }
  sort(array.begin(), array.end());
  return array;
}
