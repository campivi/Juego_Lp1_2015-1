/* 
 * File:   Entidad.h
 * Author: alulab14
 *
 * Created on 5 de junio de 2015, 11:11 AM
 */
#include "Saco.h"

#ifndef ENTIDAD_H
#define	ENTIDAD_H

class Entidad {
private:
    int posY;
    int posX;
    int maxVida;
    int VidaActual;
    char* nombre;
    Saco saco;
public:
    Entidad();
    Entidad(const Entidad& orig);
    virtual ~Entidad();
    
    void SetSaco(Saco saco);
    Saco GetSaco() const;
    void SetNombre(char* nombre);
    char* GetNombre() const;
    void SetVidaActual(int VidaActual);
    int GetVidaActual() const;
    void SetMaxVida(int maxVida);
    int GetMaxVida() const;
    void SetPosX(int posX);
    int GetPosX() const;
    void SetPosY(int posY);
    int GetPosY() const;
};

#endif	/* ENTIDAD_H */

