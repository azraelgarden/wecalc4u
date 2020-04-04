
float funcao1(float x, float k)
{
    float y;
    y = k;
    return y;
}

float funcao2(float x, float k)
{
    float y;
    y = (pow(x,k));
    return y;
}

float funcao3(float x, float k)
{
    float y;
    y = (pow(k,x));
    return y;
}

float funcao4(float x)
{
    float y;
    float e = 2.71828182846;
    y = (pow(e,x));
    return y;
}

float funcao5(float x, float k)
{
    float y;
    y = (log10(x))/(log10(k));
    return y;
}

float funcao6(float x)
{
    float y;
    y = log(x);
    return y;
}

float funcao7(float x)
{
    float y;
    y = 1/x;
    return y;
}

float funcao8(float x)
{
    x = rad(x);
    float y;
    y = sin(x);
    return y;
}

float funcao9(float x)
{
    x = rad(x);
    float y;
    y = cos(x);
    return y;
}

float funcao10(float x)
{
    x = rad(x);
    float y;
    y = tan(x);
    return y;
}
