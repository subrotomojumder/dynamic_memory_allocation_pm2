#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    // int a[5]; // static array tai return er por memory clear hoiye jabe. segmantation error error asbe
    int *a = new int[5]; // dynamic array tai return er por memory clear hobe na. func theke array return korbe.
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int *x = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}

