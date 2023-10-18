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



