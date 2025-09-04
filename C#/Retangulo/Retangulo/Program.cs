int altura,b, area, perimetro;
double diagonal; 

Console.Write("Digite a base do retangulo: ");
b = int.Parse(Console.ReadLine());

Console.Write("Digite a altura do retangulo: ");    
altura = int.Parse(Console.ReadLine());

perimetro = 2 * b + 2 * altura;
area = b * altura;
diagonal = Math.Sqrt(b * b + altura * altura);

Console.WriteLine("BASE = " + b);
Console.WriteLine("ALTURA = " + altura);
Console.WriteLine("AREA = " + area);
Console.WriteLine("PERIMETRO = " + perimetro);
Console.WriteLine("DIAGONAL = " + diagonal);
Console.WriteLine("Pressione Enter para sair...");
Console.ReadLine();

