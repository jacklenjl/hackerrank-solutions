
package file.encrp;
import java.io.*;

public class FileEncrp {

    public static void main(String[] args)throws Exception
    {

    FileReader fr=new FileReader("first.txt");
      File f=new File("first.txt");
      int ch; int x=0;
             do
        {
            ch=fr.read();
            if(ch!=-1)
            { //System.out.print(ch);
           
            x=ch*2;
                       
            }            
        }while(ch!=-1);
             
             System.out.print((char)(x/2));
             
        fr.close();
    }
        
        
        
        
        
        
 }
    

