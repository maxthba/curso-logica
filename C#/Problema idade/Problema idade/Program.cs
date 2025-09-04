using System;
namespace Problema_idade
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int idade1, idade2;
            double media;
            string nome1, nome2;

            Console.WriteLine("Dados da primeira pessoa:");
            Console.Write("Nome: ");
            nome1 = Console.ReadLine();
            Console.Write("Idade: ");
            idade1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Dados da segunda pessoa:");
            Console.Write("Nome: ");
            nome2 = Console.ReadLine();
            Console.Write("Idade: ");
            idade2 = int.Parse(Console.ReadLine());

            media = (idade1 + idade2) / 2.0;

            Console.WriteLine("A idade média de " + nome1 + " e " +nome2+ " é de " + media.ToString("F1") + " anos.");
            Console.WriteLine("Pressione Enter para sair...");
            Console.ReadLine();

        }
    }
}
