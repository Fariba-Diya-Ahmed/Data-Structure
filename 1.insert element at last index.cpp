#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int i , a[100] , extra ;

    int x ;
    cout << "Enter size of array: " ;
    cin >> x ;

    if( x >= 100 )
        cout << "Insertion is not possible." << endl ;
    else
    {
        cout << "Enter elements of array: " << endl ;
        for( i=0 ; i<x ; i++)
            cin >> a[i];

        cout << "The array: " << endl ;
        for( i=0 ; i<x ; i++)
            cout << a[i] << " ";

        i++ ;

        cout << endl <<"Enter the element to be inserted: ";
        cin >> extra ;

        a[i] = extra ;

        cout << endl <<"The array after insertion of new element: " << endl ;

        for( i=0 ; i<=x ; i++)
        {
            if (i == x)
                cout << extra << endl ;
            else
                cout << a[i] << " " ;
        }

        cout << endl ;
        for( i=0 ; i<=x ; i++)
        {
            if (i == x)
                cout << "Index " << i << " = " << extra << endl ;
            else
                cout << "Index " << i << " = " <<  a[i] << endl ;
        }
    }

    return 0 ;
}
