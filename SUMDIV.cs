using System;
class HelloWorld {
  static void Main() {
   int t=Convert.ToInt32(Console.ReadLine());
   long[] mang = new long[100002];
   int t1=t;
   while(t>0){
       mang[t]=Convert.ToInt32(Console.ReadLine());
       t--;
   }
  while(t1>0){
      Console.WriteLine("{0}", sumdiv(mang[t1]));
      t1--;
      
  }
  }
  static long sumdiv(long x){
      long sum=0;
      int i=1;
      while(i<=Math.Round(Math.Sqrt(x)))
      {
          if((x%i==0)&&(i!=Math.Sqrt(x))){
              sum=sum+i+x/i;
             
          }
          if((x%i==0)&&(i==Math.Sqrt(x)))
          sum=sum+i;
          i++;
      }
      return sum;
      
  }
}
