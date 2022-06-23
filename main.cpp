/*      Writted by Ahsan Rao
 */

#include <iostream>
using namespace std;
int main()
{
    char alphabet;

Main:
    cout << "\nEnter an Alpabet to Print on Screen: ";
    cin >> alphabet;
    switch (alphabet)
    {
    case '0':
        return 0;
        break;
    case 'A':
    case 'a':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 2 || j == 0 || j == 4)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }

        break;
    case 'B':
    case 'b':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 4 || j == 0 || j == 4 || i == 2)
                {
                    if (i != j)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'C':
    case 'c':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 4 || j == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'D':
    case 'd':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 4 || j == 0 || j == 4)
                {
                    if (!(i == j))
                        cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'E':
    case 'e':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 4 || j == 0 || i == 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'F':
    case 'f':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 2 || j == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'G':
    case 'g':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 4 || j == 0 || i == 2 && j >= 2 || j == 4 && i >= 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'H':
    case 'h':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 2 || j == 4 || j == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'I':
    case 'i':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (j == 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'J':
    case 'j':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (j == 4 || i == 4 || j == 0 && i >= 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'K':
    case 'k':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (j == 0 || j == 4 - i && i <= 2 || i == j && i >= 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'L':
    case 'l':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 4 || j == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'M':
    case 'm':
        for (int i = 0; i < 7; i = i + 1)
        {

            for (int j = 0; j < 7; j = j + 1)
            {

                if (i == j && i <= 3 || j == 6 - i && i <= 3 || j == 0 || j == 6)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'N':
    case 'n':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == j || j == 4 || j == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'O':
    case 'o':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if ((i == 0 || i == 4 || j == 0 || j == 4) && i != j)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'P':
    case 'p':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 2 || j == 0 || j == 4 && i <= 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'Q':
    case 'q':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 && j != 4 || i == 3 && j != 4 || j == 0 && i != 4 || j == 3 && i != 4 || i == 4 && j == 4)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'R':
    case 'r':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 2 || j == 0 || j == 4 && i <= 2 || i == j && i >= 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'S':
    case 's':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 4 || j == 0 && i <= 2 || i == 2 || j == 4 && i >= 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'T':
    case 't':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || j == 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'U':
    case 'u':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (j == 4 || i == 4 || j == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'V':
    case 'v':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == j && j <= 2 || j == 4 - i && j >= 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'W':
    case 'w':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (j == 0 || j == 4 || j == i && j >= 2 || j == 4 - i && j <= 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'X':
    case 'x':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == j || j == 4 - i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'Y':
    case 'y':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (j == 0 && i <= 2 || i == 2 || j == 4)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    case 'Z':
    case 'z':
        for (int i = 0; i < 5; i = i + 1)
        {

            for (int j = 0; j < 5; j = j + 1)
            {

                if (i == 0 || i == 4 || j == 4 - i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }
        break;
    default:
        cout << "\nError! Invalid Input\n\tPress 0 to Exit.\n";
        break;
    }
    goto Main;
    return 0;
}