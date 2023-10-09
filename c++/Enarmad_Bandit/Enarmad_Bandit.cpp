#include <iostream> 
#include <string>       //används för att kunna konvertera int till string
#include <ctime>        //används för att kunna slumpa fram ett tal
#include <Windows.h>    //används för att kunna sätta output konsollen till UTF-8
using namespace std;


string blank = " ";
string welcome;

void language_set(int language){

    if (language == 1){
        welcome = "Hello and welcome to this slot machine";
    }
    else if (language == 2){
        welcome = "Hej och välkommen till denna enarmade bandit";
    }
    else{
        cout<< "how did this happen?????" << endl;
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
        cout<< "Please chose a language | Snälla välj ett språk" << endl;
        cout<< "1 for english, 2 för svenska" << endl;
        cin>> language; 

        if (language == 1 || language == 2){
            break;
        } 
        else{
            cout<< "Please try again | Snälla försök igen" << endl;
        }
    }
    
    language_set(language);

    cout<< welcome << endl;

    
    return 0;
}
