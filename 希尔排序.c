void ShellSort(DataType* a, size_t n)//希尔排序
{
    assert(a);
    int gap = n;
    while (gap > 1)
    {
        gap = gap / 3 + 1;
        for (size_t i = 0; i < n - gap; i++)
        {
            int end = i;
            int tmp = a[end + gap];
            while (end >= 0 && a[end]>tmp)
            {
                a[end + gap] = a[end];
                end -= gap;
            }
            a[end + gap] = tmp;
        }
    }
}
