#include "replace.hpp"

char *ft_strcat(char *dest, const char *src)
{
    int i = 0;
    int size = ft_strlen(dest);
    while (src[i])
        dest[size++] = src[i++];
    dest[size] = 0;
    return dest;
}

std::string save_text(std::ifstream &file)
{
    std::string line;
    std::string content;
    int size;
    while (std::getline(file, line))
    {
        content += line;
        content += '\n';
    }
    size = ft_strlen(content);
    if (content[size - 1] == '\n')
        content[size - 1] = 0;
    return content;
}

int main(int argc, char **argv)
{
    std::ifstream existing_file;
    std::ofstream new_file;
    if (argc != 4)
    {
        std::cout << "You must have 3 arguments." << std::endl;
        return -1;
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    existing_file.open(argv[1]);
    if (!existing_file.is_open())
    {
        std::cout << "Error opening file." << std::endl;
        return -1;
    }

    std::string content = save_text(existing_file);
    if (!argv[2][0])
    {
        std::cout << "The 2nd argument can't be empty" << std::endl;
        return -1;
    }
    if (ft_strlen(content))
    {
        new_file.open(ft_strcat(argv[1], ".replace"));
        content = replace(content, s1, s2);
        new_file << content << std::endl;
    }

    existing_file.close();
    new_file.close();
    return 0;
}
