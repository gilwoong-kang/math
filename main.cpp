#include "BoolGenerator.h"
#include <fstream>
int main(int argc, char *argv[])
{
    ofstream output;
    try
    {
        BoolGenerator gen;
        gen
              .AddVarProp("P")
              .AddVarProp("Q")
              .AddVarProp("S")
              .AddVarProp("T")
              .AddVarProp("Z")
              .AddVarProp("R")
              .Build();
        cout << gen << endl;

        output.exceptions(std::ofstream::failbit | std::ofstream::badbit);
        output.open("TruthTable.out");
        output << gen;
        output.close();
    }
    catch (const std::exception &ex)
    {
        output.close();
        std::cerr << ex.what() << std::endl;
    }
    return 0;
}
