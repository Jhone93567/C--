#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // 3 strangs, palavra 1 2 e 3
    char p1[100];
    char p2[100];
    char p3[100];

    cin.getline(p1,100);
    cin.getline(p2,100);
    cin.getline(p3,100);

    if (strcmp(p1,p2) == -1 && strcmp(p2,p3) == -1 && strcmp(p1,p3) == -1)
    {
        cout << p1 << " " << p2 << " " << p3 << endl;
    }
    else if (strcmp(p1,p2) == -1 && strcmp(p2,p3) == +1 && strcmp(p1,p3) == -1)
    {
        cout << p1 << " " << p3 << " " << p2 << endl;
    }
    else if (strcmp(p1,p2) == +1 && strcmp(p2,p3) == -1 && strcmp(p1,p3) == -1)
    {
        cout << p2 << " " << p1 << " " << p3 << endl;
    }
    else if (strcmp(p1,p2) == +1 && strcmp(p2,p3) == -1 && strcmp(p1,p3) == +1)
    {
        cout << p2 << " " << p3 << " " << p1 << endl;
    }
    else if (strcmp(p1,p2) == -1 && strcmp(p2,p3) == +1 && strcmp(p1,p3) == +1)
    {
        cout << p3 << " " << p1 << " " << p2 << endl;
    }
    else if (strcmp(p1,p2) == +1 && strcmp(p2,p3) == +1 && strcmp(p1,p3) == +1)
    {
        cout << p3 << " " << p2 << " " << p1 << endl;
    }
    
    return 0;
}