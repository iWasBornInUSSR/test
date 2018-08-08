#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector <int> a;
    string buf;
    int b, numb = 0;
    cout << "Enter the number:" << endl;
    while(cin >> b)
    {
        a.push_back(b);
    }
    if(!a.empty()){
    for(auto c : a)
    cout << c << " ";
    cout << endl;
    }
    cout << "Enter the number to search:" << endl;
    cin >> numb;
    cout << numb << endl;
    auto beg = a.begin(), endn = a.end();
    auto mid = a.begin() + (endn - beg)/2;
    while(mid != endn && *mid != numb)
    {
        if(numb < *mid)
        endn = mid;
        else
        beg = mid + 1;
        mid = beg + (endn - beg)/2;
    }
    if(*mid == numb)
    cout << "The number is in the range" << endl;
    else
    cout << "The number isn't in the range" << endl;
    return 0;

}
