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
string amount_of_rows;
string lose;
string win;
string out_of_money;
string play_again;

/*----------------------------------*\
|   Funktion för att sätta språket   |
\*----------------------------------*/
void language_set(int language, int total_money, int total_money_change, int bet_amount, int rows, int money_change){

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
        amount_of_rows = "From the board that was rolled there are " + to_string(rows) + " rows of symbols";
        lose = "You have lost the game and your bet";
        win = "You have won the game and your money has increased with " + to_string(money_change);
        out_of_money = "You have run out of money and have there for been kicked out of the machine";
        play_again = "Du you want to play again? (1 for yes, 2 for no)";
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
        amount_of_rows = "Från brädet som rullades finns det " + to_string(rows) + " rader av symboler";
    }
    else{
        cout<< "how did this happen?????" << endl;
    }

}

/*-------------------------------------------*\
|   Funktion för att slumpa fram symbolerna   |
\*-------------------------------------------*/
string Role_symbols(){
    int role;
    string answer;
    role = rand() % 3 + 1;

    if (role == 1){
        answer = "A";
    }
    else if (role == 2){
        answer = "B";
    }
    else if (role == 3){
        answer = "C";
    }
    else{
        cout<< "something is wrong";
    }

    return answer;
}

/*----------------------------------------------*\
|   Funktion för att kollar horisontella rader   |
\*----------------------------------------------*/
int horizontal(string board[3][3], int row, int size_board){
    int answer = 0;

    for (int i = 0; i < size_board; i++){
        if (board[row][i] != board[row][i+1]){
            answer = 1;
            break;
        }
    }

    return answer;
}

/*-------------------------------------------*\
|   Funktion för att kollar vertikala rader   |
\*-------------------------------------------*/
int vertical(string board[3][3], int colum, int size_board){
    int answer = 0;

    for (int i = 0; i < size_board; i++){
        if (board[i][colum] != board[i+1][colum]){
            answer = 1;
            break;
        }
    }

    return answer;
}

/*----------------------------------------------------*\
|   Funktion för att kollar hur många rader som fins   |
\*----------------------------------------------------*/
int Check_board(string board[3][3], int true_size_board){
    int rows = 8;
    const int size_board = true_size_board - 1;
    int outer_board = true_size_board - 1;
    int inner_board = 0;
    


    rows -= horizontal(board, 0, size_board);
    rows -= horizontal(board, 1, size_board);
    rows -= horizontal(board, 2, size_board);

    rows -= vertical(board, 0, size_board);
    rows -= vertical(board, 1, size_board);
    rows -= vertical(board, 2, size_board);


    /*--------------------------*\
    |   Kollar diagonala rader   |
    \*--------------------------*/
    for (int i = 0; i < size_board; i++){
        if (board[i][i] != board[i+1][i+1]){
            rows -= 1;
            break;
        }
    }

    for (int i = 0; i < size_board; i++){
        if (board[outer_board][inner_board] != board[outer_board-1][inner_board+1]){
            rows -= 1;
            break;
        }
        outer_board -= 1;
        inner_board += 1;
    }


    return rows;
}

/*-------------------------------------*\
|   Funktion för att räkna ut vinsten   |
\*-------------------------------------*/
int win_amount(int bet_amount, int modifier){
    int answer;
    answer = bet_amount * modifier;
    return answer;
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
    int money_change = 0;
    int bet_amount = 0;
    int win_check = 0;

    string board[3][3];
    int size_board = size(board); 
    string symbol;
    int rows = 0;

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
    
    language_set(language, total_money, total_money_change, bet_amount, rows, money_change);

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
        language_set(language, total_money, total_money_change, bet_amount, rows, money_change);

        /*-------------------*\
        |   Satsnings delen   |
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
                language_set(language, total_money, total_money_change, bet_amount, rows, money_change);
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
        
        /*-----------------------*\
        |   Slumpar fram brädet   |
        \*-----------------------*/
        for (int i = 0; i < size_board; i++){
            for (int x = 0; x < size(board[i]); x++){
                symbol = Role_symbols();
                board[i][x] = symbol;
            } 
        }

        /*----------------*\
        |   Visar brädet   |
        \*----------------*/
        cout<< blank << endl;
        cout<< board[0][0] + " " + board[0][1] + " " + board[0][2] << endl;
        cout<< board[1][0] + " " + board[1][1] + " " + board[1][2] << endl;
        cout<< board[2][0] + " " + board[2][1] + " " + board[2][2] << endl;
        _sleep(3000);

        /*---------------------------------*\
        |   Hittar mängden rader i brädet   |
        \*---------------------------------*/
        rows = Check_board(board, size_board);

        language_set(language, total_money, total_money_change, bet_amount, rows, money_change);

        cout<< blank << endl;
        cout<< amount_of_rows << endl;
        _sleep(3000);

        cout<< blank << endl;
        if (rows == 0){
            total_money -= bet_amount;
            total_money_change -= bet_amount;
            win_check = 0;
        }
        else if (rows > 0 && rows < 3){
            money_change = win_amount(bet_amount, 2);
            total_money += money_change;
            total_money_change += money_change;
            win_check = 1;
        }
        else if (rows >= 3 && rows < 5){
            money_change = win_amount(bet_amount, 3);
            total_money += money_change;
            total_money_change += money_change;
            win_check = 1;
        }
        else if (rows >= 5 && rows < 8){
            money_change = win_amount(bet_amount, 5);
            total_money += money_change;
            total_money_change += money_change;
            win_check = 1;
        }
        else if (rows == 8){
            money_change = win_amount(bet_amount, 10);
            total_money += money_change;
            total_money_change += money_change;
            win_check = 1;
        }

        language_set(language, total_money, total_money_change, bet_amount, rows, money_change);

        if (win_check == 1){
            cout<< win << endl;
        }
        else if (win_check == 0){
            cout<< lose << endl;
        }

        if (total_money < 100){
            cout<< blank << endl;
            cout<< out_of_money << endl;
            break;
        }

        cout<< blank << endl;
        cout<< total_money_text << endl;
        cout<< total_money_change_text << endl;
        _sleep(3000);

        cout<< blank << endl;
        cout<< play_again << endl;

        break;
    }
    

    cout<< "Detta är slutet" << endl;

    return 0;
}
