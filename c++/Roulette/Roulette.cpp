#include <iostream> 
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    int total_win = 0;
    int curent_money = 1000;
    int money_change = 0;
    int bet = 0;
    int bet_chose = 0;
    int choice = 0;
    double role = 0;
    double role_check = 0;
    int true_role = 0;
    string color_text;
    int color_number;
    int keep_going = 0;

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
    string rules_5;
    string money_amount;
    string total_change;
    string no_more_money;
    string not_enough_money;
    string bet_amount;
    string bet_typ;
    string bet_typ_nummber;
    string bet_typ_color;
    string the_role;
    string win_nummber;
    string win_color;
    string lose;
    string keep_playing;
    string test;

    /*--------------------------------------------*\
    |    tar reda på vilket språk spelaren vill    |
    |    använda och sätter språket till det       |
    \*--------------------------------------------*/
    while (true)
    {
        cout<< "please select a language" << endl;    
        cout<< "1 for english 2 för svenska" << endl; 
        
        cin >> language;

        if(language == 1){
            invalid_selection = "please try again";
            welcome = "Hello player and welcome to the roulette wheel";
            question_rules = "Do you want to see the rules? (1 for yes 2 for no)";
            rules_1 = "This roulette works in such a way that you can only bet either 100, 300, or 500 kr in one round";
            rules_2 = "you then have to choose whether to bet on numbers or colors (even numbers count as black and uneven numbers count as red)";
            rules_3 = "the roulette will then roll a random number between 1 and 36 and compare it to your bet";
            rules_4 = "if you betted correctly you get the reward (10 times bet if betting on numbers and 2 times bet if betting on color)";
            rules_5 = "and if you betted wrong you lose what you betted";
            money_amount = "You currently have " + to_string(curent_money) + " kr to play with";
            total_change = "Your current total change in money is " + to_string(total_win);
            no_more_money = "You have lost all of your money and have therefore been kicked out of the roulette";
            not_enough_money = "You don't have enough money for that bet";
            bet_amount = "bet either 100, 300 or 500 kr (1 for 100, 2 for 300, 3 for 500)";
            bet_typ = "number or color (1 for number 2 for color)";
            bet_typ_nummber = "bet on a number between 1 and 36 (0 to go back)";
            bet_typ_color = "bet on red or black (0 to go back, 1 for red, 2 for black)";
            the_role = "The roulette has rolled the number " + to_string(true_role) + " which is the color " + color_text;
            win_nummber = "You betted on the correct number and have won " + to_string(money_change) + "kr";
            win_color = "You betted on the correct color and have won "+ to_string(money_change) + "kr";
            lose = "You betted wrong and have lost " + to_string(money_change) + "kr";
            keep_playing = "Do you want to keep playing? (1 for yes 2 for no)";
        }
        else if(language == 2){
            invalid_selection = "snälla försök igen";
            welcome = "Hej spelare och välkommen till roulettehjulet";
            question_rules = "Vill du se reglerna? (1 för ja 2 för nej)";
            rules_1 = "Denna roulette fungerar på så sätt att du kan bara satsa antingen 100, 300 eller 500 kr i en omgång";
            rules_2 = "du måste sedan välja om du vill satsa på nummer eller färger (jämna nummer räknas som svarta och ojämna nummer räknas som röda)";
            rules_3 = "rouletten kommer sedan att rulla ett slumpmässigt nummer mellan 1 och 36 och jämföra det med din insats";
            rules_4 = "om du satsade rätt får du belöningen (10 gånger satsning om du satsar på siffror och 2 gånger satsning om du satsar på färg)";
            rules_5 = "och om du satsade fel förlorar du det du satsade";
            money_amount = "Du har " + to_string(curent_money) + " kr att spela med";
            total_change = "Din nuvarande totala förändring i pengar är " + to_string(total_win);
            no_more_money = "Du har förlorat alla dina pengar och har därför blivit utslängd från rouletten";
            not_enough_money = "Du har inte tillräckligt med pengar för den satsningen";
            bet_amount = "satsa antingen 100, 300 eller 500 kr (1 för 100, 2 för 300, 3 för 500)";
            bet_typ = "nummer eller färg (1 för nummer 2 för färg)";
            bet_typ_nummber = "satsa på ett nummer mellan 1 och 36 (0 för att gå tillbaka)";
            bet_typ_color = "satsa på rött eller svart (0 för att gå tillbaka, 1 för rött, 2 för svart)";
            the_role = "Rouletten har rullat numret " + to_string(true_role) + " vilken är färgen " + color_text;
            win_nummber = "Du satsade på rätt nummer och har vunnit " + to_string(money_change) + "kr";
            win_color = "Du satsade på rätt färg och har vunnit "+ to_string(money_change) + "kr";
            lose = "Du satsade fel och har förlorat " + to_string(money_change) + "kr";
            keep_playing = "Vill du fortsätta spela? (1 för ja 2 för nej)";
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
            cout<< rules_5 << endl;
            _sleep(5000);
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
        if (language == 2){
            money_amount = "Du har " + to_string(curent_money) + " kr att spela med";
            total_change = "Din nuvarande totala förändring i pengar är " + to_string(total_win);
        }
        else{
            money_amount = "You curently have " + to_string(curent_money) + " kr to play with";
            total_change = "Your current total change in money is " + to_string(total_win);
        }
        cout<< blank << endl;
        cout<< money_amount <<endl;
        cout<< total_change <<endl;

        /*----------------------------*\
        |    tar reda på hur mycket    |
        |    spelaren vill sattsa      |
        \*----------------------------*/
        while (true){
            cout<< blank << endl;
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

            if (bet > curent_money){
                cout<< not_enough_money << endl;
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

        /*----------------------------*\
        |    hur rulandet går till     |
        \*----------------------------*/
        role = rand() % 36 + 1;

        role_check = role/2;

        if (role_check == floor(role_check)){
            if(language == 2){
                color_text = "svart";
                color_number = 1;
            }
            else{
                color_text = "black";
                color_number = 1;
            }
        }
        else{
            if(language == 2){
                color_text = "röd";
                color_number = 2;
            }
            else{
                color_text = "red";
                color_number = 2;
            }
            
        }

        true_role = floor(role);

        if (language == 2){
            the_role = "Rouletten har rullat numret " + to_string(true_role) + " vilken är färgen " + color_text;
        }
        else{
            the_role = "The roulette has rolled the number " + to_string(true_role) + " which is the color " + color_text;
        }

        _sleep(1000);
        cout<< blank << endl;
        cout<< the_role << endl;
        _sleep(3000);

        /*----------------------------------*\
        |    tar reda på om spelaren van     |
        \*----------------------------------*/
        if (ask_chose == 1 && choice == role){
            money_change = bet * 10;
            curent_money += money_change;
            total_win += money_change;
            if (language == 2){
                win_nummber = "Du satsade på rätt nummer och har vunnit " + to_string(money_change) + "kr";
            }
            else{
                win_nummber = "You betted on the correct number and have won " + to_string(money_change) + "kr";
            }
            cout<< blank << endl;
            cout<< win_nummber << endl;
            _sleep(3000);
        }
        else if (ask_chose == 2 && choice == 2 && color_number == 1){
            money_change = bet * 2;
            curent_money += money_change;
            total_win += money_change;
            if (language == 2){
                win_color = "Du satsade på rätt färg och har vunnit "+ to_string(money_change) + "kr";       
            }
            else{
                win_color = "You betted on the correct color and have won "+ to_string(money_change) + "kr";
            }
            cout<< blank << endl;
            cout<< win_color << endl;
            _sleep(3000);
        }
        else if (ask_chose == 2 && choice == 1 && color_number == 2){
            money_change = bet * 2;
            curent_money += money_change;
            total_win += money_change;
            if (language == 2){
                win_color = "Du satsade på rätt färg och har vunnit "+ to_string(money_change) + "kr";
            }
            else{
                win_color = "You betted on the correct color and have won "+ to_string(money_change) + "kr";
            }
            cout<< blank << endl;
            cout<< win_color << endl;
            _sleep(3000);
        }
        else{
            money_change = bet;
            curent_money -= money_change;
            total_win -= money_change;
            if (language == 2){
                lose = "Du satsade fel och har förlorat " + to_string(money_change) + "kr";
            }
            else{
                lose = "You betted wrong and have lost " + to_string(money_change) + "kr";
            }
            cout<< blank << endl;
            cout<< lose << endl;
            _sleep(3000);
        }

        if (language == 2){
            money_amount = "Du har " + to_string(curent_money) + " kr att spela med";
            total_change = "Din nuvarande totala förändring i pengar är " + to_string(total_win);
        }
        else{
            money_amount = "You curently have " + to_string(curent_money) + " kr to play with";
            total_change = "Your current total change in money is " + to_string(total_win);
        }
        cout<< blank << endl;
        cout<< money_amount <<endl;
        cout<< total_change <<endl;
        _sleep(3000);

        if (curent_money <= 0){
            cout<< blank << endl;
            cout<< no_more_money <<endl;
            break;
        }

        /*-----------------------------*\
        |    vill spelaren fortsäta     |
        \*-----------------------------*/
        while (true)
        {
            cout<< blank << endl;
            cout<< keep_playing << endl;
            cin >> keep_going;

            if(keep_going == 1 || keep_going == 2){
                break;
            }
   
            cout<< invalid_selection << endl;
            continue;
        }
        
        if (keep_going == 2){
            break;
        }
  
    }
    
    
    return 0;
}