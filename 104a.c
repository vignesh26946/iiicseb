import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class charup{
    public static void main(String aa[]){
    String s;
    int d;
    Scanner s=new Scanner(System.in);
    s=s.nextLine();
    String h[]=s.split("\\s+");
    for(int i=0;i<h.length;i++){
        char c=h[i].charAt(0);
        char t=Character.toUpperCase(c);
        h[i]=h[i].replace(c, t);
    }
    for(String j:h){
        System.out.printf("%s ", j);
    }
   
    
   
           
   }
}
