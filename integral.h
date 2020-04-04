#define n 100

float integral1(float a, float b, float k)
{
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod1(x,k);
    }
    in = ((( funcaod1(a,k) + (2 * soma) + funcaod1(b, k)) * h)/2);
    return in;
}

float integral2(float a, float b, float k)
{
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod2(x,k);
    }
    in = ((( funcaod2(a,k) + (2 * soma) + funcaod2(b, k)) * h)/2);
    return in;
}

float integral3(float a, float b, float k)
{
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod3(x,k);
    }
    in = ((( funcaod3(a,k) + (2 * soma) + funcaod3(b, k)) * h)/2);
    return in;
}

float integral4(float a, float b)
{
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod4(x);
    }
    in = ((( funcaod4(a) + (2 * soma) + funcaod4(b)) * h)/2);
    return in;
}

float integral5(float a, float b, float k)
{
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod5(x,k);
    }
    in = ((( funcaod5(a,k) + (2 * soma) + funcaod5(b, k)) * h)/2);
    return in;
}

float integral6(float a, float b)
{
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod6(x);
    }
    in = ((( funcaod6(a) + (2 * soma) + funcaod6(b)) * h)/2);
    return in;
}

float integral7(float a, float b)
{
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod7(x);
    }
    in = ((( funcaod7(a) + (2 * soma) + funcaod7(b)) * h)/2);
    return in;
}

float integral8(float a, float b)
{
    a = rad(a);
    b = rad(b);
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod8(x);
    }
    in = ((( funcaod8(a) + (2 * soma) + funcaod8(b)) * h)/2);
    return in;
}

float integral9(float a, float b)
{
    a = rad(a);
    b = rad(b);
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod9(x);
    }
    in = ((( funcaod9(a) + (2 * soma) + funcaod9(b)) * h)/2);
    return in;
}

float integral10(float a, float b)
{
    a = rad(a);
    b = rad(b);
    float h = (b - a) / n;
    float soma = 0, in, x;
    int i;
    for(i=1; i<n; i++)
    {
        x = a + (i * h);
        soma += funcaod10(x);
    }
    in = ((( funcaod10(a) + (2 * soma) + funcaod10(b)) * h)/2);
    return in;
}
