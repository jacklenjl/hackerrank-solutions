import java.io.*;
import java.net.*;

class servertesteven{
    
    public static void main(String[] args)throws Exception
    {
        ServerSocket ssoc;
        Socket soc;
        BufferedReader cin;
        PrintWriter out;
        String str="",rply="";
        ssoc=new ServerSocket(1500);
        System.out.println("server Started -----");
        while(true)
        {
            soc=ssoc.accept();
            cin=new BufferedReader(new InputStreamReader(soc.getInputStream()));
            out=new PrintWriter(new OutputStreamWriter(soc.getOutputStream()));
            str=cin.readLine();
            System.out.println(str);
            int n=Integer.parseInt(str);
            int flag=0;
            if(n%2==0)
                rply="this is even";
            else
                rply="this is odd";
            out.println(rply);
            out.flush();
            
        }
        
        
        
        
    }
    
    
    
}