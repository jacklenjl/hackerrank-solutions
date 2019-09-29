/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package EJB;


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import javax.ejb.Stateless;
import java.sql.*;

/**
 *
 * @author Kunal Baghel
 */
@Stateless
public class room implements roomLocal {
    
public int res;
    @Override
    public int checkin(int no) {
  try{     Class.forName("com.mysql.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://localhost/dbb","root","tiger");
        String sql1=" select total,occ from room;";
        Statement st= (Statement) con.createStatement();
        ResultSet rs=st.executeQuery(sql1);
        rs.next();
        int total=rs.getInt(1);
        int occ=rs.getInt(2);
        int free=total-occ;
        res=0;
        if(free>=no)
        {
        
        String sql2="update room set occ=?";
            PreparedStatement ps=con.prepareStatement(sql2);
            ps.setInt(1,occ+no);
         res =ps.executeUpdate();
            return 1;
        }
        else
            return 0;
        
  }catch(Exception e)
  {return 0;}
    }

    @Override
    public int checkout(int no) {
    try{      Class.forName("com.mysql.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://localhost/dbb","root","tiger");
        String sql1="select total,occ from room";
        Statement st=con.createStatement();
        ResultSet rs=st.executeQuery(sql1);
        rs.next();
        
        int total=rs.getInt(1);
        int occ=rs.getInt(2);
       res=0;
        if(occ>no)
        {  String sql2="update room set occ=?";
                      PreparedStatement ps=con.prepareStatement(sql2);
                      ps.setInt(1,occ-no);
                       res=ps.executeUpdate();
                      return 1;
}
        else return 0;
    }catch(Exception e){
           return 0;  }  }

   





}

    // Add business logic below. (Right-click in editor and choose
    // "Insert Code > Add Business Method")

