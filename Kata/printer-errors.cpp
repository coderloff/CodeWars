#include <iostream>
#include <algorithm>

using namespace std;

class Printer
{
public:
    static string printerError(const string &s);
};
string Printer::printerError(const string &s){
    int errsum = 0;
    string str = s;
    string result ="";
    for(char& c:str){
        if(c>'m') {errsum+=1;}
    }
    result = result + to_string(errsum)+ "/" + to_string(s.size());
    return result;
}
