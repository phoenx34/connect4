enum class Direction {
  vert;
  horiz;
  l_diag;
  r_diag;
};

class connect4_logic;
class board{
private:
  std::vector<std::vector<char>> b_state;
  void init_board();
  bool search_winner(connect4_logic& logic, Direction dir, board& c_board, char piece);

public:
  board();
  static const int ROWS = 9;
  static const int COLS = 9;
  static const char x = 'X';
  static const char o = 'O';
  static const char EMPTY = ' ';

  char get_pos(int row, int col) const {
    return b_state[row][col];
  }

  bool valid(const int row, const int col) const;
  void print_board();
  void reset_board();
  bool find_win(connect4_logic& logic, board& c_board, char piece);
};
