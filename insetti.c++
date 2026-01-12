#include <iostream>
#include <math.h>

using namespace std ;


int main (  )
{
    int n, k, m, p; 

    cout << " inserire n dei mesi: ";
    cin >> n;
     
    cout << " inserire la costante k: ";
    cin >> k;

    cout << " inserire la massima popolazione: ";
    cin >> m; 

    cout << " inserire la popolazione iniziale: ";
    cin >> p;

    for (int i=0; i<n; i++){
       p = k * p*(1- (p/m));
    }

    cout<<"popolazione di insetti al "<< n << "mese: " << p;




}