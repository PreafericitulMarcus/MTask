#include <ctime>
#include <string>

using std::hash;
using std::string;

int createId(string name, time_t time)
{
    size_t h1 = hash<string>{}(name);
    size_t h2 = hash<time_t>{}(time);
    return h1 ^ (h2 << 1);
}
