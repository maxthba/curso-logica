int num1, num2, num3, menor = 0;

Console.WriteLine("Digite o primeiro numero: ");
num1 = int.Parse(Console.ReadLine());

Console.WriteLine("Digite o segundo numero: ");
num2 = int.Parse(Console.ReadLine());

Console.WriteLine("Digite o terceiro numero: ");
num3 = int.Parse(Console.ReadLine());

if (num1 < num2 && num1 < num3)
{
    menor = num1;
}
else if (num2 < num1 && num2 < num3)
{
    menor = num2;
}
else if (num3 < num1 && num3 < num2)
{
    menor = num3;
}

Console.WriteLine("MENOR = " + menor );