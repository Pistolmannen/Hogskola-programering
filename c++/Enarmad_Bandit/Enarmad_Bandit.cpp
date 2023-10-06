#include <iostream> 
#include <string>       //används för att kunna konvertera int till string
#include <ctime>        //används för att kunna slumpa fram ett tal
#include <Windows.h>    //används för att kunna sätta output konsollen till UTF-8
using namespace std;


string blank = " ";

void language_set(int language){

    if (language == 1){
        
    }

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    int language;

    while(true)
    {
        cout<< blank << endl;
        cout<< "please chose a language" << endl;
        cout<< "1 for english, 2 för svenska" << endl;
        cin>> language; 

        if (language == 1 || language == 2){
            break;
        } 
        else{
            cout<< "please try again | snälla försök igen" << endl;
        }
    }
    

    
    return 0;
}
