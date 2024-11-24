#include <stdio.h>

/*
На стандартном потоке ввода задается натуральное число N (N > 0), после которого следует последовательность из N целых чисел.
На стандартный поток вывода напечатайте, сколько раз в этой последовательности встречается максимум.

Указание: использовать массивы запрещается.
*/

int find_max_count(void)
{
    int N, current, max, count;

    scanf("%d%d", &N, &max);
    count = 1;

    for (int i = 1; i < N; i++)
    {
        scanf("%d", &current);

        if ((current ^ max) > 0 && (current - max) > 0)
        {
            max = current;
            count = 1;
        }
        else if ((current ^ max) == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    printf("%d\n", find_max_count());

    return 0;
}
