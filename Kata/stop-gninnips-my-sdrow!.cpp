#include <iostream>
#include <algorithm>

using namespace std;

string spinWords(const string &str)
{
  string s, word;
  for (int i = 0; i < str.length(); i++)
  {
        if (str[i] == ' ' || i == str.length() - 1)
        {
            if(i == str.length() - 1){
              word = word + str[i];
            }
            if(word.length() >= 5){
              reverse(word.begin(), word.end());
            }
            s = s + word + " ";
            word = "";
        }
        else {
            word = word + str[i];
        }
  }
  s.erase(s.length()-1, 1);
  return s;
}