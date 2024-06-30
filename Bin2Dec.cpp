#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>
#include <string>
#include <iostream>
using namespace std;

bool running = true;

int bin2Dec(string input)
{
    int result = 0;
    for (int i = input.length() - 1; i >= 0; i--)
    {
        if (input[i] != '0' && input[i] != '1')
        {
            cout << "Invalid input! \n";
            return 300;
        }
        if (input[i] == '1')
        {
            result += (int)pow(2, input.length() - 1 - i);
        }
    }
    return result;
}

int main()
{
    cout << "Welcome to Bin2Dec program \n";
    while (running)
    {
        string input;
        cout << "Please input: ";
        cin >> input;
        int result = bin2Dec(input);
        if (result <= 256)
        { 
            cout << result;
            running = false;
        }
    }

    return 0;
}