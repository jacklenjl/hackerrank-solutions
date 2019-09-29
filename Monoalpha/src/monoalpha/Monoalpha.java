
package monoalpha;
import java.io.*;
public class Monoalpha {

    public static void main(String[] args)throws IOException
    
    {
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
char[] key={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
System.out.println("Enter the plain txt:");
String plaintxt=br.readLine();
String ciphertxt="";
String origtxt="";
plaintxt.toLowerCase();
for(int i=0;i < plaintxt.length();i++)
{
    int asc=plaintxt.charAt(i);
    asc=asc-96;   
    char c=key[asc];
ciphertxt+=c;
}  
for(int i=0;i < ciphertxt.length();i++)
{
int asc=ciphertxt.charAt(i);
asc= asc-98;
char c=key[asc];
origtxt+=c;
    
}
        
        System.out.println("Encrpted txt:"+ciphertxt);
        System.out.println("decpted txt:"+origtxt);
   
    }
   

    }

