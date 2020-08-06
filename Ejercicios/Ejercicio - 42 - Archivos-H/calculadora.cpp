int sumar(int a, int b)
{
    return a + b;
}
int restar(int a, int b)
{
    return a - b;
}

int calcular(int a, int b, char operador)
{
    if (operador == '+')
    {
        sumar(a, b);
    }
    throw "Operador no valido";
}
