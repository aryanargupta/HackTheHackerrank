// *************************************************************************************************************

//  Title: Currency Formatter
//  Original question link : https://www.hackerrank.com/challenges/java-currency-formatter/problem

// *************************************************************************************************************


// We have used NumberFormat
// The NumberFormat class provides methods to format the currency according to the locale. The getCurrencyInstance() method of the NumberFormat class returns the instance of the NumberFormat class.



import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class CurrencyFormatter {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        NumberFormat nm = NumberFormat.getCurrencyInstance(Locale.US);
        String us=nm.format(payment);
        NumberFormat n1 = NumberFormat.getCurrencyInstance(new Locale("en", "IN")); // (new Locale("en", "IN") This is giving Rs. as currency format in Java8, not in Java15
        String india = n1.format(payment);
        NumberFormat n2 = NumberFormat.getCurrencyInstance(Locale.CHINA);
        String china = n2.format(payment);
        NumberFormat n3 = NumberFormat.getCurrencyInstance(Locale.FRANCE);
        String france = n3.format(payment);
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}
