#include <iostream>
#include <sstream>
using namespace std;

/*
                 Replace Word.

Given a string 𝑆. Print 𝑆 after replacing every sub-string that is equal to "EGYPT" with space.

Input:
Only one line contains a string 𝑆 (1≤|𝑆|≤10^3) where |S| is the length of the string and it consists of only uppercase English letters.

Output:
Print the result as required above.

Examples-->
Input:
BRITISHEGYPTGHANA
Output:
BRITISH GHANA

Input:
ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
Output:
ITALYKOREA  ALGERIA Z
*/

int main()
{

    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (S.find("EGYPT", i) == i)
        {
            S.replace(i, 5, " ");
        }
    }

    cout << S;

    return 0;
}