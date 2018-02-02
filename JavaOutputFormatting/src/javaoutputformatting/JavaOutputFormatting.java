package javaoutputformatting;
import java.util.Scanner;
public class JavaOutputFormatting 
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        
        String s1 = in.next();
        int a = in.nextInt();
        String s2 = in.next();
        int b = in.nextInt();
        String s3 = in.next();
        int c = in.nextInt();
        
        System.out.println("================================");
            System.out.printf("%-15s%03d\n",s1,a);
            System.out.printf("%-15s%03d\n",s2,b);
            System.out.printf("%-15s%03d\n",s3,c);
        System.out.println("================================");
    }
    
}
