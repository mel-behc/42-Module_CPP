#include "header.hpp"

int ftStrlen(std::string str, int start)
{
    int len;

    len = 0;
    while (str[start])
    {
        len++;
        start++;
    }
    return (len);
}

std::string replaceStr(std::string line, std::string s1, std::string s2)
{
    std::string replace1;
    int pos;
    int len;
    int i;

    i = 0;
    while (i < (int)line.size())
    {
        pos = line.find(s1);
        if (pos > 0)
        {
            replace1 = line.substr(0, pos) + s2;
            pos += s1.size();
            len = ftStrlen(line, pos);
            line = replace1 + line.substr(pos, len);
            i = pos;
        }
        else if (pos == 0)
        {
            pos = s1.size();
            len = ftStrlen(line, pos);
            replace1 = line.substr(pos, len);
            line = s2 + replace1;
            i = pos;
        }
        i++;
    }
    return (line);
}

int main(int ac, char **av)
{
    std::string filename;
    std::string line;

    if (ac != 4)
        return(0);
    filename = av[1];
    std::ifstream inStream(filename);
    std::ofstream ouStream("new_file.replace");
    if (inStream)
    {
        while (std::getline(inStream, line))
        {
            line = replaceStr(line, av[2], av[3]);
            if (ouStream)
                ouStream << line << std::endl;
            else
                std::cout << "Nothing to stream" << std::endl;
        }
    }
    else
        std::cout << "Nothing to stream" << std::endl;
    return (0);
}