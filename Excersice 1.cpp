using System;

namespace aray
{
    class Program
    {
        static void Main(string[] args)
        {
            int input;
            int input2;
            Console.WriteLine("Please enter a number 0-10");
            input = Int16.Parse(Console.ReadLine());
            if (input >= 0 && input <= 10)
            {
                Console.WriteLine("Valid");
            } else
            {
                Console.WriteLine("Invalid\n");
            }
            Console.WriteLine("Please enter 2 numbers");
            input = Int16.Parse(Console.ReadLine());
            input2 = Int16.Parse(Console.ReadLine());
            if (input > input2)
            {
                Console.WriteLine(string.Format("{0} is larger than {1}", input, input2));
            } else
            {
                Console.WriteLine(string.Format("{0} is larger than {1}", input2, input));
            }

            Console.WriteLine("Please enter a Speed limit");
            input = Int16.Parse(Console.ReadLine());
            Console.WriteLine("Please enter a Speed");
            input2 = Int16.Parse(Console.ReadLine());
            if (input2 > input )
            {
                int demerit = ((input2 - input) / 5);
                if (demerit >= 12)
                {
                    Console.WriteLine(string.Format("You have earned {0} demerit points, and your liscense is suspended", demerit));
                } else
                {
                    Console.WriteLine(string.Format("You have just earned {0} demerit points", demerit));
                }

            } else
            {
                Console.WriteLine("OK");
            }
        }
    }
}
