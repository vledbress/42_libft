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
    // 1️⃣ Обычная конкатенация, буфер достаточно большой
    char buf1[20] = "Hi";
    size_t len1 = ft_strlcat(buf1, " there!", sizeof(buf1));
    printf("Case 1: \"%s\", len = %zu\n", buf1, len1); // "Hi there!", len = 9

    // 2️⃣ Буфер мал, усечение
    char buf2[6] = "Hi";
    size_t len2 = ft_strlcat(buf2, " there!", sizeof(buf2));
    printf("Case 2: \"%s\", len = %zu\n", buf2, len2); // "Hi th", len = 9

    // 3️⃣ dst пустой
    char buf3[10] = "";
    size_t len3 = ft_strlcat(buf3, "Hello", sizeof(buf3));
    printf("Case 3: \"%s\", len = %zu\n", buf3, len3); // "Hello", len = 5

    // 4️⃣ dst полный
    char buf4[5] = "ABCD";
    size_t len4 = ft_strlcat(buf4, "XYZ", sizeof(buf4));
    printf("Case 4: \"%s\", len = %zu\n", buf4, len4); // "ABCD", len = 7

    // 5️⃣ dstsize == 0
    char buf5[5] = "AB";
    size_t len5 = ft_strlcat(buf5, "CD", 0);
    printf("Case 5: \"%s\", len = %zu\n", buf5, len5); // buf5 не меняется, len = 4

    return 0;
}