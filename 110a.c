import java.util.*;
import java.lang.*;
public class min1{
      public static void main(String aa[]){
       int s;
       int count=0;
       int c;
       ArrayList<Integer>a=new ArrayList<Integer>();
       Scanner s=new Scanner(System.in);
       s=s.nextInt();
       for(int i=0;i<s;i++){
           c=s.nextInt();
           a.add(c);
       }
       System.out.println(Collections.min(a));
       
      
}
