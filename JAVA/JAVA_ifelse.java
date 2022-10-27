import java.util.*;
public class JAVA_ifelse
{
    public static void main(String args[])
    {
        int a;
        Scanner in = new Scanner(System.in);
        a=in.nextInt();
        if(a%2!=0)
        {
            System.out.println("Weird");
        }
        else if(a>=2 && a<=5)
        {
            System.out.println("Not Weird");
        }
        else if(a>=6 && a<=20)
        {
            System.out.println("Weird");
        }
        else
        {
            System.out.println("Not Weird");
        }
        in.close();
    }
}
