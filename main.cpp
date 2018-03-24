#include <iostream>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num , x ;
    string message="" ;
    char secretkey ;
    cout << "Ahln ya user ya 7abiby" << endl ;
    cout << "Eneter Number to choose what you want:" << endl;
    cout << "1- Cipher Message" << endl << "2- Decipher Message" << endl ;
    cout << "Enter Number: ";
    cin >> num ;
    cin.ignore() ;

    //cipher

    if(num==1)
    {
        cout << "Enter your message: " ;
        getline(cin,message) ;
        cout << "Enter the secret key: " ;
        cin >> secretkey ;
        cout << "The secret message is: " ;
        for( int i=0 ; i < message.length() ; i++ )
        {
            cout << char( secretkey ^ message[i] ) ;
        }
        cout << endl ;
        cout << "The hexadecimal of secret message is: " ;
        for( int i=0 ; i < message.length() ; i++ )
        {
            cout << hex << int( secretkey ^ message[i] ) << " " ;
        }
    }

    //decipher

    if(num==2)
    {
        cout<< "Enter the secret key: " ;
        cin >> secretkey ;
        cout<< "Enter the hexadecimal cipher message: " ;
        while ( cin >> hex >> x )
        {
            cout << char ( x ^ secretkey ) ;
        }
    }








}
