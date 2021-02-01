#include <iostream>
#include <string>
#include <vector>

#include "SocialProfileReader.hpp"

using namespace std;

int main()
{
    vector<string> message { "Hello", "CFood", "from", "DW", "!"};

    for(const string& word : message)
    {
        cout << word << " ";
    }
    cout << endl;

    SocialProfileReader spr;
    SocialProfile sp = spr.readFile("../src/social.txt");
    cout << sp.id << " , " << sp.url << endl;
}