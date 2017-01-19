// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "player.h"
#include "player_human.h"
#include "player_comp.h"
#include "connect4_logic.h"
#include "board.h"
#include "turn.h"

#include <iostream>
#include <ctime>

bool vs_comp()
{
    char choice = ' ';
    bool decided = false;
    while (!decided)
    {
        std::cout << "Would you like to play against a computer? (Y/n) ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'n') {
            decided = true;
        } else {
          std::cout << "Input could not be understood. Expected 'y' or 'n'. Exitting... "
        }
    }

    if (choice == 'y') {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
  srand(time(NULL));
  connect4_logic logic;
  board b_state;
  turn cur_turn;

  player* p1 = new player_human;
  player* p2 = nullptr;

  std::cout << "Welcome to Connect Four!" << endl;
  bool h_vs_cpu = vs_comp();

  if(!h_vs_cpu)
  {
    p2 = new player_comp;
  } else {
    std::cout << "Human vs Human feature not implemented. Sorry! Exitting... "
    return -1;
  }

  logic.game_begin(logic, b_state, turn, *p1, *p2);

  return 0;
}
