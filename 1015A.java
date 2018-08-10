import java.util.Scanner;
public class Main {

    public static void main(String[] args)
    {
	    Scanner in = new Scanner(System.in);
	    int m,n,i,j,a,b;
	    n = in.nextInt();
	    m = in.nextInt();
	    int hash[] = new int[m+1];

	    for(i=0;i<n;i++)
        {
            a = in.nextInt();
            b = in.nextInt();
            for(j=a;j<=b ;j++)
            {
                hash[j]=1;
            }
        }
    int cnt=0;
	    for(i=1;i<=m;i++)
        {
            if(hash[i] == 0)
            {
                cnt++;
            }
        }
        System.out.println(cnt);
        for(i=1;i<=m;i++)
        {
            if(hash[i] == 0)
            {
                System.out.print(i+" ");
            }
        }
    }
}
