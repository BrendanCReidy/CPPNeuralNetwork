//#include "Vector.h" -- does not work

namespace N
{
    class MatrixArray
    {
        public:
            MatrixArray();
        private:
            int size;
            Vector* vec; // does not work
    };

}