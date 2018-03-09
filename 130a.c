import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class rotat {
     public static void main(String aa[]){
     int a;
     Scanner s=new Scanner(System.in);
     a=s.nextInt();
     int k=s.nextInt();
     ArrayList<Integer>a=new ArrayList<Integer>();
     for(int i=0;i<a;i++){
        int c=s.nextInt();
        a.add(c);
     }
     Collections.rotate(a,k );
     for(int d:a){
         System.out.printf("%d ", d);
     }

    }

}
