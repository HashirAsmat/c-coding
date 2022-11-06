#include <iostream>
using namespace std;

class MyObjects
{
public:
    string color;
    string name;
    int height;
    bool identity;
};

int main()
{
    cout << "please enter total number of objects";
    int totalObjects = 0;
    cin >> totalObjects;
    MyObjects objArray[totalObjects];
    MyObjects *objectPtr[totalObjects];

    for (int i = 0; i < totalObjects; i++)
    {
        MyObjects objArray[i];
        objectPtr[i] = &objArray[i];
    };

    for (int i = 0; i < totalObjects; i++)
    {
        cout << "enter Attributes vale for Object " << i << endl;

        cout << "color" << endl;
        cin >> objArray[i].color;
        cout << "color is: " << objectPtr[i]->color;
        // cout << "height" << endl;
        // cin >> objectPtr[i]->height;
        // cout << "identity" << endl;
        // cin >> objectPtr[i]->identity;
        // cout << "name" << endl;
        // cin >> objectPtr[i]->name;

        // cout << "Now The vales entered are" << endl;
        // cout << "color: " << objectPtr[i]->color;
        // cout << "height: " << objectPtr[i]->height;
        // cout << "identity: " << objectPtr[i]->identity;
        // cout << "name: " << objectPtr[i]->name;
    };

    return 0;
}