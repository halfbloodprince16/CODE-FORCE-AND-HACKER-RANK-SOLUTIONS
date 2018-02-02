package javadatatypes;
import java.util.Scanner;
import static java.lang.Math.pow;
public class JavaDatatypes
{

    public static void main(String[] args) 
    {
       Scanner in = new Scanner(System.in);
       int a = in.nextInt();
       long x[] = new long[a];
       
       try
       {
           for(int i = 0 ; i < a ; i++)
           {
               x[i] = in.nextInt();
           }
       }
       catch(Exception e)
       {
           System.out.println(e+" can't be fitted anywhere.");
       }  
       
       
       for(int i = 0 ; i< a ; i++)
       {
           if(x[i] >= -128 && x[i] < 128)
           {
               System.out.println(x[i]+" can be fitted in:");
               System.out.println("* byte");
               System.out.println("* short");
               System.out.println("* int");
               System.out.println("* long");
           }
           else if(x[i] >= -32768 && x[i] < 32767)
           {
               System.out.println(x[i]+" can be fitted in:");
               System.out.println("* short");
               System.out.println("* int");
               System.out.println("* long");
           }
           else if(x[i] >= -2147483648 && x[i] < 2147483647)
           {
               System.out.println(x[i]+" can be fitted in:");
               System.out.println("* int");
               System.out.println("* long");
           }
           else if(x[i] >= -pow(2,64) && x[i] < pow(2,64))
           {
               System.out.println(x[i]+" can be fitted in:");
               System.out.println("* long");
           }
           else
           {
               System.out.println(x[i]+" can't be fitted anywhere.");
           }
       }
    }
}
