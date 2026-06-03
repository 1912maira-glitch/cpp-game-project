# Hangman Game 

## Overview

Hangman is a classic word-guessing game developed in C++. The player must guess the letters of a hidden month name before running out of lives. The game randomly selects one of the twelve months of the year and displays it as hidden characters. Each incorrect guess reduces the player's remaining lives.

## Features

* Random selection of a month name.
* Interactive letter-by-letter guessing.
* Visual Hangman ASCII art display.
* Three lives for the player.
* Win and lose conditions.
* Console-based user interface.
* Input validation to prevent repeated guesses.

## Technologies Used

* C++
* Standard Library

  * iostream
  * ctime
* Random number generation using `rand()` and `srand()`

## How to Play

1. Run the program.
2. A month name is randomly selected and hidden.
3. Enter a letter to guess.
4. If the letter exists in the month name, it is revealed.
5. If the letter is incorrect, one life is lost.
6. Continue guessing until:

   * You reveal the complete month name (Win), or
   * All three lives are exhausted (Lose).

## Game Rules

* The player starts with 3 lives.
* Correct guesses reveal matching letters.
* Incorrect guesses reduce the remaining lives.
* Repeated guesses do not count as correct attempts.
* The game ends when the word is completely guessed or all lives are lost.

## Program Structure

### Functions

#### `checkGuess()`

Checks whether the guessed letter exists in the hidden word and updates the display accordingly.

#### `hang_man()`

Displays the Hangman ASCII art and game status messages.

#### `main()`

Controls the overall game flow, random word selection, user input, and game results.

## Sample Output

Life: 3

XXXXXX

Guess a letter: a

Nice! Correct Guess

XAAXXX

Guess a letter: z

Incorrect Letter!

Life: 2

## Learning Concepts

This project demonstrates:

* Functions
* Arrays
* Strings
* Loops
* Conditional Statements
* Random Number Generation
* ASCII Art
* Basic Game Development in C++

## Author

Developed in C++ as a console-based programming project for learning game development and core programming concepts.
