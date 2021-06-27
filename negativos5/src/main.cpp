#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int count=0;
    for(int i=0; i < SIZE; ++i){
        int v=0;
        cin >> v;
        if(v < 0)
            ++count;
    }
    cout << count << std::endl;

    return 0;
}
