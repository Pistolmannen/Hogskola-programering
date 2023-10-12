#include <iostream> 
#include <string>       //används för att kunna konvertera int till string
#include <ctime>        //används för att kunna slumpa fram ett tal
#include <Windows.h>    //används för att kunna sätta output konsollen till UTF-8
using namespace std;

/*------------------------------*\
|   Globala strängar för språk   |
\*------------------------------*/ 
string blank = " ";
string welcome;
string invalid_selection;
string question_rules; 
string rules_1;
string rules_2;
string rules_3;
string rules_4;
string rules_5;
string rules_6;
string question_deposit;
string total_money_text;
string total_money_change_text;
string question_bet;
string not_enough_money;
string question_start_loop;

/*----------------------------------*\
|   Funktion för att sätta språket   |
\*----------------------------------*/
void language_set(int language, int total_money, int total_money_change, int bet_amount){

    if (language == 1){
        invalid_selection = "Not a valid argument, please try again";
        welcome = "Hello and welcome to this slot machine";
        question_rules = "Do you want to see the rules? (1 for yes, 2 for no)";
        rules_1 = "The slot machine works like this";
        rules_2 = "The player start by deciding how much money they want to deposit.";
        rules_3 = "Then the player gets to deciding how much to bet on a round. (100, 300 or 500 kr)";
        rules_4 = "The machine will then roll a random pattern with three symbols on a three by three grid.";
        rules_5 = "If there is at least one row of three symbols either horizontally, vertically or diagonally then the player wins.";
        rules_6 = "One row = two times bet, Three rows = three times bet, Five rows = five times bet, Full board = ten times bet.";
        question_deposit = "Please put in how much you wish to deposit in to the game (minimum of 100 kr)";
        total_money_text = "Your total amount of money to play with is " + to_string(total_money);
        total_money_change_text = "Your total change in money is " + to_string(total_money_change);
        question_bet = "How much do you want to bet this round? (1 for 100, 2 for 300, 3 for 500)";
        not_enough_money = "Not enough money for that bet";
        question_start_loop  = "Are you sure you want to start the game with a bet of " + to_string(bet_amount) + "kr? (1 for yes, 2 for no)";
    }
    else if (language == 2){
        invalid_selection = "Inte ett giltigt argument, snälla försök igen";
        welcome = "Hej och välkommen till denna enarmade bandit";
        question_rules = "Vill du see reglerna? (1 för ja, 2 för nej)";
        rules_1 = "Dena enarmade bandit fungerar så här";
        rules_2 = "Spelaren börjar med att bestämma hur mycket pengar de vill sätta in.";
        rules_3 = "Sedan får spelaren bestämma hur mycket den ska satsa på en runda. (100, 300 eller 500 kr)";
        rules_4 = "Maskinen kommer sedan att rulla ett slumpmässigt mönster med tre symboler på ett tre gånger tre rutnät.";
        rules_5 = "Om det finns minst en rad med tre symboler antingen horisontellt, vertikalt eller diagonalt så vinner spelaren.";
        rules_6 = "En rad = två gånger insats, Tre rader = tre gånger insats, Fem rader = fem gånger insats, Fullt bord = tio gånger insats.";
        question_deposit = "Vänligen fyll i hur mycket du vill sätta in på spelet (minst 100 kr)";
        total_money_text = "Din totala summa pengar att spela med är " + to_string(total_money);
        total_money_change_text = "Din totala förändring i pengar är " + to_string(total_money_change);
        question_bet = "Hur mycket vill du satsa den här omgången? (1 för 100, 2 för 300, 3 för 500)";
        not_enough_money = "Inte tillräckligt med pengar för den satsningen";
        question_start_loop  = "Är du säker på att du vill starta spelet med en satsning på " + to_string(bet_amount) + "kr? (1 för ja, 2 för nej)";
    }
    else{
        cout<< "how did this happen?????" << endl;
    }

}

/*--------------------*\
|   Här startar main   |
\*--------------------*/
int main()
{
    SetConsoleOutputCP(CP_UTF8);      // sätter konsolen till UTF-8
    srand(time(0));

    int language;
    int rules_choice;
    int deposit_choice;
    int bet_choice;
    int start_loop_choice;
    

    int total_money = 0;
    int total_money_change = 0;
    int bet_amount = 0;

    /*---------------------------------------------*\
    |   Tar reda på vilket språk spelaren vill ha   |
    \*---------------------------------------------*/
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
            _sleep(1000);
        }
    }
    
    language_set(language, total_money, total_money_change, bet_amount);

    cout<< welcome << endl;

    /*---------------------------------*\
    |   Ger valet om att vissa regler   |
    \*---------------------------------*/
    while (true){
        cout<< blank << endl;
        cout<< question_rules << endl;

        cin >> rules_choice;

        if (rules_choice == 1){
            cout<< blank << endl;
            cout<< rules_1 << endl;
            cout<< rules_2 << endl;
            cout<< rules_3 << endl;
            cout<< rules_4 << endl;
            cout<< rules_5 << endl;
            cout<< rules_6 << endl;

            _sleep(5000);
            break;
        }
        else if(rules_choice == 2){
            break;
        }
        else{
            cout<< invalid_selection << endl;
            _sleep(1000);
        }
    }

    /*------------------------------------------------------*\
    |   Frågar om hur mycket pengar spelaren vill sätta in   |
    \*------------------------------------------------------*/
    while (true){
        cout<< blank << endl;
        cout<< question_deposit << endl;

        cin >> deposit_choice;

        if (deposit_choice < 100){
            cout<< invalid_selection << endl;
            _sleep(1000);
        }
        else{
            total_money = deposit_choice;
            break;
        }
    }

    /*--------------------------*\
    |   Starten av spel loopen   |
    \*--------------------------*/
    while(true)
    {
        language_set(language, total_money, total_money_change, bet_amount);

        /*-------------------*\
        |   satsnings delen   |
        \*-------------------*/
        while(true)
        {   
            /*----------------------------------*\
            |   Hur mycket spelaren vill satsa   |
            \*----------------------------------*/
            cout<< blank << endl;
            cout<< total_money_text << endl;
            cout<< total_money_change_text << endl;
            _sleep(3000);

            cout<< blank << endl;
            cout<< question_bet << endl;

            cin >> bet_choice;

            if (bet_choice == 1){
                bet_amount = 100;
            }
            else if (bet_choice == 2){
                bet_amount = 300;
            }
            else if (bet_choice == 3){
                bet_amount = 500;
            }
            else{
                cout<< invalid_selection << endl;
                _sleep(1000);
                continue;
            }

            /*-----------------------------------------------*\
            |   Om spelaren har tillräckligt för satsningen   |
            \*-----------------------------------------------*/
            if (bet_amount > total_money){
                cout<< not_enough_money << endl;
                _sleep(1000);
                continue;
            }

            /*----------------------------------*\
            |   Om spelaren vill starta spelet   |
            \*----------------------------------*/
            while (true)
            {
                language_set(language, total_money, total_money_change, bet_amount);
                cout<< blank << endl;
                cout<< question_start_loop << endl;

                cin >> start_loop_choice;

                if (start_loop_choice == 1 || start_loop_choice == 2){
                    break;
                }
                else{
                    cout<< invalid_selection << endl;
                    _sleep(1000);
                    continue;
                }
            }

            if (start_loop_choice == 1){
                break;;
            }
            
        }
        

        break;
    }
    

    cout<< "Detta är slutet" << endl;

    return 0;
}
