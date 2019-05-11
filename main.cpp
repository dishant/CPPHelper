#include <iostream>
#include <string>
#include <fstream>
#include <vector>

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


vector<string> read_file(string filepath){
    ifstream myfile(filepath);
    string line;
    vector<string> ret_val;
    if(myfile.is_open()){
        while (getline (myfile,line)) {
            ret_val.push_back(line);
        }
        myfile.close();
    }
    return ret_val;
}

void write_file(string filepath, vector<string> lines){
  ofstream myfile (filepath);
  if (myfile.is_open())
  {
      for(auto l : lines) 
          myfile << l << endl;
    myfile.close();
  }
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
