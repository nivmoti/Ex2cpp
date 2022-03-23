#include "doctest.h"
#include "Notebook.hpp"
using namespace ariel;

#include <algorithm>
#include <string>
using namespace std;

TEST_CASE("Good input"){
    ariel::Notebook notebook;
    notebook.write(0,0,0,Direction::Horizontal,"niv");
    notebook.write(0,2,0,Direction::Vertical,"moti");
    notebook.write(0,10,5,Direction::Vertical," ");
    notebook.write(0,30,20,Direction::Horizontal,"This is a test");
    notebook.write(2,30,20,Direction::Vertical,"This is a test");
    CHECK(notebook.read(0,0,0,Direction::Horizontal,3)=="niv");
    CHECK(notebook.read(0,2,0,Direction::Vertical,4)=="moti");
    CHECK(notebook.read(0,10,5,Direction::Vertical,1)==" ");
    CHECK(notebook.read(0,30,20,Direction::Horizontal,14)=="This is a test");
    CHECK(notebook.read(2,30,20,Direction::Vertical,14)=="This is a test");
    CHECK(notebook.read(0,0,5,Direction::Horizontal,3)=="___");
    CHECK(notebook.read(0,0,0,Direction::Vertical,3)=="n_m");
    notebook.erase(0,0,0,Direction::Horizontal,3);
    notebook.erase(0,2,0,Direction::Vertical,4);
    notebook.erase(0,10,5,Direction::Vertical,1);
    notebook.erase(0,30,20,Direction::Horizontal,14);
    notebook.erase(2,30,20,Direction::Vertical,14);
    notebook.erase(0,0,5,Direction::Horizontal,3);
    CHECK(notebook.read(0,0,0,Direction::Horizontal,3)=="~~~");
    CHECK(notebook.read(0,2,0,Direction::Vertical,4)=="~~~~");
    CHECK(notebook.read(0,10,5,Direction::Vertical,1)=="~");
    CHECK(notebook.read(0,30,20,Direction::Horizontal,14)=="~~~~~~~~~~~~~~");
    CHECK(notebook.read(2,30,20,Direction::Vertical,14)=="~~~~~~~~~~~~~~");
    CHECK(notebook.read(0,0,5,Direction::Horizontal,3)=="___");
    CHECK(notebook.read(0,0,0,Direction::Vertical,3)=="~_~");   
}
TEST_CASE("Bad input"){
    ariel::Notebook book;
    book.write(0,0,0,Direction::Horizontal,"niv");
    CHECK_THROWS(book.write(0,0,0,Direction::Horizontal,"guy"));
    book.erase(0,0,0,Direction::Horizontal,3);
    CHECK_THROWS(book.write(0,0,0,Direction::Horizontal,"guy"));
    book.write(1,0,0,Direction::Vertical,"moti");
    CHECK_THROWS(book.write(1,0,0,Direction::Horizontal,"guy"));
    CHECK_THROWS(book.write(0,0,0,Direction::Vertical,"guy"));
    CHECK_THROWS(book.write(-1,0,0,Direction::Horizontal,"hello everybody"));
    CHECK_THROWS(book.write(0,-1,0,Direction::Horizontal,"hello everybody"));
    CHECK_THROWS(book.write(0,0,-1,Direction::Horizontal,"hello everybody"));

}