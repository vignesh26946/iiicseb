import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class lexico{
     public static void main(String aa[]){
        String a;
        Scanner ss=new Scanner(System.in);
        a=ss.next();
        char v[]=a.toCharArray();
        Arrays.sort(v);
        for(int i=0;i<v.length;i++){
            System.out.print(v[i]);
        }
    }
}
