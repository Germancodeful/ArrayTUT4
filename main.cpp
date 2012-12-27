/* 
 * File:   main.cpp
 * Author: http://www.youtube.de/germancodeful
 *
 * Created on 12. Dezember 2012, 12:56
 */

#include <stdio.h>



int main(void) {

    int i = 0;
    int j = 0;
    
    char vorname[20] = {"Corina"},
            nachname[20] = {"GeilesStueck"},
            voller_name[40];
    
    while(vorname[i])
    {
        voller_name[i] = vorname[i];
        i++;
        
    } 
    
    voller_name[i++] = ' ';
    
    while(nachname[j])
    {
        voller_name[i] = nachname[j];
        j++;
        i++;
    }
    
    voller_name[i] = '\0';
    
    printf("%s", voller_name);
    
    return 0;
}

