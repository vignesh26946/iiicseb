import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class gcd{
     public static void main(String aa[]){
        int s,b;
        int c=0;
        Scanner s=new Scanner(System.in);
        s=s.nextInt();
        b=s.nextInt();
        for(int i=1;i<=s&&i<=b;i++){
            if(s%i==0&&b%i==0){
               c=i;
            }
        }
        System.out.println(c);
       
    }
}
