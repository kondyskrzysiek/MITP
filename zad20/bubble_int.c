int bubble_int(int *array, int size_array)
{
    int check_change = 1;
    while (check_change)
    {
        check_change = 0;
        for (int i = 0; i < size_array - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                check_change = 1;
            }
        }
    }

    return 0;
}