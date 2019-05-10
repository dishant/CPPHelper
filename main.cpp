#include <iostream>
#include <string>
using namespace std;


vector<string> split(string str, string token){
    vector<string>result;
    while(str.size()){
        int index = str.find(token);
        if(index!=string::npos){
            result.push_back(str.substr(0,index));
            str = str.substr(index+token.size());
            if(str.size()==0)result.push_back(str);
        }else{
            result.push_back(str);
            str = "";
        }
    }
    return result;
}


vector<string> cpp_read(string end){
vector<string> lines;
string line;
  while (std::getline(std::cin, line))
  {
    if(line == end) break;
    lines.push_back(line);
  }
  return lines;
}
