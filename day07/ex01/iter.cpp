#include <iostream>

template <typename T>
void  doSomething(T getitdone){
    std::cout << getitdone << std::endl;
}


template <typename T>
void  iter(T *array, int arraylength, void (*f)(T const &element)){
    for (int i = 0; i < arraylength; i++)
    {
        (f)(array[i]);
    }
}

int main( void ) {
    int a[] = {1,3,4};
    std::string s[3] = {"jeremy","John","James"};
    size_t aLength = 3;
    iter(a, aLength, doSomething);
    iter(s, aLength, doSomething);
    return 0;
}
