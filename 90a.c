import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class alph{
     public static void main(String aa[]){
        String a;
        Scanner ss=new Scanner(System.in);
        a=ss.next();
        char v[]=a.toCharArray();
        for(int i=0;i<v.length;i++){
            if(Character.isDigit(v[i])){
                System.out.print(v[i]);
            }
        }
    }
}
