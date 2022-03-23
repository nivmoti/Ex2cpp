#include <string>
#include "Direction.hpp"
#include <iostream>
#include <stdexcept>
// #include <unordered_map>
// #include <vector>
using ariel::Direction;
using namespace std;

namespace ariel {
   class Notebook
   {
//    private:
       //unordered_map<unsigned int,unordered_map<unsigned int,vector<char>>> book;
   public:
       Notebook();
       void write(int page,int row,int col,Direction kivun,const string & somthing );
       string read(int page,int row,int col,Direction kivun,int length);
       void erase(int page,int row,int col,Direction kivun,int length);
       void show(int page);
   };
   
   
    
}
