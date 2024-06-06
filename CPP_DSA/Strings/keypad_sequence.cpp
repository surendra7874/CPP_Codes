#include <bits/stdc++.h>

using namespace std;

string printSequence(string arr[], string input)
{
    string output = "";

    for(int i=0; i<input.size(); i++)
    {
        if(input[i] == ' ')
        {
            output = output + '0';
        }
        else{
            int val = input[i] - 'A';
            output = output + arr[val];
        }
    }
    return output;
}

int main()
{
    // storing the sequence in array
    // string str[]
    //     = { "2"/*a*/,   "22"/*b*/,  "222"/*c*/, "3"/*d*/,   "33"/*e*/,   "333"/*f*/, "4"/*g*/,
    //         "44"/*h*/,  "444"/*i*/, "5"/*j*/,   "55"/*k*/,  "555"/*l*/,  "6"/*m*/,   "66"/*n*/,
    //         "666"/*o*/, "7"/*p*/,   "77"/*q*/,  "777"/*r*/, "7777"/*s*/, "8"/*t*/,   "88"/*u*/,
    //         "888"/*v*/, "9"/*w*/,   "99"/*x*/,  "999"/*y*/, "9999"/*z*/ };

    string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
 
    string input = "SURIUSHA";
    cout << printSequence(str, input);
    return 0;
}