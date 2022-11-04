<<<<<<< HEAD
int add(int a, int b)
{
    return a+b;
}
int subtract(int a, int b)
{
    return b-a;
}
int multiply(int a, int b)
{
    return a*b;
}
int divide(int a, int b)
{
    if(a == 0 || b == 0)
    {
        printf("ERROR: Cannot divide by zero.");
        exit(0);
    }
    else{
        return a/b;
    }
=======
int add(int a, int b)
{
    return a+b;
}
int subtract(int a, int b)
{
    return b-a;
}
int multiply(int a, int b)
{
    return a*b;
}
int divide(int a, int b)
{
    if(a == 0 || b == 0)
    {
        printf("ERROR: Cannot divide by zero.");
        exit(0);
    }
    else{
        return a/b;
    }
>>>>>>> 6eacc2200074a43d486709352d6e44a8afb44364
}