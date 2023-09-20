# Inlämningsuppgift 1
## Roulette

<br>

Grundläggande programmering med C++  
(Erik Gustafsson, Datavetesnkap inriktning systemutväkling, a23erigu)

<br>
<br>
<br>
<br>
<br>
<br>

### Introduktion

Denna uppgiften går ut på att skapa ett roulette hjul.  
Deta roulette hjul ska fungera genom att spelaren ska
starta med 1000 kr och sedan kunna satsa antigen  
100, 300 eller 500 kr och sedan kunna gissa på antigen nummer eller färj.  
Roulette hjulet ska ha nummer mellan 1 och 36.  
Ojämna nummer är röda och jämna nummer är svarta.

<br>

### Problembeskrivning

Några delproblem som jag har identifierat är hur
* man ska kunna välja hur mycket pengar man vill satsa
* programmet ska rula ett slumpmäsigt tal mellan 1 och 36
* programmet ska kunna få reda på vilken färj som det har rulats 
* reglerna ska kunna visas för spelaren
* programmet ska hantera att kunna ha både svenska och engelska som språk

<br>

### Antaganden och krav

Några krav som jag skälv har märkt för deta roulette hjul är  
att programmet borde kunna visa regler på hur det funkar för   
spelare som inte spelat roulette hjul förut.  
Spelaren borde kunna välja vilket språk som dom vill att spelet   
ska använda.  

<br>

### Lösningsdesign 

Så som jag tänkte med denna uppgift var att jag ville  
försöka göra språk delen först då jag skulle behöva  
skriva ut saker i terminalen till alla andra delar  
så att fixa språket först känndes viktigast.

För att göra språket kännde jag att det skule vara bäst  
om jag i början av programet deklarerade strängar som jag sedan när spelaren  
hade valt språk kunde tilldela en text beroende på om det är svenska eller engelska.   
Sedan när jag behöde skriva ut något i programet kunnde jag bara kalla på  
strängen för att skriva ut.  
Genom att görat det på deta sät så blir det att alla mina texter jag skriver ut ligger på samma plats så det blir änklare att hantera dom och att jag kan använda samma sträng för både svenska och engelska så jag sliper behöva göra en output för svenska och en för engelska utan kan bara göra en output på strängen

efter språk biten tänkte jag det borde vara bäst att fråga om regler så spelaren kan få reglerna på språket som domm föredrar
