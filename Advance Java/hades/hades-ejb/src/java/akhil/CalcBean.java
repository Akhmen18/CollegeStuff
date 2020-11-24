/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package akhil;

import javax.ejb.Stateless;

/**
 *
 * @author akhil
 */
@Stateless
public class CalcBean implements CalcBeanLocal {

    @Override
    public Integer calcSome(int a) {
        return(a*10);
    }

    
}
