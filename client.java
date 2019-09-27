import java.io.*;
import java.net.*;

class client{
    
    public static void main(String[] args)throws Exception
    {
Socket soc;
        BufferedReader br,cin;
        PrintWriter out;
        soc=new Socket("localhost",1500);
        br=new BufferedReader(new InputStreamReader(System.in));
        cin=new BufferedReader(new InputStreamReader(soc.getInputStream()));
            out=new PrintWriter(new OutputStreamWriter(soc.getOutputStream()));
            System.out.println("Enter the number to check");
        String str=cin.readLine();
        out.println(str);
        out.flush();
        String rply=cin.readLine();
        System.out.println(rply);
    }

}