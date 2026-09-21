#include <iostream>
using namespace std;

/*
                 A. Lucky?

A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

Input:
The first line of the input contains an integer 𝑡 (1≤𝑡≤10^3
) — the number of testcases.

The description of each test consists of one line containing one string consisting of six digits.

Output :
Output 𝑡 lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example-->
Input:
5
213132
973894
045207
000000
055776

Output:
YES
NO
YES
YES
NO

Note --->
In the first test case, the sum of the first three digits is 2+1+3=6 and the sum of the last three digits is 1+3+2=6, they are equal so the answer is "YES".

In the second test case, the sum of the first three digits is 9+7+3=19 and the sum of the last three digits is 8+9+4=21, they are not equal so the answer is "NO".

In the third test case, the sum of the first three digits is 0+4+5=9 and the sum of the last three digits is 2+0+7=9, they are equal so the answer is "YES".

*/

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case > 0)
    {
        string s;
        cin >> s;

        int sum_of_firs_three_digit = 0;
        int sum_of_last_three_digit = 0;

        for (int i = 0; i < s.size(); i++)
        {
            // cout << s[i] << endl;

            // The first half contains the first three digits.
            if (i < s.size() / 2)
            {
                // Convert the character digit into an integer digit and add it to the first sum.
                sum_of_firs_three_digit = s[i] - '0' + sum_of_firs_three_digit;
            }
            else
            {
                // Convert the character digit into an integer digit and add it to the last sum.
                sum_of_last_three_digit = s[i] - '0' + sum_of_last_three_digit;
            }
        }

        // If both sums are equal, the ticket is lucky.
        if (sum_of_firs_three_digit == sum_of_last_three_digit)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // Move to the next test case.
        test_case--;
    }

    return 0;
}