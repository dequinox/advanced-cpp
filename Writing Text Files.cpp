#include <iostream>
#include <fstream>
using namespace std;

int main()
{
      ofstream outFile;
      string outputFileName = "text.txt";

      outFile.open(outputFileName);

      if (outFile.is_open())
      {
            for (int i = 0; i < 10; i++)
            {
                  outFile << i << " : Line -> " << i << endl;
            }
            outFile.close();

      }
      else
      {
            cout << "Could not create file: " << outputFileName << endl;
      }
      return 0;
}
