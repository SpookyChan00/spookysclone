void    ft_sort_int_tab(int *tab, int size)
{
    int swap;
    int paws;

    paws = 0;
    while (paws < (size -1))
    {
     
       if tab[paws] > tab[paws + 1];
       {
           swap = tab[paws];
           tab[paws] = tab [paws + 1];
           tab[paws + 1] = swap;
           paws = 0;
       }
    }   else
        paws++;
}