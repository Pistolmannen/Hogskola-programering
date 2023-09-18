#include <iostream> 
#include <string>
using namespace std;

int main()
{

    int total_win = 0;
    int curent_money = 1000;

    // för if satser
    int language;
    int ask_rules;

    // för språket
    string blank;
    string invalid_selection;
    string welcome;
    string question_rules;
    string rules_1;
    string rules_2;
    string rules_3;
    string rules_4;
    string money_amount;

    /*--------------------------------------------*\
    |    tar reda på vilket språk spelaren vill    |
    |    använda och sätter språket till det       |
    \*--------------------------------------------*/
    while (true)
    {
        cout<< "please select a language" << endl;    
        cout<< "1 for english 2 for swedish" << endl; 
        
    
        cin >> language;

        if(language == 1){
            blank = " ";
            invalid_selection = "please try again";
            welcome = "Hello player and welcome to the roulette wheel";
            question_rules = "Do you want to see the rules? (1 for yes 2 for no)";
            rules_1 = "This roulette works in such a way that you can only bet either 100, 300, or 500kr in one round";
            rules_2 = "you then have to choose whether to bet on numbers or colors (numbers give 10 times reward colors give 2 times)";
            rules_3 = "the roulette will the roll a random number between 1 and 36 and then compare it to your bet (even numbers count as black and uneven numbers count as red)";
            rules_4 = "If you bet corectly you get 10 times the reward if you beted on number and 2 times if you beted on colors";
            money_amount = "You curently have " + std::to_string(curent_money) + " kr to play with";
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
        cout<< blank << endl;
        cout<< welcome << endl;
        cout<< question_rules << endl;

        cin >> ask_rules;

        if (ask_rules == 1){
            cout<< blank << endl;
            cout<< rules_1 << endl;
            cout<< rules_2 << endl;
            cout<< rules_3 << endl;
            cout<< rules_4 << endl;
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
        cout<< blank << endl;
        cout<< money_amount <<endl;
        break;
    }
    
    
    


}