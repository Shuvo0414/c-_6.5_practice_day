#include <iostream>
#include <cctype>
using namespace std;

/*
                     Count Words

Given a string 𝑆. Print number of words in it.
Word : consists of lowercase and uppercase English letters.

Input
Only one line contains 𝑆 (1≤|S|≤10^6) where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces and ('!', '.', '?' and ',') symbols.

Output:
Print the number of words in the given string.

Examples-->
Input:
Meep Meep!
Output:
2


Input:
I tot I taw a putty tat.
Output:
7

Input:
I did! I did! I did taw a putty tat.
Output:
10

Input:
Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...
Output:
9
*/

int main()
{
    string S;
    getline(cin, S);

    // 'cnt' stores the total number of words found in the string.
    int cnt = 0;

    // This tells us whether we are currently inside a word.
    // false = we are not inside a word.
    // true = we are currently inside a word.
    bool inside_word = false;

    // Traverse the string one character at a time.
    // for (char c : S)
    // {
    //     // Check whether the current character is an uppercase
    //     // or lowercase English letter.
    //     if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    //     {
    //         // If we are not already inside a word,
    //         // this character is the first letter of a new word.
    //         if (inside_word == false)
    //         {
    //             // Count the new word.
    //             cnt++;

    //             // Mark that we are now inside a word.
    //             inside_word = true;
    //         }
    //     }
    //     else
    //     {
    //         // If the current character is not a letter,
    //         // the current word has ended.
    //         inside_word = false;
    //     }
    // }

    for (char c : S)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
            {
                cnt++;
                inside_word = true;
            }
        }
        else
        {
            inside_word = false;
        }
    }

    cout << cnt;

    return 0;
}
