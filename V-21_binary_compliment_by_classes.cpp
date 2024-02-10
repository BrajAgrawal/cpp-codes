#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class binary
{
    string s;

private:
    void check_binary(void);

public:
    void read_binary(void);
    void Ones_compliment(void);
    void display_binary(void);
    void value_binary(void);
};
void binary::read_binary(void)
{
    cout << "Enter a binary" << endl;
    cin >> s;
    check_binary(); // Nesting of functions (function insided another function)
}
void binary::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "invalid binary" << endl;
            exit(0);
        }
    }
}
void binary::Ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
void binary::display_binary(void)
{
    cout << "Binary produced is  " << s << endl;
}
void binary::value_binary(void)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
            sum += pow(2, (s.length() - (i+1)));
    }
    cout << "Value of current binary is  " << sum << endl;
}
int main()
{
    binary b;
    b.read_binary();
    b.display_binary();
    b.value_binary();
    b.Ones_compliment();
    b.display_binary();
    b.value_binary();
    return 0;
}