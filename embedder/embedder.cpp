#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    cout << "#include <string>" << endl;
    cout << "#include <fmemopen/libfmemopen.h>" << endl;

    cout << "FILE* embeddedFOpen(std::string const& name)" << endl;
    cout << "{" << endl;

    std::ifstream file("assets_paths.txt");
    std::string str; 
    
    while (std::getline(file, str))
    {
        //cout << str << endl;


        cout << "if (name == \"" << str << "\") {" << endl;

        string file = str.substr(str.find_last_of("/") + 1);

        cout << "#include \"" << file << ".c\"" << endl;

        str.replace(str.find("./"), sizeof("./") - 1, "");

        replace(str.begin(), str.end(), '/', '_');

        replace(str.begin(), str.end(), '.', '_');

        //cout << str << endl;
        cout << "return fmemopen(" << str << ", " << str << "_len, \"r\");" << endl;

        cout << "}" << endl;
    }

    cout << "return 0;" << endl;
    cout << "}" << endl;

    return 0;
}