#include <bits/stdc++.h>
using namespace std;

int main()
{
    string plaintext;
    int depth;
    cin >> depth >> plaintext;
    cout << depth << " - " << plaintext << endl;
    int len = plaintext.size();

    char table[depth + 1][len + 1] = {0};
    int row = 1, col = 1;
    int up = 0, down = 1;
    table[row][col] = plaintext[0];

    for (int j = 1; j <= len; j++)
    {
        if(row==depth) { // 3 3
            down = 0;
            up = 1;
        }
        if(row==1) {
            down = 1;
            up = 0;
        }

        if (down) // 1 2 3 4
        {
            row++;
        }
        if(up) {
            row--;
        }

        col++;
        table[row][col] = plaintext[j];
        //cout << row << " -  " << col << endl;
    }

    for(int i=1; i<=depth; i++) {
        for(int j=1; j<=len; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
