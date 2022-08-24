using System;

namespace bai1
{
    class Program
    {
        static void Main(string[] args)
        {
            var s = Console.ReadLine(); //s="1 2"
            var s1 = s.Split(' '); //s1[0]="1" s1[1]="2"
            int a = Convert.ToInt32(s1[0]);
            int b = Convert.ToInt32(s1[1]);
            
            Console.WriteLine(a+b);
            Console.WriteLine(a - b);
            Console.WriteLine(a * b);
            if (b  != 0)
            {
                float c = a / (float)(b * 1.0);
                Console.WriteLine(c.ToString("0.00"));
            }
            else
            {
                Console.WriteLine("INF");
            }
        }
    }
}
