import java.util.*;
import java.lang.*;
public class prime{
      public static void main(String aa[]){
           int s;
           int f=0;
           Scanner s=new Scanner(System.in);
           s=s.nextInt();
          for(int i=2;i<s;i++){
              if(s%i==0){
                  f=1;
                  break;
              }
          }
           if(f==1){
               System.out.println("YES");
           }
         else{
               System.out.println("NO");
         }

}
