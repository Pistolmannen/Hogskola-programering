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



