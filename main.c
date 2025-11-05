#include "libft.h"
#include <stdio.h>
#include <string.h>

void print_array(const char *label, char *arr, size_t len)
{
    printf("%s: \"", label);
    for (size_t i = 0; i < len; i++)
        putchar(arr[i]);
    printf("\"\n");
}

int main()
{
    char test1[] = "ABCDEFGH"; // dest > src (перекрытие вправо)
    ft_memmove(test1 + 3, test1, 4);
    print_array("Overlap Right", test1, 8); // Ожидаем: "ABCABCDH"

    char test2[] = "ABCDEFGH"; // dest < src (перекрытие влево)
    ft_memmove(test2, test2 + 2, 4);
    print_array("Overlap Left", test2, 8); // Ожидаем: "CDEEFGH"

    char test3[] = "ABCDEFGH"; // Нет перекрытия
    char src3[] = "1234";
    ft_memmove(test3, src3, 4);
    print_array("No Overlap", test3, 8); // Ожидаем: "1234EFGH"

    char test4[] = "ABCDEFGH"; // dest == src
    ft_memmove(test4, test4, 8);
    print_array("Dest == Src", test4, 8); // Ожидаем: "ABCDEFGH"

    return 0;
}