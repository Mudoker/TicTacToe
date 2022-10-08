# Background
This is a simple project that mimic a simplified version of the well-known TicTacToe game using C++. This program mainly uses basic C+ programming techniques with a terminal-based interface.

## Game's Screenshot
  ![image](https://user-images.githubusercontent.com/95454901/194686898-b51367e9-f054-4eed-b6f6-4a3d0f712a17.png)
  (Game menu)
  
  ![image](https://user-images.githubusercontent.com/95454901/194686933-8d52ffdc-04de-48cd-99f1-849ca5ce24dd.png)
  (Game interface with Winner)

## How to use
  1. Since this game runs with terminal, all inputs will be takin from the keyboard in this version. Therefore, in order to assign 'X' or 'O' on the Game Table, we need to enter its position as prompt in zero-based.
  2. Winner will be the one with three consecutive marks in either diagonal line or vertical/horizontal.
  3. When there is no valid move left:
    a. Position is invalid or has already been taken: The program will automatically prompt for another choice of position.
    
    b. The program runs out of moves (9 moves in total possible): The program will exit and the two player will draw.
## Weakness and Enhancement

- Since this is a simplified version, hence, it only supports a 3x3 flat surface or 9 moves in total. To enhance this, a 3x3 surface can be inplemented as a 100x100 surface or larger to reduce the probabily that the two player will draw and also increase number of moves.  

- Some people may find it hard to deal with terminal-based program or zero-based. This phenomenon can be fixed by creating a proper UI with fully instructions and let users to input the choice through the mouse cursor.

## Created by Mudoker
