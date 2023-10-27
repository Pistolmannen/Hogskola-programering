# Hemtentamen
## Grundläggande programmering med C++


## Uppgift 1

A. Ett programmeringsparadigm är ett tankesätt eller angreppsätt om hur man programmerar ett program.

B. Procedurell programmering är set som ett HUR perspektiv på programmering.   
Procedurell programmering är baserat på kontrollstrukturerna Sekvens, Iteration, Selektion och Funktion.   
Det Procedurell programmering säjer ät att mans ska dela upp program i flera delprogram (oftast i funktioner) som ska föröka vara så självständiga som möjligt.  
Detta görs då enligt Procedurell programmering ska det vara enklare att hantera komplexitet och att hitta problem/buggar i koden om alla delar av ett program är uppdelade.  
Procedurell programmering går också ut på att om något går fel i en av delprogrammen ska fortfarande huvud programmet kunna köras utan att krascha.  
Några fördelar med Procedurell programmering är att det är enkel att förstå och felsöka då allt är uppdelat i delprogram.   
En svaghet med  Procedurell programmering är om man till exempel skulle ha två spelare till ett spel så skulle man behöva göra minst två delprogram (troligt vis fler) för att kunna hantera spelarna så det kan snabbt bli mycket kod som får repeteras om man vill göra större program.


C. Båda paradigmen utgår ifrån ett VAD perspektiv men det objektorienterade programmering har är att tänka på alla program som objekt som ska innehålla både operatorer och enheter.  
En styrka med objektorienterade programmering är objekten med att man kan skapa ett objekt till till exempel bilar så behöver man inte skapa samma kåd till flera bilar utan kan bara använda objektet själv till det.  
En svaghet med objektorienterade programmering är att det kan vara svårt att förstå om man inte kan programmering sän innan så det är inte nybörjarvänligt.

D. -

E. C++ och java

F. Högnivåspråk har fördelarna att det är väldigt mycket enklare för en människa att förstå och läsa med också att det inte är platforms beroende så det kan fungera på olika typer av datorer.

G. Selektion (if sats) är ett val i koden där programmet måste välja en väg att ta. Det kan finnas flera vägar men det måste alltid finnas minst två vägar i en selection.  
Iteration (loop) är en upprepning av programmet medans ett villkor är sant.
En Iteration kan köras 0 eller flera gånger men ska helst ha ett slut någon gång.  
Sekvens är att program ska ha en början och ett slut som är vart programmet ska börja och vart det ska sluta.

<br>

## Uppgift 2

A. Utifrån ett användares perspektiv ska ett bra program vara billigt (om det kostar pengar) då användare vill spendera så lite pengar som möjligt, enkelt att använda då användare inte brukar gilla att behöva läsa igenom manualer för att använda program, snyggt (utifrån grafik) då användare brukar föredra program som inte ser hemska ut, bugg frit då användare tycker det är jobbing om något inte vill funkar som det ska, inte tar upp för mycket minne/RAM då användare brukar villa kunna ha fler än ett program på sin dator samtidigt.

B. Första fasen av Livscykelsmodellen är analys och är där man får ett problem som ska lösas och ska sedan försöka hitta antaganden och krav till lösningen och det man ska få av analysen är en kravspecifikation.  
Andra delen av Livscykelsmodellen är design vilket är där man ska skapa en design på hur programmet ska byggas vilket kan inkludera delproblem, vilket platform programmet ska göras på men även vilket språk som ska användas. Det man ska få av design är en System beskrivning.  
Nästa del av Livscykelsmodellen är implementation vilket är att faktisk skapa programmet ifrån designen man har. I implementation ingår även att testa specifika delar av koden. Det man ska få av implementation är version 1 av programmet.  
Delen efter implementation är testing och installation viket är där man går igenom hela programmet för att försöka hitta buggar och testar programmet under olika situation för att se om det kan hantera dom. Det man ska få ifrån implementation är ett fungerande program.
Sista delen av Livscykelsmodellen är underhåll och drift vilket är att hålla programmet fungerande (till exempel hålla servrar uppe) och uppdatera det om det behövs.

C. Rapid prototyping går utt på att mans ska skapa många prototyper av ett program för att försöka hitta problem med designen/iden av programmet.  
En styrka med rapid prototyping är att man kan snabbt hitta problem med designen/iden och försöka fixa dom innan det gåt för långt.
En svaghet med Rapid prototyping är att det kan ta ganska lång tid att komma igenom prototyp fasen så man kan behöva spendera mycket tid och pengar där.

D. Pair programming (också kallad Extreme programming) går utt på att ha en focus på kunden och att vara snabb. Pair programming fungerar också genom att det ska vara ett par som programmerar så en person ska sita vid datorn och programmera medans en annan ska sita bredvid och se till att programmeraren inte gör fell och följer designen.  
En styrka med pair programming är att man kan snabbt få program gjorda och fel brukar kuna upptäckas snabbt då man är två som kollar på koden.
En svaghet med pair programming är att det ofta blir fel/buggar så man behöver ofta göra om saker men också att programmerarna måste kunna arbeta bra tillsammans annars blir det problem.

E. Ett vanligt misstag är att man direkt börjar med implementation av programmet utan en design. Det brukar ledda till att man kommer behöva göra om mycket av koden då det ofta kan bli stora problem om man inte har en design.  
Ett annat problem är att man glömmer eller inte tänker på dolda krav som program har. Det kan ofta leda till att man missar viktiga delar eller gör antaganden som kunden inte gillar så man får börja om eller göra om mycket av koden.

<br>

## Uppgift 3

A. -

B. Att deklarera en variabel är att man bara skapar variabeln (till exempel int number) medans att initiera en variabel är att man skapar den och tilldelar den ett värde samtidigt (till exempel int number = 4)

C. sätt sig i bilen  
sätt i nycken  
vrid om nycken  
starta motorn  
tryck på pedalerna  

D. Linjärsökning är att programmet ska söka igenom en array ifrån början till slutet. Linjärsökningar är enkla att implementera och förstå men kan ta lång tid om det blir långa arrayer eller komplicerade jämförelser. Binärsökning.

E.

F.

G.

<br>

## Uppgift 4