#include <iostream>

using namespace std;

int fibonacci(int intValue);
string makePalindrome(string strWord);

int main()
{
    bool boolContinue = true;

    do
    {
        char chOption;

        cout << "Option A: Fibonacci Numbers" << endl
             << "Option B: Sum of Fibonacci" << endl
             << "Option C: Palindrome" << endl
             << "Option X: Quit" << endl;
        cin >> chOption;

        switch (chOption)
        {
            case 'a':
            case 'A':
            {
                int intValue;
                int intNumInSequence;

                cout << "OPTION A" << endl;

                cout << "What is your initial value?";
                cin >> intValue;

                cout << endl;

                cout << "How many values do you want in your sequence?";
                cin >> intNumInSequence;

                int intSequence[intNumInSequence];

                for(int i = 0; i < intNumInSequence; i++)
                {
                    intSequence[i] = fibonacci(i + intValue);
                }

                cout << "Here is your sequence:" << endl;

                for(int i = 0; i < intNumInSequence; i++)
                {
                    cout << intSequence[i] << ", ";
                }
                cout << endl;
                break;
            }

            case 'b':
            case 'B':
            {
                int intValue;
                int intNumInSequence;

                cout << "OPTION B" << endl;

                cout << "What is your initial value?";
                cin >> intValue;

                cout << endl;

                cout << "How many values do you want in your sequence?";
                cin >> intNumInSequence;

                int intSequence[intNumInSequence];
                int intTotal;

                for(int i = 0; i < intNumInSequence; i++)
                {
                    intSequence[i] = fibonacci(i + intValue);
                }

                for(int i = 0; i < intNumInSequence; i++)
                {
                    intTotal += intSequence[i];
                }

                cout << "The total of your fibonacci is: " << intTotal << endl;

                intTotal = 0;
                break;
            }

            case 'c':
            case 'C':
            {
                cout << "OPTION C" << endl;

                string strWord;

                cout << "Enter a word in small letter case: ";
                cin >> strWord;

                string strReverse = makePalindrome(strWord);

                cout << "Here is your palindrome: " << strReverse << endl;

                cout << endl;
                break;
            }

            case 'x':
            case 'X':
            {
                cout << "OPTION X" << endl;
                cout << "Thank you for playing!" << endl;
                boolContinue = false;
                break;
            }

            default:
            {
                cerr << "Invalid option. Please try again ..." << endl;

                cout << endl;
            }

        }

    }while(boolContinue);

    return 0;
}

int fibonacci(int intValue)
{
    if(intValue < 2)
    {
        return intValue;
    }else
    {
        return fibonacci(intValue - 1) + fibonacci(intValue - 2);
    }
}

string makePalindrome(string strWord)
{
    string strResult = strWord;

    for(char c : string(strResult.rbegin(), strResult.rend()))
    {
        strResult += c;
    }

    return strResult;
}
