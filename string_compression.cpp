#include <iostream>
using namespace std;
void compress(char ch[], int n)
{

    int alpha[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int num = ch[i] - 'a';
        alpha[num]++;
    }

    char temp[2*n]={' '};
    int i,j;
    for ( i = 0, j = 0; i<n; i++)
    {
        if (alpha[i] == 1)
        {
            temp[j] = i + 'a';
            j++;

        }

        else if (alpha[i] > 1)
        {
            temp[j] = i + 'a';
            temp[j + 1] = alpha[i] + '0';
            j += 2;
        }
    }
    for (int i = 0; i < j; i++)
    {
        cout << temp[i] << " ";
    }
    ch = temp;
}

int main()
{ int n=12;
    char ch[n] = {'a', 'a', 'a', 'a', 'a', 'a', 'a','a','a','b','b','b'};
    compress(ch, n);
    

    return 0;
}