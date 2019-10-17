namespace N
{
    class Vector
    {
        public:
            Vector();
            Vector(float* aVector, int& aSize);
            float& operator[](int i);
            void do_something();
            void add(float num);
            int getSize();
            void printArray();
        private:
            int size;
            float* vector;
    };

}