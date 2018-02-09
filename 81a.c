import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class op{

     public static void main(String aa[]){
     int a;
     int b;
     int c;
     char c;
     Scanner s=new Scanner(System.in);
     a=s.nextInt();
     c=s.next().charAt(0);
       b=s.nextInt();
   switch(c){
       case '+':
            c=a+b;
           System.out.print(c);
           break;
           case '-':
            c=a-b;
           System.out.print(c);
           break;
           case '/':
            c=a/b;
           System.out.print(c);
           break;
           case '%':
           c=a%b;
           System.out.print(c);
           break;
           
   }
}
}
