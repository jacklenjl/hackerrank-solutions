
package networksec;
import java.io.*;
public class Networksec {

    public static void main(String[] args)throws Exception {
String cipher="",orgtxt="",plaintxt;
BufferedReader  br=new BufferedReader(new InputStreamReader(System.in));
plaintxt=br.readLine();
char key[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
for(int i=0;i<plaintxt.length();i++)
{
int asc=plaintxt.charAt(i);
asc=asc-96;

cipher+=key[asc];

}
for(int i=0;i<cipher.length();i++)
{
int asc=cipher.charAt(i);
asc=asc-98;

orgtxt+=key[asc];

}

System.out.println("Encrpted:"+cipher);
System.out.println("decrpted:"+orgtxt);

    }
    
}
