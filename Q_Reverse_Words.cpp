#include <iostream>
#include <sstream>
using namespace std;

/*
                 Reverse Words

Given a string S. For each word in S, reverse its letters and print it.

Note: Words are separated by spaces.

Input:
Only one line contains a string S
(1 <= |S| <= 10^6)
where |S| is the length of the string and it consists of
lowercase and uppercase English letters and spaces.

Output:
Print the required answer.

Examples:
Input:
I love you

Output:
I evol uoy

Input:
You love me

Output:
uoY evol em

Input:
We are a happy family

Output:
eW era a yppah ylimaf
*/

int main()
{
    string s;
    getline(cin, s);

    bool inside_word = false;

    // stringstream can separate the words,
    // but it is not used here because we want to reverse
    // each word manually using its starting and ending indexes.

    // stringstream ss(s);

    // string word;
    // while (ss >> word)
    // {
    //     // cout << word << " ";
    // }

    int start_word = 0;
    int end_word = 0;

    // Traverse through the string character by character
    for (int i = 0; i < s.size(); i++)
    {
        // Check whether the current character is an English letter
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            // If we are entering a new word, save its starting index
            if (inside_word == false)
            {
                inside_word = true;
                start_word = i;
            }
        }
        else
        {
            // We reached a space, so the current word has ended
            inside_word = false;

            // The character before the space is the last character of the word
            end_word = i - 1;
        }

        // Start and end point to the current word
        int start = start_word;
        int end = end_word;

        // Reverse the current word manually
        // by swapping characters from both ends
        while (start < end)
        {
            int tmp = s[start];
            s[start] = s[end];
            s[end] = tmp;

            // Move both positions toward the middle
            start++;
            end--;
        }
    }

    // The last word does not have a space after it,
    // so it was not reversed inside the loop.
    int start = start_word;
    int end = s.size() - 1;

    // Reverse the last word manually
    while (start < end)
    {
        swap(s[start], s[end]);

        start++;
        end--;
    }

    cout << s << " ";

    return 0;
}
