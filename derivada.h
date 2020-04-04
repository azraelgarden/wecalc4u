double derivada1(float x, float k)
{
    double h = 0.0000000001;
    double x0 = x + h;
    double y;;
    y = (funcaod1(x0, k) - funcaod1(x,k)) / h;
    return y;
}

double derivada2(float x, float k)
{
    double h = 0.0000000001;
    double x0 = x + h;
    double y;
    y = (funcaod2(x0, k) - funcaod2(x,k)) / h;
    return y;
}

double derivada3(float x, float k)
{
    double h = 0.0000000001;
    double x0 = x + h;
    double y;
    y = (funcaod3(x0,k) - funcaod3(x,k)) / h;
    return y;
}

double derivada4(float x)
{
    double h = 0.0000000001;
    double x0 = x + h;
    double y;
    y = (funcaod4(x0) - funcaod4(x)) / h;
    return y;
}

double derivada5(float x, float k)
{
    double h = 0.0000000001;
    double x0 = x + h;
    double y;
    y = (funcaod5(x0, k) - funcaod5(x,k)) / h;
    return y;
}

double derivada6(float x)
{
    double h = 0.0000000001;
    double x0 = x + h;
    double y;
    y = (funcaod6(x0) - funcaod6(x)) / h;
    return y;
}

double derivada7(float x)
{
    double h = 0.0000000001;
    double x0 = x + h;
    double y;
    y = (funcaod7(x0) - funcaod7(x)) / h;
    return y;
}

double derivada8(float x)
{
    double h = 0.0000000001;
    x = rad(x);
    double x0 = x + h;
    double y;
    y = (funcaod8(x0) - funcaod8(x)) / h;
    return y;
}

double derivada9(float x)
{
    double h = 0.0000000001;
    x = rad(x);
    double x0 = x + h;
    double y;
    y = (funcaod9(x0) - funcaod9(x)) / h;
    return y;
}

double derivada10(float x)
{
    double h = 0.0000000001;
    x = rad(x);
    double x0 = x + h;
    double y;
    y = (funcaod10(x0) - funcaod10(x)) / h;
    return y;
}
