#include <iostream>
#include <string>
int main()
{
    int sizeofString;
    std::cin >> sizeofString;

    std::string strs[sizeofString];

    for (int i = 0; i < sizeofString; i++)
    {
        std::cin >> strs[sizeofString];
    }

    std::string result = strs[0];

    if (strs->empty())
        std::cout << "";
    else
    {
        for (int i = 1; i < strs->size() && !result.empty(); i++)
        {
            for (int j = 0; j < result.size(); j++)
            {
                if (strs[i][j] != result[j])
                {
                    result.resize(j);
                    break;
                }
            }
        }
        std::cout << result;
    }
}