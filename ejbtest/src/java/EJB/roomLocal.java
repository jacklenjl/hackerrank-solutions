/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package EJB;

import javax.ejb.Local;

/**
 *
 * @author Kunal Baghel
 */
@Local
public interface roomLocal {
 public int checkin(int no);
 public int checkout(int no);
}
