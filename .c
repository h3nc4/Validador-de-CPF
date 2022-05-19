int validaCPFstring(char cpfc[12])
{
    int cpfi[11];
    for (int i = 0; i < 11; i++)
        cpfi[i] = cpfc[i] - 48;
    return validaCPFarray(cpfi);
}
int validaCPFarray(int cpf[11])
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    if (cpf[0] == cpf[1] && cpf[1] == cpf[2] &&
            cpf[2] == cpf[3] && cpf[3] == cpf[4] &&
            cpf[4] == cpf[5] && cpf[5] == cpf[6] &&
            cpf[6] == cpf[7] && cpf[7] == cpf[8] &&
            cpf[8] == cpf[9] && cpf[9] == cpf[10])
        return 0;
    for (int j = 0; j < 11; j++)
        if (cpf[j] < 0 || cpf[j] > 9)
            return 0;
    for (int i = 0; i < 9; i++)
        e = e + cpf[i] * (10 - i);
    a = e % 11;
    if (a == 0 || a == 1)
        c = 0;
    else
        c = 11 - a;
    e = 0;
    for (int i = 0; i < 10; i++)
        e = e + cpf[i] * (11 - i);
    f = (e / 11) * 11;
    b = e - f;
    if (b == 0 || b == 1)
        d = 0;
    else
        d = 11 - b;
    if (c == cpf[9] && d == cpf[10])
        return 1;
    else
        return 0;
}
