#include <iostream> 
using namespace std;

int main()
{

    int total_win = 0;
    int curent_money = 1000;

    // för if satser
    int language;
    int ask_rules;

    // för språket
    string invalid_selection;
    string welcome;
    string question_rules;
    string rules_1;
    string rules_2;
    string rules_3;
    string money_amount;

    /*--------------------------------------------*\
    |    tar reda på vilket språk spelaren vill    |
    |    använda och sätter språket till det       |
    \*--------------------------------------------*/
    while (true)
    {
        cout<< "please select a language" << endl;    
        cout<< "1 for english 2 for swedish" << endl; 
        cout<< "test " << " hej"<< endl; 
    
        cin >> language;

        if(language == 1){
            invalid_selection = "please try again";
            welcome = "Hello player and welcome to the roulette wheel";
            question_rules = "Do you want to see the rules? (1 for yes 2 for no)";
            rules_1 = "This roulette works in such a way that you can only bet either 100, 300, or 500kr in one round";
            rules_2 = "you then have to choose whether to bet on numbers or colors (numbers give 10 time reward colors give 2 times)";
            rules_3 = "the roulette will the roll a random number between 1 and 36 and then compare it to your bet (even numbers count as black and uneven numbers count as red)";
            money_amount = "You curently have " << curent_money;
        }
        else if(language == 2){
            welcome = u8"Hej spelare och välkommen till roulette hjulet";
        }
        else{
            cout<< invalid_selection << endl;
            continue;
        }

        break;
    }

    /*-----------------------------------*\
    |    välkomnar spelaren och visar     |
    |    regler om dom vill se dom        |
    \*-----------------------------------*/
    while (true){
        cout<< welcome << endl;
        cout<< question_rules << endl;

        cin >> ask_rules;

        if (ask_rules == 1){
            cout<< rules_1 << endl;
            cout<< rules_2 << endl;
            cout<< rules_3 << endl;
            break;
        }
        else if(ask_rules == 2){
            break;
        }
        else{
            cout<< invalid_selection << endl;
        }

    }

    /*--------------------------*\
    |    startar spel loppen     |
    \*--------------------------*/
    while (true){
        cout<< "tesst" <<endl;
    }
    
    
    


}