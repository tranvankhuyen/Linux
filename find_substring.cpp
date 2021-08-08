#include <iostream>
#include <string.h>
using std::string;
int Substring(string &a, string &b)
{
    int M = a.length();
    int N = b.length();
    int Count = 0;
    for (int i = 0; i <= M - N; i++)
    {
        // Increase i, j value. 
        int j;
        for (j = 0; j < N; j++)
        {
            // If a[i+j] != b[j], don't increase j value, continue increase i value.... 
            if (a[i + j] != b[j])
            {
                break;
            }
        }
        // Else, continue increase i and j value until j = N --> increase Count.
        if (j == N)
        {
            Count++;
            j = 0;
        }
    }
    return Count;
}
int main()
{
    string a = "abc abcd";
    string b = "ab";
    std::cout << Substring(a, b);
    return 0;
}