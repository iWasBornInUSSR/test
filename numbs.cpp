#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{   const int VECTOR_LENGHT = 10;
    vector <int> a;
    int b;
    for(int i = 0; i < VECTOR_LENGHT;i++)
    {
        b = rand() % 100 + 1;
        a.push_back(b);
    }
    if(!a.empty()){
    for(auto c : a)
    cout << c << " ";
    cout << endl;

    cout << "Sum of the pair:" << endl;
//    for(decltype(a.size()) i = 0, auto ; i < a.size() - 1; i++)
//    {
//        cout << a[i] + a[i + 1] << " ";
//    }
//    cout << endl;
    auto index = a.begin();
    while(index != a.end() - 1)
    {
        cout << *index + *(++index) << " ";
    }
    cout << endl;
    cout << "Sum of the pair:" << endl;
//    for(decltype(a.size()) i = 0; i < a.size() - 1; i++)
//    {
//        cout << a[i] + a[a.size() - 1 - i] << " ";
//    }
    index = a.begin();
    auto endindex = a.end() - 1;
    while(index - endindex != 1 && index != endindex)
    {
     cout << *index + *(endindex) << " ";
     endindex--;
     index++;
    }
    cout << endl;
    }
}
