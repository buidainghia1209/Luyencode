using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Baivt04
{
    class Program
    {
        static void Main(string[] args)
        {
            int dem = 0;
            string s = Console.ReadLine();
            var s1=s.Split(' ');
            int n= Int32.Parse(s1[0]);
            int[] a = new int[n];
            int x= Convert.ToInt32(s1[1]);
            string s2= Console.ReadLine();
            var s3=s2.Split(' ');
            for(int i=0;i<n;i++)
                a[i]=Convert.ToInt32(s3[i]);
            for(int i=0;i<n;i++)
                if(a[i]==x)dem++;
            Console.WriteLine(dem);
            Console.ReadLine();
        }
    }
}
