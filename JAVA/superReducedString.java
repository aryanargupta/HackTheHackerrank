


// *************************************************************************************************************

//  Title: Super Reduced String
//  Original question link : https://www.hackerrank.com/challenges/reduced-string/problem?h_r=profile

// *************************************************************************************************************



import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'superReducedString' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static String superReducedString(String s) {
        // Write your code here
        StringBuilder sb = new StringBuilder(s);
        for(int i =0;  i < sb.length() - 1; i++){
            if(sb.charAt(i)==sb.charAt(i+1)){
                sb.delete(i, i+2);
                i=-1;
            }
        }
        if(sb.length()==0) return "Empty String";
        else return String.valueOf(sb);

    }

//--> In this we need to check to pair of similar characters and if found we need to delete it
//--> So we just compared the character at index at i and i+1 (the next charecter) if both are similar we need to delete it and if not matched we will increase the index
//--> If we found the pair we delete the pair and now set the index to -1 again so that the loop will be traversed again for new pairs

}

public class superReducedString {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String result = Result.superReducedString(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
