/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int case1(int m, int n){
	int som=m;

	for(int i=m+1; i < m+n; ++i)
        som += i;
        
    return som;
}

int case2(int m, int n){
    int som=m;

	for(int i=m-1; i > m+n; --i)
        som += i;

    return som;

}
/*
acho que a ideia de dividir em case1 e case2 faz sentido, mas eu não dividiria assim =)
*/
int main( void )
{
    int m=0, n=0;

    while(cin >> std::ws >> m >> n){
        if(n > 0){
            cout << case1(m, n) << endl;
        }
        else if(n < 0){
            cout << case2(m, n) << endl;
        }
        else{
            cout << m << endl;
        }
    }

    return 0;
}
