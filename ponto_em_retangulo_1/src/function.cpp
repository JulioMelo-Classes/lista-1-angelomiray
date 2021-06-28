#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

/*ok!*/
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    //OUTSIDE
    /*boa ideia fazer dessa forma!*/
    if(P.x > SD.x)
        return location_t::OUTSIDE;
    else if(P.x < IE.x)
        return location_t::OUTSIDE;
    else if(P.y > SD.y)
        return location_t::OUTSIDE;
    else if(P.y < IE.y)
        return location_t::OUTSIDE;
    //INSIDE
    else if((P.x > IE.x && P.x < SD.x) &&
            (P.y > IE.y && P.y < SD.y))
        return location_t::INSIDE;
    //BORDER
    else
        return location_t::BORDER;
}
