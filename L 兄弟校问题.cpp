#include <bits/stdc++.h>

std::vector<std::string> split(const std::string& s, char delimiter)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

std::string to_lower(const std::string& s)
{
    std::string result;
    for (char c : s)
    {
        result += std::tolower(c);
    }
    return result;
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> school(n);
    std::vector<std::string> city(n);
    std::unordered_map<std::string, std::vector<int>> keywords;
    for (int i = 0; i < n; ++i)
    {
        std::string name, c;
        std::cin >> name >> c;
        school[i] = name;
        city[i] = c;
        std::string lower_name = to_lower(name);
        std::vector<std::string> tokens = split(lower_name, '_');
        for (const std::string& token : tokens)
        {
            if (token.size() > 0)
            {
                keywords[token].push_back(i);
            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        std::string keyword;
        std::cin >> keyword;
        keyword = to_lower(keyword);
        std::vector<int> indices = keywords[keyword];
        std::sort(indices.begin(), indices.end());
        indices.erase(std::unique(indices.begin(), indices.end()), indices.end());
        for (int index : indices)
        {
            int count = 0;
            for (int j = 0; j < n; ++j)
            {
                if (j != index && (city[j] == city[index] || std::find(school[j].begin(), school[j].end(), '_') != school[j].end() && std::find(school[index].begin(), school[index].end(), '_') != school[index].end()))
                {
                    ++count;
                }
            }
            std::cout << count << std::endl;
        }
    }

    return 0;
}