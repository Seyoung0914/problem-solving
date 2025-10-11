#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int i = 0;
    char input[101] = {0};

    // while (input[i] != '\n')
    // {
    //     cin >> input[i];
    //     i++;
    //     cout << input << endl;
    // }

    fgets(input, 101, stdin);

    input[strlen(input) - 1] = 0;

    int len = strlen(input);

    for (int i = 0; i < len; i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
            input[i] += 32;

        else if (input[i] >= 'a' && input[i] <= 'z')
            input[i] -= 32;
    }

    cout << input << endl;

    return 0;
}