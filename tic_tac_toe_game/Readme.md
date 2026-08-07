# Tic Tac Toe – GTK3

A simple **Tic Tac Toe game** developed in **C using GTK3**. The game provides a graphical 3×3 board where two players can play against each other by taking turns as **X** and **O**.

## Features

* Graphical user interface using GTK3
* Two-player gameplay
* 3×3 Tic Tac Toe board
* Automatic winner detection
* Draw detection
* Displays the current player's turn
* Disables cells after they are selected
* Displays the winner when a player wins
* Reset button to start a new game
* Prevents players from selecting an already occupied cell

## Technologies Used

* **C**
* **GTK3**
* **GCC**
* **GLib**

## How the Game Works

The game starts with **Player X**.

1. Player X selects an empty cell.
2. The selected cell is marked with `X`.
3. The turn changes to Player O.
4. Player O selects an empty cell and places `O`.
5. Players continue taking turns.
6. The game checks the board after every move.
7. The game ends when:

   * X gets three marks in a row.
   * O gets three marks in a row.
   * All nine cells are filled without a winner, resulting in a draw.
8. Press **Reset** to start a new game.

## Winning Conditions

A player wins when their three marks are aligned:

* Horizontally
* Vertically
* Diagonally

For example:

```text
X | X | X
---------
O | O | 
---------
  |   |
```

Player **X** wins.

## Main Components

### Game Board

The board is represented using a 3×3 character array:

```c
static char board[3][3];
```

Each cell contains:

* `X` – Player X
* `O` – Player O
* `0` – Empty cell

### Player Tracking

The current player is tracked using:

```c
static int current_player = 1;
```

Where:

```text
 1  = X
-1  = O
```

After every valid move, the player is switched using:

```c
current_player = -current_player;
```

### Winner Detection

The `check_winner()` function checks:

* Three rows
* Three columns
* Two diagonals
* Draw condition

It returns:

```text
X → X wins
O → O wins
D → Draw
0 → Game continues
```

### Reset Function

The `on_reset_clicked()` function clears the board, enables all buttons, resets the move count, and sets the first turn back to X.

## GUI Structure

The interface consists of:

```text
+----------------------+
|       Turn: X        |
+----------------------+
|  [ ] [ ] [ ]         |
|  [ ] [ ] [ ]         |
|  [ ] [ ] [ ]         |
+----------------------+
|       [ Reset ]       |
+----------------------+
```

## Requirements

You need:

* GCC compiler
* GTK3 development libraries
* `pkg-config`

### Ubuntu/Debian

Install the required GTK3 development package:

```bash
sudo apt update
sudo apt install gcc libgtk-3-dev
```

## Compilation

Save the source code as:

```text
tic_tac_toe.c
```

Compile it with:

```bash
gcc tic_tac_toe.c -o tic_tac_toe `pkg-config --cflags --libs gtk+-3.0`
```

## Run

After compiling:

```bash
./tic_tac_toe
```

## Project Structure

```text
Tic-Tac-Toe-GTK3/
│
├── tic_tac_toe.c
└── README.md
```

## Limitations

* Only supports two human players
* No single-player mode
* No computer/AI opponent
* Game statistics are not saved
* No persistent storage
* No score tracking between games

## Future Improvements

Possible improvements include:

* Add a single-player mode
* Implement an AI opponent using Minimax
* Add player names
* Add score tracking
* Add difficulty levels
* Improve the GUI styling
* Add sound effects
* Add animations
* Save game statistics

## Purpose

This project was created to practice:

* C programming
* Arrays
* Functions
* Conditional logic
* Event-driven programming
* GTK3 GUI development
* Callback functions
* Basic game logic

## Author

**Javeria Zia**

BS Computer Science
Federal Urdu University of Arts, Science & Technology (FUUAST)
