#include <iostream> 
#include <string>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int total_win = 0;
    int curent_money = 1000;
    int bet = 0;
    int bet_chose = 0;
    int choice = 0;
    int role = 0;

    // för if satser
    int language;
    int ask_rules;
    int ask_bet;
    int ask_chose;

    // för språket
    string blank = " ";
    string invalid_selection;
    string welcome;
    string question_rules;
    string rules_1;
    string rules_2;
    string rules_3;
    string rules_4;
    string money_amount;
    string no_more_money;
    string bet_amount;
    string bet_typ;
    string bet_typ_nummber;
    string bet_typ_color;

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
            invalid_selection = "please try again";
            welcome = "Hello player and welcome to the roulette wheel";
            question_rules = "Do you want to see the rules? (1 for yes 2 for no)";
            rules_1 = "This roulette works in such a way that you can only bet either 100, 300, or 500kr in one round";
            rules_2 = "you then have to choose whether to bet on numbers or colors (numbers give 10 times reward colors give 2 times)";
            rules_3 = "the roulette will the roll a random number between 1 and 36 and then compare it to your bet (even numbers count as black and uneven numbers count as red)";
            rules_4 = "If you bet corectly you get 10 times the reward if you beted on number and 2 times if you beted on colors";
            money_amount = "You curently have " + std::to_string(curent_money) + " kr to play with";
            no_more_money = "You have lost all of your money and have there for been kicked out of the roulette";
            bet_amount = "bet either 100, 300 or 500kr (1 for 100, 2 for 300, 3 for 500)";
            bet_typ = "number or color (1 for nummer 2 for color)";
            bet_typ_nummber = "bet on a number between 1 and 36 (0 to go back)";
            bet_typ_color = "bet on red or black (0 to go back, 1 for red, 2 for black)";
        }
        else if(language == 2){
            invalid_selection = "snäla försök igen";
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

        if (curent_money <= 0){
            cout<< no_more_money <<endl;
            break;
        }

        /*----------------------------*\
        |    tar reda på hur mycket    |
        |    spelaren vill sattsa      |
        \*----------------------------*/
        while (true){
            cout<< bet_amount <<endl;

            cin >> ask_bet;

            if (ask_bet == 1) {
                bet = 100;
            }
            else if (ask_bet == 2){
                bet = 300;
            }
            else if (ask_bet == 3){
                bet = 500;
            }
            else{
                cout<< invalid_selection << endl;
                continue;
            }

            break;
        }

        /*-------------------------------*\
        |    tar reda på vad för något    |
        |    spelaren vill sattsa på      |
        \*-------------------------------*/
        while (true)
        {
            cout<< blank << endl;
            cout<< bet_typ <<endl;

            cin >> ask_chose;

            if (ask_chose == 1){
                cout<< bet_typ_nummber <<endl;

                cin >> choice;

                if (choice == 0){
                    continue;
                } 
                else if (choice < 0 || choice > 36 ){
                    cout<< invalid_selection << endl;
                    continue;
                }
                break;
            }
            else if (ask_chose == 2){
                cout<< bet_typ_color <<endl;

                cin >> choice;

                if (choice == 0){
                    continue;
                } 
                else if (choice < 0 || choice > 2 ){
                    cout<< invalid_selection << endl;
                    continue;
                }
                break;
            }
            else{
                cout<< invalid_selection << endl;
                continue;
            }
        }

        

        role = rand() % 36 + 1;
        

        /*----------------------------------*\
        |    tar reda på om spelaren van     |
        \*----------------------------------*/
        if (ask_chose == 1 && choice == role){

        }

        cout<< "victory :D" << endl;
        cout<< role << endl;

        break;
    }
    
    
    

    return 0;
}