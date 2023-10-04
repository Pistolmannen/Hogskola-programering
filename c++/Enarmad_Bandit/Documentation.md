# Inlämningsuppgift 1
# Roulette

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
Enarmad bandit går ut på att stopa snurrande cylindrar så märkena på cylindrarna hamnar i rader.  
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
Hur spelaren ska kunna satsa antingen 100, 300 eller 500 kr.  
Att spelaren inte ska kunna satsa mer pengar en vad den har.  
Hur spelaren ska kunna gissa på antigen nummer eller färg.  
Att om spelaren väljer färg ska den bara kunna gissa på antigen röd eller svart.  
Att om spelaren väljer nummer ska den bara kunna gissa på ett nummer mellan 1 och 36.  
Hur programmet ska rulla ett slumpmässigt nummer mellan 1 och 36.  
Hur programmet ska räkna ut om det slumpmässiga talet är jämt eller inte.  
Hur programmet ska visa vad det är som rullades för spelaren.  
Hur programmet ska jämföra om spelaren har gissar korrekt.  
Att om spelaren gissa korrekt ska programmet ge ut den korrekta mängden pengar som spelaren ska ha vunnit.  
Att om spelaren förlorar ska programmet ta bort pengarna som spelaren satsade.  
Hur spelaren ska få veta hur mycket pengar som den har förlorat/vunnit.  
Hur programmet ska kolla om spelaren fortfarande har pengar.  
Hur spelaren ska få frågan om att fortsätta spela. 