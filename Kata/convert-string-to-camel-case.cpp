#include <string>
using namespace std;

string to_camel_case(string text) {
  string newText = "";
  for(int i = 0; i < text.length(); i++){
      if(text[i] == '_' || text[i] == '-'){
        newText += toupper(text[i+1]);
        i++;
      }else{
        newText += text[i];
      }
  }
  return newText;
}
