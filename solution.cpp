#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <queue>
using namespace sol348;
using namespace std;

/*takeaways
  - every time a player makes a move to (row,col)
    it will change the state of that particular
    row and col . If the move happens to be on
    the diagonal or reverse diagonal line it
    will change their state too
  - the key to achieve O(n) is to have a state
    for each row, col, diag, and reverse diag
    to record if any of the player have made
    enough moves to win
  - let's look at this example
    |X| |O|      | 1|  |-1|
    |O|O| |  ->  |-1|-1|  |
    |X|X|X|      | 1| 1| 1|
    - change X to 1, O to -1
    - row 1: (1) + (-1) = 0 , no one made enough moves
    - row 2: (-1) + (-1) = -2, it's a negative as they are from player 2
                               but still not made enoug moves to win
    - row 3: 1+1+1 = 3, enough moves (3=N), player 1 wins
*/

int TicTacToe::move(int row, int col, int player)
{
  auto count = player == 1 ? 1 : -1;
  /*only affect this row */
  rows[row] += count;
  /* and this col */
  cols[col] += count;
  /* check if it's on diag */
  if (row == col)
    diag += count;
  /* check if it's on reverse diag */
  if (row + col == N - 1)
    rev_diag += count;

  /* see if there are enough moves to win due to the addition
     of this move
  */
  return abs(rows[row]) == N || abs(cols[col]) == N || abs(diag) == N || abs(diag) == N
             ? player
             : 0;
  return 0;
}