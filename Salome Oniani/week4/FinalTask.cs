using System;

namespace um_Rank
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Input Number: ");

            int user_input = int.Parse(Console.ReadLine());

            Console.Write($"{user_input} = ");

            string plus = "+";

            string num = user_input.ToString();

            for (int i = 0; i < num.Length; i++)
            {
                if (i == num.Length - 1) plus = "";

                Console.Write($"{ num[i] } * {Math.Pow(10, num.Length - 1 - i)} {plus} ");
            }

            Console.WriteLine("\n\n");
        }
    }
}
