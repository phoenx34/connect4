#include "stdafx.h"
#include "board.h"
#include "connect4_logic.h"

board::board()
{
  init_board();
}

void board::init_board()
{
  std::vector<char> rows(ROWS, EMPTY);
  b_state = std::vector<std::vector<char>>(COLS, rows);
}

void board::print_board()
{

}

bool board::valid(const int row, const int col) const
{
  return false;
}
bool board::search_winner(connect4_logic& logic, Direction dir, board& c_board, char piece)
{
  return false;
}

bool board::find_win(connect4_logic& logic, board& c_board, char piece)
{
  return false;
}

void board::reset_board()
{

}
