#include<iostream>
#include"try1.h"
#include<vector>
using namespace std;
int main()
{
//    vector <string> a;
//    string b;
//    const vector<int>::size_type NUM_IN_STRING = 4;
//    cout << "Enter the string:" << endl;
//    while(cin >> b)
//    {
//        cout << "Enter the string:" << endl;
//        a.push_back(b);
//    }
//    for(string &c : a)
//    {
//    if(!c.empty())
//    {
//    for(char &d : c)
//    {
//    if(isalpha(d))
//    d = toupper(d);
//    }
//    }
//    }
//   // vector<int>::size_type c;
//    decltype(a.size()) i = 0;
//    for(auto c : a)
//    {
//        if(i < NUM_IN_STRING)
//        {
//            cout << c + " ";
//            i++;
//        }
//        else
//        {
//            i = 0;
//            cout << endl;
//        }
//    }
// vasya
        int arr[10];
        for(int i = 0; i < 10; i++)
            arr[i] = i;
        int arr2[20];
        for(int i = 0; i < 10; i++)
            arr2[i] = arr[i];
        for(int i = 10; i < 20; i++)
            arr2[i] = i;

        for(auto r : arr)
        cout << r << " ";
        cout << endl;

        for(auto r : arr2)
        cout << r << " ";
        cout << endl;
        vector<int> a(10,1) , b (20,1);
        for(auto r : a)
        cout << r << " ";
        cout << endl;

        for(auto r : b)
        cout << r << " ";
        cout << endl;
    return 0;
}
