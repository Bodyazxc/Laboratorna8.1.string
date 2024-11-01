#include <iostream>
#include <string>
using namespace std;

int Count(const string& s)
{
    int k = 0;
    for (char c : s)
    {
        if (c == '+' || c == '-' || c == '=')
            k++;
    }
    return k;
}

string Change(string& s)
{
    for (char& c : s)
    {
        if (c == '+' || c == '-' || c == '=')
            c = '*';
    }

    size_t pos = 0;
    while ((pos = s.find('*', pos)) != string::npos)
    {
        s.insert(pos, "*");
        pos += 2; 
    }
    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "Total occurrences of '+', '-', '=': " << Count(str) << endl;

    string dest = Change(str);
    cout << "Modified string: " << dest << endl;

    return 0;
}
