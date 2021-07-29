//
// Created by pcweb on 28.07.2021.
//

#include <fstream>
#include <Windows.h>
#include <wininet.h>
#include <String>

#ifndef PROJE_DBACCESS_H
#define PROJE_DBACCESS_H

using namespace std;
class DbAccess {
    public:
            void Write_Txt(int value1,int value2){
                ofstream yazdir(("Data.txt"));
                yazdir << "Ekok => " << value1 << " ";
                yazdir << "Ebob => " << value2;
                yazdir.close();

            }

            void Write_Usb(int value1, int value2){
                ofstream yazdir(("F:\\Data.txt"));
                ofstream yazdir2(("E:\\Data.txt"));

                yazdir << "Ekok => " << value1 << " ";
                yazdir << "Ebob => " << value2;

                yazdir2 << "Ekok => " << value1 << " ";
                yazdir2 << "Ebob => " << value2;
            }

            void Write_Ftp(const CHAR *ftpAdress, const CHAR *userName, const CHAR *passWord ){
                HINTERNET hSession = InternetOpen(NULL,1, NULL, NULL, 0);
                HINTERNET hService = InternetConnect(hSession, ftpAdress,21, userName, passWord,1, INTERNET_FLAG_PASSIVE, 0);
                FtpPutFile(hService, "Data.txt", "Data.txt" , FTP_TRANSFER_TYPE_BINARY, 0);
                InternetCloseHandle(hService);
                InternetCloseHandle(hSession);
            }




};


#endif //PROJE_DBACCESS_H
