//#include "function.h"

#include <iterator>
#include <array>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*tive que corrigir alguns problemas neste .h mas ok*/
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    int aux = arr.size()-1;
    for(int i=0; i < arr.size()/2; ++i){
        std::swap(arr.at(i), arr.at(aux));
        --aux;
    }
}
