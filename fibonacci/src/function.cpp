#include "function.h"
#include <iostream>

/*blz*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> fibo_values{};
    int f1=1, f2=1, f3=2;
    for(int i=0; f1 < n; ++i){
        fibo_values.resize(i+1);
        fibo_values[i] = f1;
        f1=f2;
        f2=f3;
        f3=f1+f2; 
    }

    return fibo_values;
}
