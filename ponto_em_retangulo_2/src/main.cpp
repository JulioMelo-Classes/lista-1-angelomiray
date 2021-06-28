/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

int rect_validity(Ponto r1, Ponto r2){
    if(r1.x != r2.x || r1.y != r2.y)
        return true;
    else if(r1.x != r2.y || r1.y != r2.x)
        return true; // possível erro, talvez tirar
    return false;
}

void exchange(Ponto &r1, Ponto &r2){
    Ponto aux{};
    aux.x = r1.x;
    aux.y = r1.y;
    r1.x = r2.x;
    r1.y = r2.y;
    r2.x = aux.x;
    r2.y = aux.y;
}

/*ok!*/

int main(void)
{
    Ponto r1{}, r2{}, p{};

    while(cin >> r1.x >> r1.y >> r2.x >> r2.y >> p.x >> p.y){
        if(r1.y > r2.y){
            exchange(r1, r2); //organizar o valor IE e o SD.
        }
        if(rect_validity(r1, r2) == true){
            if(pt_in_rect(r1, r2, p) == OUTSIDE){
                cout << "outside" << endl;
            }
            else if(pt_in_rect(r1, r2, p) == INSIDE){
                cout << "inside" << endl;
            }
            else{
                cout << "border" << endl;
            }
        }
        else{
            cout << "invalid" << endl;
        }
    }

    return 0;
}
