#include <iostream>
#include <vector>
#include <fstream>
#include "display.h"
#include <string>
#include "main.h"

using std::cout;
using std::string;
using std::vector;

int main()
{
    // vector <int> data ={1,2,4};
    // int res=display (data);
    /* calling map file for testing */

    string key = "word";
    string def_1 = " hello from other world ";
    string def_2 = " I hope you are ok ";
    string def_3 = " Be strong Please and Every thing will be ok Insha'allah ";
    vector<string> data = {def_1, def_2, def_3};

    status res = map(key, data);

    switch (res)
    {
    case status::finished:
        cout << "Finished"
             << "\n";
        break;
    case status::pending:
        cout << "pending"
             << "\n";
        break;
    }
}