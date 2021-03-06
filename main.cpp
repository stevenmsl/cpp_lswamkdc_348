#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol348;

/*
Given n = 3, assume that player 1 is "X" and player 2 is "O" in the board.

TicTacToe toe = new TicTacToe(3);

toe.move(0, 0, 1); -> Returns 0 (no one wins)
|X| | |
| | | |    // Player 1 makes a move at (0, 0).
| | | |

toe.move(0, 2, 2); -> Returns 0 (no one wins)
|X| |O|
| | | |    // Player 2 makes a move at (0, 2).
| | | |

toe.move(2, 2, 1); -> Returns 0 (no one wins)
|X| |O|
| | | |    // Player 1 makes a move at (2, 2).
| | |X|

toe.move(1, 1, 2); -> Returns 0 (no one wins)
|X| |O|
| |O| |    // Player 2 makes a move at (1, 1).
| | |X|

toe.move(2, 0, 1); -> Returns 0 (no one wins)
|X| |O|
| |O| |    // Player 1 makes a move at (2, 0).
|X| |X|

toe.move(1, 0, 2); -> Returns 0 (no one wins)
|X| |O|
|O|O| |    // Player 2 makes a move at (1, 0).
|X| |X|

toe.move(2, 1, 1); -> Returns 1 (player 1 wins)
|X| |O|
|O|O| |    // Player 1 makes a move at (2, 1).
|X|X|X|
*/

tuple<int> testFixture1()
{
  return make_tuple(3);
}

void test1()
{
  auto f = testFixture1();
  TicTacToe sol(get<0>(f));
  cout << "move(0, 0, 1); -> Returns 0 (no one wins)" << endl;
  cout << to_string(sol.move(0, 0, 1)) << endl;
  cout << "move(0, 2, 2); -> Returns 0 (no one wins)" << endl;
  cout << to_string(sol.move(0, 2, 2)) << endl;
  cout << "move(2, 2, 1); -> Returns 0 (no one wins)" << endl;
  cout << to_string(sol.move(2, 2, 1)) << endl;
  cout << "move(1, 1, 2); -> Returns 0 (no one wins)" << endl;
  cout << to_string(sol.move(1, 1, 2)) << endl;
  cout << "move(2, 0, 1); -> Returns 0 (no one wins)" << endl;
  cout << to_string(sol.move(2, 0, 1)) << endl;
  cout << "move(1, 0, 2); -> Returns 0 (no one wins)" << endl;
  cout << to_string(sol.move(1, 0, 2)) << endl;
  cout << "move(2, 1, 1); -> Returns 1 (player 1 wins)" << endl;
  cout << to_string(sol.move(2, 1, 1)) << endl;
}

main()
{
  test1();
  return 0;
}