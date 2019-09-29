
package networksec;
import java.io.*;

public class poly {
public static void main(String[] args)throws Exception
{
String cipher="",orgtxt="",plaintxt,keyy;
BufferedReader  br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter the plain txt:");
plaintxt=br.readLine();
char key[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
System.out.println("Enter the key:");
keyy=br.readLine();
int m=0,sc=0;
int sum[]=new int[100];

for(int i=0;i<plaintxt.length();i++)
{
int asc=plaintxt.charAt(i);

if(asc==32)
    asc=123-97;
else
    asc=asc-97;
if(m>=keyy.length())
{m=0;}
for(int j=m;j<=m;j++)
{ sc=keyy.charAt(j);
sc=sc-97;
}
m++;
sum[i]=asc+sc;

}
int run[]=new int[100];
StringBuffer sb=new StringBuffer();
StringBuffer jb=new StringBuffer();
for(int k=0;k<plaintxt.length();k++)
{
    if(sum[k]>26)
    {run[k]=sum[k]%26;}
    int a=run[k];
    sb.append(key[a]);
    
}
    System.out.println("Encrypted:"+sb);

m=0;
for(int i=0;i<plaintxt.length();i++)
{

if(m>=keyy.length())
{m=0;}
for(int j=m;j<=m;j++)
{ sc=keyy.charAt(j);
sc=sc-97;
}
m++;
sum[i]=sum[i]-sc;
int a=sum[i];
jb.append(key[a]);
}

 System.out.println("decrypted:"+jb);




}
}
