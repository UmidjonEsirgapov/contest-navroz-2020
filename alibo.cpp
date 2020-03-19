#include <iostream>
#include <string>
using namespace std;

int main()
{
    string matn, result = "NO";
    int l;

    getline(cin,matn);
    l = matn.length();

    for (int i = 0; i <= l; i++)
    {
        if (matn[i] == 'O')
        {
            if (matn[i + 1] == 'L')
            {
                if (matn[i + 2] == 'M')
                {
                    if (matn[i + 3] == 'A')
                    {
                        result = "YES";
                        break;
                    }
                    if (matn[i + 3] == 'a')
                    {
                        result = "YES";
                        break;
                    }
                }
                if (matn[i + 3] == 'm')
                {
                    if (matn[i + 3] == 'A')
                    {
                        result = "YES";
                        break;
                    }
                    if (matn[i + 3] == 'a')
                    {
                        result = "YES";
                        break;
                    }
                }
            }
            if (matn[i + 1] == 'l')
            {
                if (matn[i + 2] == 'M')
                {
                    if (matn[i + 3] == 'A')
                    {
                        result = "YES";
                        break;
                    }
                    if (matn[i + 3] == 'a')
                    {
                        result = "YES";
                        break;
                    }
                }
                if (matn[i + 3] == 'm')
                {
                    if (matn[i + 3] == 'A')
                    {
                        result = "YES";
                        break;
                    }
                    if (matn[i + 3] == 'a')
                    {
                        result = "YES";
                        break;
                    }
                }
            }
        }

        if (matn[i] == 'o')
        {
            if (matn[i + 1] == 'L')
            {
                if (matn[i + 2] == 'M')
                {
                    if (matn[i + 3] == 'A')
                    {
                        result = "YES";
                    }
                    if (matn[i + 3] == 'a')
                    {
                        result = "YES";
                    }
                }
                if (matn[i + 3] == 'm')
                {
                    if (matn[i + 3] == 'A')
                    {
                        result = "YES";
                    }
                    if (matn[i + 3] == 'a')
                    {
                        result = "YES";
                    }
                }
            }
            if (matn[i + 1] == 'l')
            {
                if (matn[i + 2] == 'M')
                {
                    if (matn[i + 3] == 'A')
                    {
                        result = "YES";
                    }
                    if (matn[i + 3] == 'a')
                    {
                        result = "YES";
                    }
                }
                if (matn[i + 3] == 'm')
                {
                    if (matn[i + 3] == 'A')
                    {
                        result = "YES";
                    }
                    if (matn[i + 3] == 'a')
                    {
                        result = "YES";
                    }
                }
            }
        }
    }

    cout << result;

    return 0;
}
