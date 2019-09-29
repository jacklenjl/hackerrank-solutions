/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vernam.cipher;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.*;
import java.util.Arrays;
/**
 *
 * @author Kunal Baghel
 */
public class VernamCipher {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the plain txt:");
String plaintxt=br.readLine();
 System.out.println("Enter the key:");
String key=br.readLine();
int asc=0;int sc=0;
int[] sum = new int[1000];
int m=0;
        System.out.println("key:"+key.length());
        char[] keyy={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
for(int i=0; i < plaintxt.length() ;i++)
{
  asc=plaintxt.charAt(i);
if(asc==32)
{asc=123-97;}
else
{asc=asc-97;}


 for(int j=m;j<=m;j++)
  {  
   sc=key.charAt(j);
   sc=sc-97;
  }
m=m+1;
sum[i]=asc+sc;
    
    }
int[] run = new int[1000];

int a;int b;
StringBuffer sb = new StringBuffer("");

StringBuffer jb = new StringBuffer("");

for(int k=0;k< plaintxt.length();k++)
{
    
    run[k]=sum[k]%26;
    
    a= run[k];
    sb.append(keyy[a]);
    b=(sum[k]/26);
    
    sum[k]=(b*26)+a;
    //System.out.println("run:"+run[k]);
   
   
}   
m=0;
for(int i=0; i < plaintxt.length() ;i++)
{
 


 for(int j=m;j<=m;j++)
  {  
   sc=key.charAt(j);
   sc=sc-97;
  }
    
m=m+1;
    
sum[i]=sum[i]-sc;
a=sum[i];
    

jb.append(keyy[a]);
    }


    System.out.println("encrypt:"+sb);
 System.out.println("decrypt:"+jb);
    }
    
}
