/* Source file for map file using Standard Library */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

enum class status
{
 finished,
 pending
};
using std::vector;
using std::string;
using std::unordered_map;
using std::cout;

status  map (string key , vector<string> value )
{
    unordered_map <string,vector<string>> dict;
    if (dict.find(key) == dict.end())
    {
        /* insert the key and its value */
        dict[key]= value;
    }
for (string line :dict[key])
    {
        cout<< line<< "\n";
    }   
    return status::finished;
}
