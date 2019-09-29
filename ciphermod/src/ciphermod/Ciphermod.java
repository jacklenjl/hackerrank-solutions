
package ciphermod;

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.InputStreamReader;


public class Ciphermod {

    
    public static void main(String[] args)throws Exception 
    {
        String plaintxt,cipher="";
        int key;
        System.out.println("Enter the key:");
                
DataInputStream ds=new DataInputStream(System.in);
key=Integer.parseInt(ds.readLine());        
BufferedReader br= new BufferedReader(new InputStreamReader (System.in));
        System.out.println("Enter the plain text:");
        plaintxt=br.readLine();
        plaintxt=plaintxt.toLowerCase();
       char c=' ';
       char j=' ';
       StringBuffer sb = new StringBuffer("");
       StringBuffer jb = new StringBuffer("");
      
        for(int i=0;i<plaintxt.length();i++)
        {
        c=plaintxt.charAt(i);
        int x=c;
        if(x>=97 && x<=122)
        {
        x+=key;
        if(x>122)
        {x-=26;}
                             
        }
         c=(char)x;
      sb.append(c);
        j=c;
        int l=j;
        if(l>=97 && l<=122)
        {
        l-=key;
        if(l<97)
        {l+=26;}
                             
        }
     
      j=(char)l;
      jb.append(j);
      
        }

    System.out.println("Encrypted text:"+sb);  
    System.out.println("Decrypted text:"+jb);

    }
     
}
