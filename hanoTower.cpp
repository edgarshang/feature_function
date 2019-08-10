#include <iostream>

using  namespace std;


// a ==> source b ==> middle c ==> dst
void hanoTower(int n, char a, char b, char c)
{
    if ( n == 1 )
    {
        cout << a << " ==>" << c << endl;
    }else
    {
        hanoTower(n-1, a, c, b);
        hanoTower(1, a, b, c);
        hanoTower(n-1, b, a, c);
    }
}