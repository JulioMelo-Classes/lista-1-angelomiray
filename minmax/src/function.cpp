#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

/*blz!*/
std::pair<int,int> min_max( int V[], size_t n )
{
    int min=V[0], max=V[0];
    std::pair<int, int> ret{};
    if(n == 0){
        ret.first = -1;
        ret.second = -1;
        return ret;
    }

    for(int i=0; i < n; ++i){
        if(V[i] < min){
            ret.first = i;
            min = V[i];
        }
        if(V[i] >= max){
            ret.second = i;
            max = V[i];
        }
    }
    return ret;
}
