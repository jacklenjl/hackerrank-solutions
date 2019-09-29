
package riphip;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.*;
public class Riphip {

    public static void main(String[] args)throws Exception{
String s1;
        System.out.println("Enter the text:");
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
s1=br.readLine();
String cipher1="",cipher2="";
for (int i=0;i<s1.length();i++)
{
if(i%2==0)
{cipher1=cipher1+""+s1.charAt(i);}

else
{cipher2=cipher2+""+s1.charAt(i);}
}

System.out.println("The Cipher txt is:"+cipher1.concat(cipher2));
    
    cipher1="";
    
    for (int i=0;i<s1.length();i++)
{
if(i%2==0)
{cipher1=cipher1+""+s1.charAt(i);}

else
{cipher1=cipher1+""+s1.charAt(i);}
}
System.out.println("The Decrypted txt is:"+cipher1);
}

}
