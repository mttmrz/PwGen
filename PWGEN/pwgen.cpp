#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    srand((unsigned) time(NULL));
    int random = 0;
    random = rand() % 165;
    string cosa;
    string option;
    int size;
    int op;
    string WordsNumbersSc = "AaBbCcDdEeFfGgHhIiLlMmNnOoPpQqRrSsTtUuVvZzXxJjYyKkWw0123456789_*!@#$%&^";
    string WordsAndNumbers = "AaBbCcDdEeFfGgHhIiLlMmNnOoPpQqRrSsTtUuVvZzXxJjYyKkWw0123456789";
    string Words = "AaBbCcDdEeFfGgHhIiLlMmNnOoPpQqRrSsTtUuVvZzXxJjYyKkWw";
    string Numbers = "0123456789";

    cout << "Choose your password type \n[1] - Alphabetical -\n[2] - Alphanumerical -\n[3] - Alphanumerical W special characters - \n[4] - Numerical -\n";
    getline(cin, option);
    if (option.find("1") != 0 && option.find("2") != 0 && option.find("3") != 0 && option.find("4") != 0)
    { 
        cout << "Wrong input\n";
        return (0);
    }
    op = atoi(option.c_str());
    cout << "Type how long you want your Pw to be\n";
    getline(cin, cosa);
    size = atoi(cosa.c_str());
    if (size <= 0)
    {
        cout << "Wrong input\n";
        return (0);
    }
    char Pw[size];
    if (op == 1)
    {
        for (int i = 0; i < size - 1; i++)
        {
            random = rand() % 52;
            Pw[i] = Words[random];
        }
    }
    else if (op == 2)
    {
        for (int i = 0; i < size - 1; i++)
        {
            random = rand() % 62;
            Pw[i] = WordsAndNumbers[random];
        }
    }  
    else if (op == 3)
    {
        for (int i = 0; i < size - 1; i++)
        {
            random = rand() % 71;
            Pw[i] = WordsNumbersSc[random]; 
        }
    }
    else if (op == 4)
    {
        for (int i = 0; i < size - 1; i++)
        {
            random = rand() % 10;
            Pw[i] = Numbers[random]; 
        }
    }
    cout << Pw << endl;
}