#include <bits/stdc++.h>
using namespace std;

// static variable
// int *p;
// void fun(){
//     int x = 20;
//     p = &x;
//     cout << "In to Fun --> " << *p << endl;
//     return;
// }
// int main()
// {
//     int x = 10;
//     // int *p = new int;
//     // *p = 40;
//     // cout << *p << endl;

//     fun();
//     cout << "In to Main --> " << *p << endl; // static var er value autometic delete hoi
//     return 0;
// }
// dynamic variable

int *p;
void fun()
{
    int *x = new int;
    *x = 10;
    p = x;
    cout << "In to Fun --> " << *p << endl; 
    return;
}
int main()
{
    int x = 10;
    // int *p = new int;
    // *p = 40;
    // cout << *p << endl;
    fun();
    cout << "In to Main --> " << *p << endl; // dynamic var er value autometic delete hoina
    return 0;
}