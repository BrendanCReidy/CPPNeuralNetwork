#include "MatrixArray.h" // header in local directory
#include "Vector.h"
#include <iostream> // header in standard library

using namespace N;
using namespace std;

MatrixArray::MatrixArray(){
    size=0;
    cout << "Hello world!" << endl;
    vec = new Vector[size];
}