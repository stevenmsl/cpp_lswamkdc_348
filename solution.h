
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;
namespace sol348
{
    class TicTacToe
    {
    private:
        vector<int> rows, cols;
        int diag, rev_diag, N;

    public:
        TicTacToe(int n) : rows(n), cols(n), N(n), diag(0), rev_diag(0){};
        int move(int row, int col, int player);
    };
}
#endif