# CPSE2 Herkansing 2023/24 - H5. Tic-tac-toe - Merry Ashji 

##

Dit project implementeert een Tic-Tac-Toe (3-op-een-rij) spel. De implementatie maakt gebruik van het Command pattern om het verloop van het spel te beheren en het Model-View-Controller (MVC) pattern om verschillende onderdelen te scheiden. Het spel ondersteunt zowel een grafische interface (SFML) als een text-only interface.

## Applicatie bouwen en uitvoeren
### 1. Grafische interface (SFML)
#### 1. Gebruik het volgende commando om te bouwen:
- make -f MakefileSfml
#### 2. Start de applicatie met:
- ./main.exe
#### 3. Gebruik het volgende commando om het project schoon te maken:
- make -f MakefileSfml clean

### 2. Text-only interface (commandline)
Deze versie is onafhankelijk van de SFML-library
#### 1. Gebruik het volgende commando om te bouwen:
- make -f MakefileText
#### 2. Start de applicatie met:
- ./tictactoe_text
#### 3. Gebruik het volgende commando om het project schoon te maken:
- make -f MakefileText clean

### Opmerking:
Het is belangrijk om het project schoon te maken voor het wisselen van interface. Gebruik de volgende commando's:
#### Sfml 
- make -f MakefileSfml clean
#### Text 
- make -f MakefileText clean

## 2. Spelinstructies
### Spelen met SFML
- Klik op een vakje om het te vullen met 'X' of 'O'.
- Win het spel door drie 'X' of drie 'O' op een rij te plaatsen (horizontaal, verticaal of diagonaal).
- Als het bord vol is en niemand heeft gewonnen, dan is het spel gelijkspel (draw).
- Gebruik de groene knop met het label "Undo" om de laatste zet ongedaan te maken.

### Spelen met de Commandline
- Voer de rij en kolom in gescheiden door een spatie om een zet te doen (bijvoorbeeld 1 1 of 0 2).
- Het bord wordt weergegeven met de door jou ingevoerde zet.
- Voer 'u' in om de laatste zet ongedaan te maken.
- Als je een getal buiten de bordgrootte invoert, krijg je een melding dat de invoer incorrect is.

## 3. Voorbeeldinvoer en -uitvoer
### SFML-interface
- Klik op een vakje om het te vullen met 'X' of 'O'.
- Win het spel door drie 'X' of drie 'O' op een rij te plaatsen (horizontaal, verticaal of diagonaal).
- Als het bord vol is en niemand heeft gewonnen, eindigt het spel in een gelijkspel.
- Gebruik de "Undo" knop om de laatste zet ongedaan te maken.

### Commandline-interface 
- Het bord ziet er als volgt uit:
    ```
    1 2 3
    4 5 6
    7 8 9
    ```
- Voer een getal tussen 1 en 9 in om een zet te doen (bijvoorbeeld 5):
    ```
    . . .
    . X .
    . . .
    ```
Player O's turn. Enter a number (from 1->9) (or 'u' to undo): 
- Voer 'u' in om de laatste zet ongedaan te maken:
    ```
    . . .
    . . .
    . . .
    ```
Player X's turn. Enter a number (from 1->9) (or 'u' to undo):
- Voer een getal in buiten de bordgrootte (bijvoorbeeld 10):
Invalid move. Try again.
