void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int k;
    int swap;

    i = 0;
    k = size - 1;
    while ( i < (size / 2))
    {
        swap = tab[i];
        tab[i] = tab[k];
        tab[k] = swap;
        i++;
        k--;
    }
}