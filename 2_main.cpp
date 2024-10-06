
#include "iter.hpp"

# if 1

int main()
{
    char array[] = {'A', 'B', 'C', 'D', 'E'};
    iter(array, 5, tolower);
    for (size_t i = 0; i < 5; i++)
        std::cout << array[i] << std::endl;
    return 0;
}

#else

int main()
{
    int array[] = {-1, -2, -3, -4, -5};
    iter(array, 5, abs);
    for (size_t i = 0; i < 5; i++)
        std::cout << array[i] << std::endl;
    return 0;
}

#endif
