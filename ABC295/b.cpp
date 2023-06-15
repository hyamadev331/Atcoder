#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<char>> board(r, vector<char>(c));
    bool bomb[50][50] = {false};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> board[i][j];
        }
    }

    vector<pair<int, int>> dirs{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // 上下左右の移動方向

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (board[i][j] >= '1' && board[i][j] <= '9')
            { // 爆弾があるマスの場合
                int power = board[i][j] - '0';
                bomb[i][j] = true;
                for (int k = 0; k < r; k++)
                {
                    for (int l = 0; l < c; l++)
                    {
                        int diff = abs(i - k) + abs(j - l);
                        if (diff <= power)
                        {
                            bomb[k][l] = true;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (bomb[i][j])
            {
                cout << '.';
            }
            else
            {
                cout << board[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}
