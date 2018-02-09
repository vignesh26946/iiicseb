import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class opp{

     public static void main(String aa[]){
     int a;
     int b;
     int s;
     char c;
     Scanner s=new Scanner(System.in);
     a=s.nextInt();
     c=s.next().charAt(0);
       b=s.nextInt();
   switch(c){
       case '+':
            s=a+b;
           System.out.print(s);
           break;
           case '-':
            s=a-b;
           System.out.print(s);
           break;
           case '/':
            s=a/b;
           System.out.print(s);
           break;
           case '%':
           s=a%b;
           System.out.print(s);
           break;
           
   }
}
}
