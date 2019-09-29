
package networksec;
import java.io.*;
public class simplecol {
    
    public static void main(String[] args)throws Exception{
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
 Boolean test=false;
        System.out.println("Enter the key:");
     String key=br.readLine();
        System.out.println("Enter the col value:");
     int x=Integer.parseInt(br.readLine());
     int arr[][]=new int[100][100];
       do{ 
         int m=0;
         for(int i=0;i<x;i++)
     {
     for(int j=0;j<x;j++)
     {
     if(m<key.length())
         arr[i][j]=key.charAt(m);
   else
         arr[i][j]='x';
     m++;
         System.out.print((char)arr[i][j]);
     }
     System.out.println();
          }
         
     System.out.println("Enter the column number (0 to "+(x-1)+"):");
     int g[]=new int[x];
     for(int i=0;i<x;i++)
     {g[i]=Integer.parseInt(br.readLine());}
     StringBuffer sb=new StringBuffer();
     int h;
     for(int i=0;i<x;i++)
     {
     h=g[i];
     for(int j=0;j<x;j++)
     {
         if(arr[j][h]=='x')
         {}
    else
             sb.append((char)arr[j][h]);
     
     }   
     }  System.out.println("Encrypted text:"+sb);
        System.out.println("mulit it:(y/n)");
        String c=br.readLine();
        if(c.equals("y"))
        { test=true;key=sb.toString(); System.out.println("New key is:"+key); }
        else
            break;
     }while(test=!false);
    }
}
