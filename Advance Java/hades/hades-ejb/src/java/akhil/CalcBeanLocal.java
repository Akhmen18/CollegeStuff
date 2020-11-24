/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package akhil;

import javax.ejb.Local;

/**
 *
 * @author akhil
 */
@Local
public interface CalcBeanLocal {

    Integer calcSome(int a);
    
}
