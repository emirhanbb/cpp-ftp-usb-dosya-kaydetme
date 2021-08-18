#include <iostream>
#include "DbAccess.h"
#include "Calculator.h"
#include <stdlib.h>

using namespace std;

int main() {
    int x,y;
    cout << "Enter 2 elements: " << endl;
    cin>>x>>y;

    Calculator nesne(x,y);
    DbAccess nesne1;
    nesne1.Write_Txt(nesne.ekok,nesne.ebob);
    nesne1.Write_Usb(nesne.ekok,nesne.ebob);
    nesne1.Write_Ftp("FTP ADDRESS", "USERNAME", "PASSWORD");
    return 0;
}


