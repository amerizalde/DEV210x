
int AddTwo(int x)
{
    return x + 2;
}

int main()
{
    int i{4};
    const int j{AddTwo(i)};
    int const k{AddTwo(i)};
    AddTwo(j);
    j = AddTwo(j);
    i = AddTwo(j);
    k = 7;
    i = 7;
    return 0;
}
