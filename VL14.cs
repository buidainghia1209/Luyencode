using System;
namespace Ngay2
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            var s1 = s.Split(' ');
            int a = Convert.ToInt32(s1[0]);
            int b = Convert.ToInt32(s1[1]);
            Console.WriteLine(ucln(a, b));
        }
            static int ucln(int x, int y)
        {
            if ((x == 0) && (y != 0)) return Math.Abs(y);
            if ((y == 0) && (x != 0)) return Math.Abs(x);
            if (x == y) return Math.Abs(y);
            if (Math.Abs(x)> Math.Abs(y)) return ucln(Math.Abs(x) - Math.Abs(y), Math.Abs(y));
            else return ucln(Math.Abs(y)- Math.Abs(x), Math.Abs(x));
        }
    }
}
