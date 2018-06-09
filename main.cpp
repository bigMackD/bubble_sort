//
//  main.cpp
//  sort_babelkowe2
//
//  Created by Maciej Drozdowicz on 14.01.2017.
//  Copyright © 2017 Maciej Drozdowicz. All rights reserved.
//

#include <iostream>
using namespace std;
int tab[5];
int bufor;
int main(int argc, const char * argv[]) {
   cout << "Podaj 5 liczb"<<endl;
    for(int i=0; i<=4; i++)
    {
        cin >> tab[i];
    }
    cout << "SORTOWANIE BABELKOWE" << endl;
    for(int j=1; j<=5; j++)
    {
    for(int i=5; i>=0; i--)
    {
        if(tab[i]<tab[i-1])
        {
            bufor = tab[i-1];
            tab[i-1]=tab[i];
            tab[i]=bufor;
        }
    }
    }
    for(int i=0; i<=4; i++)
    {
        cout << tab[i] << endl;
    }

    return 0;
}
