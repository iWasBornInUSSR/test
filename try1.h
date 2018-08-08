#ifndef SALESDATA_H
#define SALESDATA_H
#include<string>
struct salesData
{
    std::string bookNum;
    unsigned unitSold = 0;
    double revenue = 0.0;
};
#endif
