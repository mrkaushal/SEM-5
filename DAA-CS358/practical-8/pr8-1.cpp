/* Suppose you are given a source string S [0 ..n − 1] of length n,
consisting of symbols a and b. Suppose that you are given a pattern
string P[0 ..m − 1] of length m < n, consisting of symbols a, b, and *,
representing a pattern to be found in string S. The symbol * is a “wild
card” symbol, which matches a single symbol, either a or b. The other
symbols must match exactly. The problem is to output a sorted list M of
valid “match positions”, which are positions j in S such that pattern P
matches the substring S [j..j + |P|− 1]. For example, if S = ababbab and
P = ab*, then the output M should be [0, 2]. Implement a
straightforward, naive algorithm to solve the problem. */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string S, P;
    vector<int> M;
    cout << "Enter the source string: ";
    cin >> S;
    cout << "Enter the pattern string: ";
    cin >> P;
    for (int i = 0; i < S.length(); i++)
    {
        int j = 0;
        while (j < P.length() && (S[i + j] == P[j] || P[j] == '*'))
            j++;
        if (j == P.length())
            M.push_back(i);
    }
    sort(M.begin(), M.end());
    cout << "The match positions are: ";
    for (int i = 0; i < M.size(); i++)
        cout << M[i] << " ";
    cout << endl;
    return 0;
}

/* Output:
Enter the source string: ababbab
Enter the pattern string: ab*
The match positions are: 0 2
*/  
