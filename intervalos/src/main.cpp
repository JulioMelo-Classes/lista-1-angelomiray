#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

void def_porcentagem(int value, int total){
    cout << setprecision(4) << (value*100)/(float)total << endl;
}
/*ok, bom trabalho modularizando!*/
int main(void)
{
    int x;
    int intervalos[5]{}; int tot=0;
    while(cin >> std::ws >> x){
        //cout << x << endl;
        if(x >= 0 && x < 25)
            ++intervalos[0];
        else if(x >= 25 && x < 50)
            ++intervalos[1];
        else if(x >= 50 && x < 75)
            ++intervalos[2];
        else if(x >= 75 && x < 100)
            ++intervalos[3];
        else
            ++intervalos[4];
        ++tot;
    }

    for(int i=0; i < 5; ++i)
        def_porcentagem(intervalos[i], tot);


    return 0;
}
