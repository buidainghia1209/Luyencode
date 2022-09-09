using System;

namespace Vl16
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            var s1 = s.Split(' ');
            int a = Convert.ToInt32(s1[0]);
            int b = Convert.ToInt32(s1[1]);
            a = Math.Abs(a);
            b = Math.Abs(b);

            for(int i=1;i<=a*b;i++)
                if((i%a==0)&&(i%b==0))
                {
                    Console.WriteLine(i);
                    break;
                }       
            
        }
    }
}
