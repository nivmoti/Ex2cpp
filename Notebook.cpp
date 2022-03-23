#include "Notebook.hpp"
#include <string>
// #include <iostream>
// #include <stdexcept>

namespace ariel {
    Notebook::Notebook(){}
    void Notebook::write(int page,int row,int col,Direction kivun,const string & something){
        /*if((col+something.length()>100&&kivun==Direction::Horizontal) || row<0||col<0||page<0||something==""){throw std::out_of_range("out of lines");}
        vector<char> line;
        if (kivun== Direction::Horizontal)
        {
             if (book.find(page)==book.end()||book[page].find(row)==book[page].end())
             {
                 
               vector<char> line(100,'_');
             }
             else{
                  vector<char> line=book[page][row];
             }
            unsigned int k=0;
           for (int i = col; i < col+something.length(); i++)
           {
               line[i]=something[k];
               k++;
           }
           book[page][row]=line;
        }
        else{
            unsigned int k=row;
            for (int i = 0; i < something.length(); i++)
            {
                vector<char> newline;
                if (book.find(page)==book.end()||book[page].find(k)==book[page].end()){
                    vector<char> newline(line);
                }
                else{
                    vector<char> newline=book[page][k];
                }
                newline[col]=something[i];
                book[page][k]=newline;
                k++;
            }
            
        }*/ 
        
    }
    string Notebook::read(int page,int row,int col,Direction kivun,int length){
        //if((col+length>100&&kivun==Direction::Horizontal) || row<0||col<0||page<0||length<0){throw s__throw_out_of_range("out of lines");}
        string ans="";
        /*if (book.find(page)==book.end()||book[page].find(row)==book[page].end()){
            string ans;
            for (int i = 0; i < length; i++)
            {
                ans=ans+'_';
            }
            return ans;
        }
        else{
              if (kivun== Direction::Horizontal)
              {
               
                 unsigned int k=0;
                for (int i = col; i < col+length; i++)
                {
                    ans=ans+book[page][row][i];

                   
                }
                return ans;
              }
             else{
                    unsigned int k=row;
                    for (int i = 0; i < length; i++)
                    {
                       
                       if (book.find(page)==book.end()||book[page].find(k)==book[page].end()){
                       ans=ans+'_';
                        }
                       else{
                          ans=ans+book[page][k][col];
                       }
                        k++;
                }*/
            
            return ans;
          }
          

    void Notebook::erase (int page,int row,int col,Direction kivun,int length){
        //if((col+length>100&&kivun==Direction::Horizontal) || row<0||col<0||page<0||length<0){throw std::out_of_range("out of lines");}
        /*if (kivun==Direction::Horizontal)
        {
            if (!(book.find(page)==book.end()||book[page].find(row)==book[page].end())){
            for (int i = 0; i < length; i++)
            {
                if (book[page][row][col+i]!='_')
                {
                    book[page][row][col+i]='~';
                }
                
            }
            }
            
        }
        else{
            for (int i = 0; i < length; i++){
                if (!(book.find(page)==book.end()||book[page].find(row+i)==book[page].end())){
                    if (book[page][row+i][col]!='_')
                   {
                    book[page][row+i][col]='~';
                   }
                }

            }

        }*/
        return;

    }
    void Notebook::show(int page){
        return;

    }
    
}

    
