#### Crpage_Project5
#SNACK SOLITAIRE

## Classes

### Cards
These are playing cards (shocker there). Cards have a value (the 
interger or card value), boolean face_card (says if it's a face card), boolean trump, says
if it's the trump value, and a suit. 


### Deck
This class contains a vector of cards.

### Snack
Snacks can be yummy, crunchy, sticky or messy. And they have a total_number. 
you can eat snacks and replenish them. 
Children classes all have different eat methods. 

### Dice
Dice can be rolled. when you initialize dice you can pick how many faces
it has and also a number of dice. this is how many dice of that value there are. 

Six sided dice have 6 sides.
You can tell it's a six sided dice because of the way it is.


##Game!! 

This game:

When you play the game, these are the options:
a) Eat A Snack
b) Replenish Snacks
c) Play Cards
d) Roll Dice

each one pretty much does what you'd think. 

## Terminal

TO RUN C++ PROJECTS IN TERMINAL

gcc -c MAIN.cpp file1.cpp file2.cpp … etc….(or whatever the name of the main file is)
Or g++
				returns error if can’t compile

g++ -o output.out MAIN.o file1.o file2.o … etc…  (whatever the name of the file is) — the one just created in the previous step

./output.out






