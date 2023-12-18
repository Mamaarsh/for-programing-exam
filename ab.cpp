#include <iostream>

using namespace std;

int main()
{
    char a;
    int count = 0;
    cout << "enter Sentences(for end enter(.)): ";
    for(;a!='.';)
    {
        cin >> a;
        if(a!='.')
        {
            count++;
        }
    }

    cout << endl << "Number of letters: " << count;

    return 0;
}