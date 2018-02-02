package javaloopsii;
import java.util.Scanner;
import static java.lang.Math.pow;
public class JavaLoopsII 
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int q;
        int a,b;
        
        q = in.nextInt();
        a = q;
        b = 3;
        int x[][] = new int[a][b];
        
        int i,j;
        for(i = 0; i < a ; i++)
        {
            for(j = 0; j < b ; j++)
            {
                x[i][j] = in.nextInt();
            }
        }
       
        int ans=0;
        for(i = 0; i < a ; i++)
        {
            ans = x[i][0];
           for(j = 0 ; j < x[i][2] ; j++)
           {
               ans = ans + (int)pow(2,j)*x[i][1];
               System.out.print(ans+" ");
           }
           ans = 0;
           System.out.println();
        }
        
    }   
}
