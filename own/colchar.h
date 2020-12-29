int colchar(int a, char b[255])
{
    int i, j;
    char c;

    for(j = 0; j < a - 1; j++)             // Getting chars
    {
        for(i = 0; i < a - 1; i++)
        {
            if(b[i] > b[i + 1])
            {
                c = b[i];
                b[i] = b[i + 1];
                b[i + 1] = c;
            }
        }
    }

    return 0;
}