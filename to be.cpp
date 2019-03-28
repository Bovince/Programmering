#include <iostream>
#include <string>
using namespace std;
int main (int argc, char *argv[])
{
    int i = 1;
    string url =  "https://www.google.com/search?q=";

    for (; i < argc; i++) {
        url = url + string(argv[i]);
        if (i != argc-1) url = url + string("+");
    }

    cout << url << endl;
    string op = string("open ").append(url);
    system(op.c_str());
    return 0;
}
