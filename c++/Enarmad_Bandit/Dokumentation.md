# Inlämningsuppgift 2
# Enarmad bandit

<br>

Grundläggande programmering med C++  
(Erik Gustafsson, Datavetenskap inriktning systemutveckling, a23erigu)

<br>
<br>
<br>
<br>
<br>
<br>

## Introduktion

Uppgiften går ut på att skapa spelet enarmad bandit.  
Enarmad bandit går ut på att stopa snurrande cylindrar så symbolerna på cylindrarna hamnar i rader.  
Raderna kan vara horisontella, vertikala eller diagonala.  
Denna version av enarmad bandit använder inte cylindrar utan istället slumpar mellan tre olika symboler i nio rutor som liger i ett tre gånger tre nät.  
Om dom symbolerna formar en rad så får spelaren en två gånger sin insats.  
Finns det tre rader får spelaren tre gånger insatsen.  
Formas det fem rader får spelaren fem gånger insatsen.  
Är alla rutor samma symbol får spelaren tio gånger insatsen.  
Spelaren ska endast få satsa med 100, 300 eller 500 kr. 

<br>

## Problembeskrivning

Några delproblem som har identifierats till detta program är:   
Spelaren ska kunna välja språk i början av programmet.  
Programmet borde kunna visa regler på hur det funkar för spelare som inte spelat roulettehjul förut.  
Hur mycket pengar spelaren ska börja med.  
Kunna vissa hur mycket pengar spelaren har.   
Skapa ett te gånger tre bräde.  
Kunna slumpa nio stycken figurer till brädet.  
Vissa brädet på ett snyggt sät till spelaren.  
Hur programmet ska kunna hitta rader i brädet.  
Räkna ut hur många rader det fins.  
Hur mycket pengar spelaren van eller förlora.  
Hur spelaren ska kunna köra igen.

<br>

## Antaganden och krav

Några krav som identifierats för denna enarmade bandit är:  

### Välja språk mellan svenska och engelska
Språkval är viktigt då det finns många som inte kan svenska och dom borde också kunna köra roulettehjulet.

### Kunna visa regler om spelaren önskar det
Många har inte spelat roulette och olika rouletter har olika regler så borde kunna visa upp reglerna på roulettehjulet.

### Välja Start kapital 
Spelaren ska få välja hur mycket pengar dom säter in på spelet.

### Bara kunna satsa på 100, 300 eller 500kr
Spelaren ska bara kunna välja mellan 100, 300 eller 500 kr om dom har tillräckligt med pengar.

### Bestämma när spelet startar
Spelaren ska få bestämma när spelet ska starta.

### Nio olika rutor
Spelet ska bestå av nio ruter i ett tre gånger tre rutnät.

### Tre stycken olika symboler
Spelet ska ha tre olika symboler som ska kunna hamna i dom nio rutorna.

### Slumpmässigt rullning
Symbolerna i rutnätet ska alla vara slumpmässigt framtagna.

### Ändra spelarens pengar beroende på om den vann eller förlorade
Om spelet rulla en rad ska spelaren få två gånger satsning.  
Om spelet rulla tre rader ska spelaren få tre gånger satsning.  
Om spelet rulla fem rader ska spelaren få fem gånger satsning.  
Om spelet rulla alla rutor samma ska spelaren få tio gånger satsning.  
Om spelet inte rulla någon rad ska spelaren förlora det dom satsade.

### Sparka ut spelaren om den har slut på pengar
Spelaren ska inte få spela om den har slut på pengar.

### Kunna fortsätta spela rouletten  
Spelaren ska få fortsätta spela så länge som den har pengar.

<br>

## Lösningsdesign 

### Start av programmet 

Så som det var tänkt med denna uppgift är det skulle var bäst att 
försöka göra språk delen först då det nog kommer behöva  
skriva ut saker i terminalen till alla andra delar  
så att fixa språket först kändes viktigast.

För att göra språket skulle det nog vara bäst att sätta språk delen i en funktion så om någon del av språk skulle behövas uppdatera under spelets gång kan programmet bara köra funktionen.

Efter språk ska spelaren få valet om regler då spelaren nog vill kunna ha reglerna innan spelet startar. 

Delen efter regler ska vara hur mycket pengar spelaren vill sätta in på spelet då det behöver att man har sat in några pengar innan det går att köra spelet.

<br>

![Alt text](Enarmad_bandit_start.svg)  
bild på språk, regler och insättning designen

<br>

### Satsning och slumping

När spelaren har valt in insättning så ska spel loopen börja. 
I spel loopen ska det börja med att vissa mängden pengar spelaren har och fråga hur mycket pengar spelaren vill satsa dena rundan.

Spelaren har också valet om dom vill börja om satsningen om dom satsat fel.

Om satsningen är klar ska programmet börja med att rulla fram brädet.  
Rullningen av brädet var tänkt att vara en funktion som slumpmässigt ger alla position på brädet en av tre olika strängar.

Efter att brädet har rullats fram ska det vissas för spelaren.

<br>

![Alt text](Enarmad_bandit_gissning_och_brade.svg)  
bild på satsning och slumpanden av brädet designen

<br>

### Antalet rader och vinst

När programmet har visat det framrullade brädet för spelaren ska den sedan börja undersöka hur många rader det fins på brädet.  
Detta var tänka att hända i en funktion som går igenom alla typer av rader det kan ha blivit.

Efter att ha hitat hur många rader som det fins på brädet ska programmet ge utt korrekt vinst till spelaren (om spelaren van).  
Detta skulle häls göras i en funktion som tar in hur mycket spelaren satsade och hur mycket det ska ändras med.

<br>

![Alt text](Enarmad_bandit_rader_och_vinst.svg)  
bild på hitta rader och vinst designen

<br>

### Slutet av programmet

Efter att ha räknat ut vinsten/förlusten ska programmet kolla om spelaren ha pengar kvar att spel för.

Har spelaren pengar kvar ska spelaren få valet om den vill fortsätta spel vilket tar den tillbaka till början av spel loopen om den säjer ja.

<br>

![Alt text](Enarmad_bandit_slut.svg)  
bild på slutet i flödesdiagrammet

<br>

### Hela flödesdiagrammet

<br>

![Alt text](Enarmad_bandit.svg)  
bild på hela flödesdiagrammet

<br>

## Problem

Problem som stöttes på under programmerandet var

* att skicka med en matris i en funktion.  
Detta problem var att spel brädet skulle skickas in i en funktion för att läsa mängden raden den hade men matrisen som skickades till funktion ville inte helt fungera som vanligt då kommandon som size() inte fungerade längre.  
Det jag kom till at märka var att när matrisen skickades till funktion var det inte matrisen skälv som skickades utan en pekare till matrisen vilket gjorde att kommandon som size() inte fungerade längre då dom bara fungera på matrisen skälv.  
Problemet löstes genom att göra size() utanför funktionen och sedan skick med storleken som en separat variabel i funktionen.

* att skicka strängar i en int cin.  
Problemet vara att om man skrev stränga i en cin som bara tog int hamnade programmet i en oändlig loop så man behövde starta om.  
Problemet löstes genom funktionen

        void cin_check(){
            if (cin.fail()){
                cin.clear();
                cin.ignore(256, '\n');
            }
        }

    Det funktionen gör är att börja med att kolla om cin har misslyckats (fåt en string när den bara kan ta int) genom cin.fail().  
    Om cin är misslyckad så tar programmet och stoppar cin från att fortsätta använda det som har skickats in genom cin.clear().  
    Efter att ha stoppat cin från att fortsätta använda det som skickat in används cin.ignore(256, '\n') för att säja till cin att ignorera det strängar som redan är i cin.  
    Ett problem med lösningen är att om man skulle skriva exempel 100hejdettaärtest skulle programmet ta det som 100 och sedan skicka in resten av inputen i nästa cin som kommer då få ett fel medelande. Det händer dock bara om man skriver in siffror i början av inputen annars kommer programmet slänga bort hela inputen.

<br>

## Beskrivning av kod

### Start av programmet

Början av koden är vart jag skapar språk som globala variabler.  
Detta görs då språk används av flera funktioner så språk variablerna fick bli globala.  

Efter dom globala variablerna skapas fler funktioner som kommer tas upp om när dom används.

I början av main är vart konsol språket sätts och slump generatorn startars.  
Den är sedan följd av några lokala variabler för programmet.

<br>

### Språk

Delen efter skapandet av variablerna är språk.  
Språk börjar med att fråga vad spelaren vill ha för språk vilket sedan blir skickat till en språk funktion som sedna sätter språket.  
Språk funktion tar emot många variabler men den viktigaste (language) är vilket språk spelaren vill ha.

    void language_set(int language, int total_money){
        if (language == 1){
            invalid_selection = "Not a valid argument, please try again";
            welcome = "Hello and welcome to this slot machine";
            question_rules = "Do you want to see the rules? (1 for yes, 2 for no)";
            total_money_text = "Your total amount of money to play with is " + to_string(total_money) + " kr";
        }
        else if (language == 2){
            invalid_selection = "Inte ett giltigt argument, snälla försök igen";
            welcome = "Hej och välkommen till denna enarmade bandit";
            question_rules = "Vill du see reglerna? (1 för ja, 2 för nej)";
            total_money_text = "Din totala summa pengar att spela med är " + to_string(total_money) + " kr";
        }
    }
En del av språk för exempel

<br>

### Regler och insättning

Följt av språk är Regel biten.
Regler är en cin som frågar om spelaren vill se regalerna och visar dom om spelaren vill see

Efter regler är insättning vilket är en cin som tar alla tal över 100 som spelarens start summa.

När programmet är klar med insättning så starta spel loopen.

<br>

### Satsning 

Första biten i spel loopen är satsning.   
Satsning fungerar genom att ta 1, 2 eller 3 (100, 300 och 500 respektive) för att bestämma hur mycket spelaren vill satsa.  
Fins också en check för om spelaren har pengar för sin satsning.

Satsning delen slutar med en fråga om spelaren är säker på om dom vill börja med den satsningen som dom valt och svar dom nej här går dom tillbaka till början av satsning.

    cout<< blank << endl;
    cout<< total_money_text << endl;
    cout<< total_money_change_text << endl;
    _sleep(3000);

    cout<< blank << endl;
    cout<< question_bet << endl;

    cin >> bet_choice;
    cin_check();

    if (bet_choice == 1){
        bet_amount = 100;
    }
    else if (bet_choice == 2){
        bet_amount = 300;
    }
    else if (bet_choice == 3){
        bet_amount = 500;
    }
Exempel på satsning

<br>

### Rullandet av brädet

När spelaren är säker på sin  satsning så börjar programmet med att rulla brädet.  
Detta sker i en for loop som går igenom alla platser i brädet och kör en funktion på dom som ger en slumpmässig symbol.

Slutet av rullningen är också där programmet visar brädet för spelaren.

    for (int i = 0; i < size_board; i++){
        for (int x = 0; x < size(board[i]); x++){
            symbol = Role_symbols();
            board[i][x] = symbol;
        } 
    }
For loopen för rullandet av brädet

<br>

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

        return answer;
    }
Funktionen för slumpande av symboler

<br>

### Hitta rader

För att programmet ska kunna hitta mängden rader i brädet används funktionen Check_board som tar emot brädet och storleken av brädet och ger sedan tillbaka mängden rader i brädet.

Check_board går igenom alla möjliga sät rader kan formas på för att see hur många rader det fins.
För att göra detta använder Check_board funktionerna horizontal och vertical vilket går igenom vertikal och horisontella rader.
Check_board har också två for loopar för att kolla diagonala rader.  
Check_board räknar baklänges så börjar på det högsta mängden rader (8) och för varje gång den inte hittar en rad minskar den talet med 1.

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
Hur Check_board ser ut

<br>

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
Hur funktionen horizontal ser ut

<br>

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
Hur funktionen vertical ser ut


