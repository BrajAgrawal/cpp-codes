#include <iostream>

using namespace std;

int main()
{
    int num_dish, days;
    cin >> num_dish >> days;

    int Akshay_dishes[num_dish], girlfriend_dishes[num_dish];
    int Akshay_money[days], girlfriend_money[days];

    for (int i = 0; i < num_dish; i++)
        cin >> Akshay_dishes[i];
    for (int i = 0; i < num_dish; i++)
        cin >> girlfriend_dishes[i];
    for (int i = 0; i < days; i++)
    {
        cin >> Akshay_money[i];
        cin >> girlfriend_money[i];
    }

    // logic arranging
    for (int i = 0; i < num_dish - 1; i++)
        for (int j = i + 1; j < num_dish; j++)
            if (Akshay_dishes[j] + girlfriend_dishes[j] <
                Akshay_dishes[i] + girlfriend_dishes[i])
            {
                int temp1 = Akshay_dishes[j];
                Akshay_dishes[j] = Akshay_dishes[i];
                Akshay_dishes[i] = temp1;

                int temp2 = girlfriend_dishes[j];
                girlfriend_dishes[j] = girlfriend_dishes[i];
                girlfriend_dishes[i] = temp2;
            }
//   for (int i = 0; i < num_dish; i++)
//     {
//         cout << " dish "<<i<<" =   "<<Akshay_dishes[i]<<endl;
//         cout << girlfriend_dishes[i]<<endl;
//     }
    // Logic Money
    int spend = 0;
    for (int i = 0; i < days; i++)
        for (int j = 0; j < num_dish; j++)
            if (Akshay_dishes[j] >= Akshay_money[i] &&
                girlfriend_dishes[j] >= girlfriend_money[i])
            {    
                spend += Akshay_dishes[j] + girlfriend_dishes[j];
                break;
            }

    cout << spend;
}
