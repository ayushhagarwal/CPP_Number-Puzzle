#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

void generate(int arr[])
{
    srand(time(0));
    int c = -1;
    int check;

    while (c < 14)
    {
        check = 0;
        int a = rand();
        if (a % 16 == 0)
            continue;

        a = a % 16;

        for (int i = 0; i <= c; ++i)
        {
            if (arr[i] == a)
            {
                check = 1;
                break;
            }
        }
        if (check != 1)
        {
            arr[c + 1] = a;
            c++;
        }
    }
}

void matrix()
{
    int i, j, k = 0;
    ;
    int arr[16];
    int puzzle[4][4];
    generate(arr);
    arr[15] = 0;

    // Generating an array of unique random numbers from 1 to 15
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j)
            puzzle[i][j] = arr[k++];

    // Printing the Array
    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 4; ++j)
            cout << puzzle[i][j] << "   ";
        cout << endl;
    }
}
int main()
{
    matrix();
    return 0;
}