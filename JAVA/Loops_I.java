import java.util.*;

public class Loops_I
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int i = 1;
        for(;i<=10;i++)
        {
            System.out.println(a+" x "+i+" = "+a*i);
        }
        in.close();
    }
}
