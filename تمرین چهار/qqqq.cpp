#include<iostream> 
#include<conio.h>
using namespace std;
int main() 
{
  
        cout<<"\n\t\t\t PASCAL'S TRIANGLE \n\n";
        int rows;

        cin >> rows;
        cout << endl;
  
          for (int i = 0; i < rows; i++)     
                {
                    int val = 1;
                    for (int j = 1; j < (rows - i); j++) 
                    {
                            cout << "    ";
                    }
                    for (int k = 0; k <= i; k++)  {
                            cout << "       " << val;
                            val = val * (i - k) / (k + 1);
                    }
                            cout << endl << endl;
                }
                cout << endl;
                cin.get();
                cin.get();
                return 0; 
                 
                 
}
