int validarX(float x)
{
    int aux;
    aux = x;
    if(x != aux)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int erroX(float x)
{
    if(x<=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int erroK(float k)
{
    if(k<=1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int erro0(float x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int erro90(float x)
{
    int i;
    int erro;
    for(i=-9; i<=9; i++,i++)
    {
        erro = 90 * i;
        if(x == erro)
        {
            return 1;
        }
    }
    return 0;
}

int erroIntervalo0(float a, float b)
{
    if(a<=0 && b>=0)
    {
        return 1;
    }
    return 0;
}

int erroIntervalo90(float a, float b){
    int i;
    int erro;
    for(i=-9; i<=9; i++,i++)
    {
        erro = 90 * i;
        if(a<= erro && b>= erro)
        {
            return 1;
        }
    }
    return 0;
}

// Para mudar '.' por ',' ou vice versa, para deixar o código sem bugs

void mudar(char* num){
    char* ptr = num;
    while(*ptr != '\0'){
        if(*ptr == '.'){
            *ptr = ',';
        }
        ptr++;
    }
}

float converterChar_Float(char* num){
    mudar(num);
    char* ptr;
    float numFinal = strtof(num, &ptr);
    return numFinal;
}
