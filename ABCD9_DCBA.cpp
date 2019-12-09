#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                for (int l = 0; l <= 9; l++)
                {
                    if ((i*1000+j*100+k*10+l)*9==(l*1000+k*100+j*10+i))
                    {
                        cout << (i*1000+j*100+k*10+l)<<endl;
                    }
                    
                }
            }
        }
    }

    return 0;
}