#include <iostream> 
#include <string>       //används för att kunna konvertera int till string
#include <ctime>        //används för att kunna slumpa fram ett tal
#include <Windows.h>    //används för att kunna sätta output konsollen till UTF-8
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    cout<< "häj";
    return 0;
}
