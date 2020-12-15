int swap(char a[256], char b[256], int x)
{
    int i;
    for(i = 0; i < x; i++)
    {
        b[i] = a[i];
    }
    return 0;
}