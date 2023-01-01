#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

//int windowWidth=1200;
//int windowHeight=1200;


//double windowWidth=700;
//double windowHeight=700;
double Txval=0;
double Tyval=0;
double sval=1.5;
double txval=0,txval1=0,txvalC=0,txval1C=0, txvalS=0,txval1S=0,txvalCC=0,txvallCC=0;
bool flagScale=false;



// ******************* Front Page ***************************************************



void StartingText()
{
    char text[120];

        sprintf(text, "University of Information Technology & Sciences (UITS)",5.00,8.00);
    glColor3f(0.7, 1.0, 1.0);
    glRasterPos2f( -40 , 45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -42 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text, "A Home City View",5.00,8.00);
    glColor3f(1, 1, 0);
    glRasterPos2f( -30 , 38 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -42 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }




     sprintf(text, "Submitted By:",5.00,8.00);
    glColor3f(0, 0, 1);
    glRasterPos2f( -25 , 31 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -42 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }





        sprintf(text, "Name-Md Rasel Uddin",5.00,8.00);
    glColor3f(0.7, 1, 1);
    glRasterPos2f( -30 , 27 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -42 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "ID-1914551116",5.00,8.00);
    glColor3f(0.7, 1, 1);
    glRasterPos2f( -30 , 24 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -42 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }



    sprintf(text, "Course Code: CSE-308",5.00,8.00);
    glColor3f(0.7, 1, 1);
    glRasterPos2f( -30 , 21 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -42 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }





    sprintf(text, "Course Title: Computer Graphics and Multimedia Lab",5.00,8.00);
    glColor3f(0.7, 1, 1);
    glRasterPos2f( -45 , 18 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -52 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "Submitted To-",5.00,8.00);
    glColor3f(0, 0, 1);
    glRasterPos2f( -40 , 10 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -52 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }




                sprintf(text, "Salim Shadman Ankur, Propa Punam",5.00,8.00);
    glColor3f(0, 0, 1);
    glRasterPos2f( -30 , 6 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -52 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "Please press \`d\' for day mode",5.00,8.00);
    glColor3f(1, 1, 1);
    glRasterPos2f( -30 , -8 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -52 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, " Please press \`n\' for night mode",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -30 , -13 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -42 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}

// end Front Page  ***************************************************************************

















// large green
void Quadr1()
{
    // Quad 1
    glBegin(GL_QUADS);
    //...................
    glVertex2f(-105,67);
    glVertex2f(-105,83);
    glVertex2f(0,83);
    glVertex2f(0,67);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//black
void Quadr2()
{
    // Quad 1
    glBegin(GL_QUADS);
    //.........
    glVertex2f(-95,67);
    glVertex2f(-95,68);
    glVertex2f(0,68);
    glVertex2f(0,67);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//road
void Quadr3()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-95,55);
    glVertex2f(-95,67);
    glVertex2f(0,67);
    glVertex2f(0,55);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//zebra

void Quadl1()
{
    // z 1
    glBegin(GL_QUADS);
    glVertex2f(-95,61);
    glVertex2f(-95,61.6);
    glVertex2f(-83,61.6);
    glVertex2f(-83,61);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadlz1()
{
    // z 2
    glBegin(GL_QUADS);
    glVertex2f(-79,61);
    glVertex2f(-79,61.6);
    glVertex2f(-67,61.6);
    glVertex2f(-67,61);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


void Quadl2()
{
    // z 3
    glBegin(GL_QUADS);
    glVertex2f(-63,61);
    glVertex2f(-63,61.6);
    glVertex2f(-55,61.6);
    glVertex2f(-55,61);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadl3()
{
    // z 4
    glBegin(GL_QUADS);
    glVertex2f(-51,61);
    glVertex2f(-51,61.6);
    glVertex2f(-41,61.6);
    glVertex2f(-41,61);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadl4()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-38,61);
    glVertex2f(-38,61.6);
    glVertex2f(-29,61.6);
    glVertex2f(-29,61);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


void Quadlz4()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-26,61);
    glVertex2f(-26,61.6);
    glVertex2f(-15,61.6);
    glVertex2f(-15,61);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadl5()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-10,61);
    glVertex2f(-10,61.6);
    glVertex2f(0,61.6);
    glVertex2f(0,61);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//car ***************************************************************

void Quadc1()  // unchanged
{
    // Quad 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(-52,56);
    glVertex2f(-52,59);
    glVertex2f(-42,59);
    glVertex2f(-42,56);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();

    //Dala
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.541, 0.169, 0.886);
    glVertex2f(-50,53.5);
    glVertex2f(-51.5,56);
    glVertex2f(-42.5,56);
    glVertex2f(-44,53.5);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();


     // Quad blue
     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.749, 1.000);
    glVertex2f(-50,53.5);
    glVertex2f(-50,56);
    glVertex2f(-44,56);
    glVertex2f(-44,53.5);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();

}

//end car

//----------------------------------------------------------------------

//night Car

void QuadcN()  // unchanged
{
    // Quad 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex2f(-52,56);
    glVertex2f(-52,59);
    glVertex2f(-42,59);
    glVertex2f(-42,56);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();

    //Dala
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.341, 0.169, 0.886);
    glVertex2f(-50,53.5);
    glVertex2f(-51.5,56);
    glVertex2f(-42.5,56);
    glVertex2f(-44,53.5);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();


     // Quad blue
     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.749, .6000);
    glVertex2f(-50,53.5);
    glVertex2f(-50,56);
    glVertex2f(-44,56);
    glVertex2f(-44,53.5);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();

}



//slim green line
void Quadf1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-95,53);
    glVertex2f(-95,54.5);
    glVertex2f(0,54.5);
    glVertex2f(0,53);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//slight blue
void Quadfb1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-95,53);
    glVertex2f(-95,53.30);
    glVertex2f(0,53.30);
    glVertex2f(0,53);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


//sky dust
void Quadf2()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-95,43);
    glVertex2f(-95,53);
    glVertex2f(0,53);
    glVertex2f(0,43);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

// main sky
void Quadf3()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-95,10);
    glVertex2f(-95,43);
    glVertex2f(0,43);
    glVertex2f(0,10);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void poly1() // unchanged
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.878, 1.000, 1.000);
    glVertex2f(-95,43);
    glVertex2f(-75,38);
    glVertex2f(-76,35);
    glVertex2f(-74,34);
    glVertex2f(-70,33);
    glVertex2f(-66,33);
    glVertex2f(-62,35);
    glVertex2f(-57,43);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void poly2() // unchanged
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.878, 1.000, 1.000);
    glVertex2f(-58,43);
        glVertex2f(-57,39);
            glVertex2f(-56,37);
    glVertex2f(-54,35);
        glVertex2f(-52,34);
    //glVertex2f(-52,35);
    glVertex2f(-47,33);
    glVertex2f(-44,33);
    glVertex2f(-39,34);
    glVertex2f(-33,37);
    glVertex2f(-30,43);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void poly3() // unchanged
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.878, 1.000, 1.000);
    glVertex2f(-31,43);
    glVertex2f(-30,39);
    glVertex2f(-29,37);
    glVertex2f(-26,35);
    glVertex2f(-23,34);
    glVertex2f(-19,33);
    glVertex2f(-18,33);
    glVertex2f(-16,34);
    glVertex2f(-16,43);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//tree

//big tree
void tree1() // unchanged
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.420, 0.557, 0.137);
    glVertex2f(-74,53);
    glVertex2f(-73,52);
    glVertex2f(-71,51);
    glVertex2f(-71,46);

    glVertex2f(-69,46);
    glVertex2f(-69,51);
    glVertex2f(-68,52);
    glVertex2f(-66,52);
    glVertex2f(-65,53);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void tree2() // unchanged
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-71,48);
    glVertex2f(-73,48);
    glVertex2f(-74,47);
    glVertex2f(-75,45);
    glVertex2f(-75,42);
    glVertex2f(-74,40);
    glVertex2f(-72,39);
    glVertex2f(-69,38);
    glVertex2f(-66,39);
    glVertex2f(-64,41);
    glVertex2f(-63,44);
    glVertex2f(-63,46);
    glVertex2f(-66,48);
    glVertex2f(-69,48);


    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void tree1u() // unchanged
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.420, 0.557, 0.137);
    glVertex2f(-74,53);
    glVertex2f(-73,52);
    glVertex2f(-71,51);
    glVertex2f(-71,46);

    glVertex2f(-69,46);
    glVertex2f(-69,51);
    glVertex2f(-68,52);
    glVertex2f(-66,52);
    glVertex2f(-65,53);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void tree2u()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-83.25,45);
    glVertex2f(-83.25,53);
    glVertex2f(-82,53);
    glVertex2f(-82,45);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}







//2-storoyed house **************************************************************************************

void house0()
{
    // main large block
    glBegin(GL_QUADS);
    glVertex2f(-19,40);
    glVertex2f(-19,53);
    glVertex2f(-6,53);
    glVertex2f(-6,40);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


void house0b()
{
    // slim black
    glBegin(GL_QUADS);
    glVertex2f(-19,39.50);
    glVertex2f(-19,40);
    glVertex2f(-10,40);
    glVertex2f(-10,39.50);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house1()
{
    // 2nd floor main block
    glBegin(GL_QUADS);
    glVertex2f(-19,34);
    glVertex2f(-19,40);
    glVertex2f(-12,40);
    glVertex2f(-12,34);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Htriangle()
{
    //tin
    glBegin(GL_TRIANGLES);//Denotes the beginning of a group of
    glVertex2f(-15,30);
    glVertex2f(-19.0,34.0);
    glVertex2f(-12.0,34.0);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house2()
{
    // 2nd floor door
    glBegin(GL_QUADS);
    glVertex2f(-16.50,36);
    glVertex2f(-16.50,38);
    glVertex2f(-14.50,38);
    glVertex2f(-14.50,36);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house3()
{
    // 1st floor window
    glBegin(GL_QUADS);
    glVertex2f(-9,42);
    glVertex2f(-9,43.5);
    glVertex2f(-7,43.5);
    glVertex2f(-7,42);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house4()
{
    // 1st floor door
    glBegin(GL_QUADS);
    glVertex2f(-17,47);
    glVertex2f(-17,53);
    glVertex2f(-15,53);
    glVertex2f(-15,47);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}



void s2hchad()
{
    // chad
    glBegin(GL_POLYGON);
    //glColor3f(0.1922, 0.5412, 0.3373);
    glVertex2f(-11,39);
    glVertex2f(-12,40);
    glVertex2f(-6,40);
    glVertex2f(-5,39);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}
void s2hside(){
    // side
    glBegin(GL_POLYGON);
    //glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-6,40);
    glVertex2f(-6,53);
    glVertex2f(-5,51);
    glVertex2f(-5,39);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void s2hside2(){
    // side top floor
    glBegin(GL_POLYGON);
    //glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-12,34);
    glVertex2f(-12,40);
    glVertex2f(-11,39);
    glVertex2f(-11,35);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

// end house ****************************************************************************




//house 2 --> school *******************************************************************

void house21()
{
    // main block
    glBegin(GL_QUADS);
    glVertex2f(-54,40);
    glVertex2f(-54,53);
    glVertex2f(-37,53);
    glVertex2f(-37,40);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house22()
{
    // chad
    glBegin(GL_POLYGON);
    glVertex2f(-52,37);
    glVertex2f(-54,40);
    glVertex2f(-37,40);
    glVertex2f(-35,37);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}
void house220(){
    // side
    glBegin(GL_POLYGON);
    //glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-37,40);
    glVertex2f(-37,53);
    glVertex2f(-35,51);
    glVertex2f(-35,37);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house23()
{
    // school door
    glBegin(GL_QUADS);
    //glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-47.50,49.50);
    glVertex2f(-47.50,53);
    glVertex2f(-43.50,53);
    glVertex2f(-43.50,49.50);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void door1()
{
    // square 1
    glBegin(GL_QUADS);
    //glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-53.50,41);
    glVertex2f(-53.50,43);
    glVertex2f(-51.90,43);
    glVertex2f(-51.90,41);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

// **********************************************************************

//flag
void flag1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-60,42);
    glVertex2f(-60,53);
    glVertex2f(-60.60,53);
    glVertex2f(-60.60,42);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}



void flag2()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-60,42.45);
    glVertex2f(-60,46);
    glVertex2f(-56,46);
    glVertex2f(-56,42.45);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}



//cloud

//small tree

void stree1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glVertex2f(-87,40);
    glVertex2f(-87,44);
    glVertex2f(-86.7,44);
    glVertex2f(-86.7,40);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();

}


void streetri()
{
    glBegin(GL_TRIANGLES);//Denotes the beginning of a group of
    glVertex2f(-86.7,35);
    glVertex2f(-87.5,40.0);
    glVertex2f(-86,40.0);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}





// shahid minar

void sminar()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.0, 0.000);
    glVertex2f(-73,49);
    glVertex2f(-73,53);
    glVertex2f(-72.65,53);
    glVertex2f(-72.65,49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.000, 0.0, 0.000);
    glVertex2f(-73,49);
    glVertex2f(-73,49.25);
    glVertex2f(-71.65,49.25);
    glVertex2f(-71.65,49);
    glEnd(); //Terminates a list of vertices that

    glBegin(GL_QUADS);
    glColor3f(0.000, 0.0, 0.000);
    glVertex2f(-72,49);
    glVertex2f(-72,53);
    glVertex2f(-71.65,53);
    glVertex2f(-71.65,49);
    glEnd();

    glPopMatrix();
}

void sminar2()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.0, 0.000);
    glVertex2f(-73,48);
    glVertex2f(-73,53);
    glVertex2f(-72.65,53);
    glVertex2f(-72.65,48);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.000, 0.0, 0.000);
    glVertex2f(-73,48);
    glVertex2f(-73,48.25);
    glVertex2f(-71.65,48.25);
    glVertex2f(-71.65,48);
    glEnd(); //Terminates a list of vertices that

    glBegin(GL_QUADS);
    glColor3f(0.000, 0.0, 0.000);
    glVertex2f(-72,48);
    glVertex2f(-72,53);
    glVertex2f(-71.65,53);
    glVertex2f(-71.65,48);
    glEnd();

    glPopMatrix();
}

void sminar3()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.0, 0.000);
    glVertex2f(-73,47);
    glVertex2f(-73,53);
    glVertex2f(-72.65,53);
    glVertex2f(-72.65,47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.000, 0.0, 0.000);
    glVertex2f(-73,47);
    glVertex2f(-73,47.25);
    glVertex2f(-71.65,47.25);
    glVertex2f(-71.65,47);
    glEnd(); //Terminates a list of vertices that

    glBegin(GL_QUADS);
    glColor3f(0.000, 0.0, 0.000);
    glVertex2f(-72,47);
    glVertex2f(-72,53);
    glVertex2f(-71.65,53);
    glVertex2f(-71.65,47);
    glEnd();

    glPopMatrix();
}



//Circle
#define PI 3.1416
#include <math.h>


void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void drawFilledCircleS(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 5.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
	//glColor3f(1.0,0.3,0.1);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


void drawFilledCircleCw(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0,0.3,0.1);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


// digonto

void drawFilledCircleD(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}









void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-90, -5, 80, 10);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
//    glViewport(0, 0 ,windowWidth ,windowHeight);


    glPushMatrix();


//large green ******************************************************
glColor3f(0.000, 0.392, 0.000);
    Quadr1();
    //black
        glColor3f(0.0,0.0,0.0);

    Quadr2();
//road ************************************************************
    glColor3f(0.380, 0.3686, 0.3725);

    Quadr3();

    //zebra crossing
        glColor3f(1.0,1.0,1.0);

    Quadl1();
        glColor3f(1,1,1);

    Quadlz1();
        glColor3f(1,1,1);

    Quadl2();
        glColor3f(1.00, 1.000, 1.00);

    Quadl3();
        glColor3f(1,1,1);

    Quadl4();
        glColor3f(1,1,1);

    Quadlz4();
        glColor3f(1,1,1);

    Quadl5();

//slim green ****************************************************************
    glColor3f(0.000, 0.392, 0.000);

    Quadf1();
    //slim blue
        glColor3f(0.2549, 0.4784, 0.5843);

    Quadfb1();

// car ***********************************************************************
    glPushMatrix();
    glTranslatef(txval,0,0);
    Quadc1();
    //chaka
	glColor3f(1.0,1.3,1.1);

    drawFilledCircle(-50,58.6,1.1);
    drawFilledCircle(-44,58.6,1.1);
    glPopMatrix();
    //tyre
    glPushMatrix();
    glColor3f(1.0, 0.0, 1.0);
    glScaled(sval,sval,1);
    glutWireTorus(0.5, 3, 15, 30);
    glPopMatrix();
// end ********************************************************************************



// main sky **************************************************************************************
    glColor3f(0.000, 0.749, 1.000);

    Quadf3();
// end **************************************************************************************

// Digonto **************************************************************************************

    glPushMatrix();
	glColor3f(0.533, 0.8, 0.9176);

    drawFilledCircleD(-87,40,5.0);
    drawFilledCircleD(-74,40,10.0);
    drawFilledCircleD(-55,40,10.0);
    drawFilledCircleD(-30,40,10.0);
    drawFilledCircleD(-11,40,10.0);
    glPopMatrix();
// end ***********************************************************************************


// gray sky **********************************************************************************
    glColor3f(0.4392, 0.494, 0.56078);

    Quadf2();
// end ************************************************************************************



//small tree **************************************************************************
    //stree1();
    //streetri();

    glPushMatrix();
    glTranslatef(-0.5,-1,0);
        glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.5,-1,0);
        glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //1
    glPushMatrix();
    glTranslatef(5,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(5,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //2
     glPushMatrix();
    glTranslatef(10,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(10,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //3
     glPushMatrix();
    glTranslatef(15,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(15,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //4
     glPushMatrix();
    glTranslatef(20,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(20,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //5
     glPushMatrix();
    glTranslatef(25,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(25,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    /////////////

        //1
    glPushMatrix();
    glTranslatef(30,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(30,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //2
     glPushMatrix();
    glTranslatef(35,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(35,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //3
     glPushMatrix();
    glTranslatef(40,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(40,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //4
     glPushMatrix();
    glTranslatef(45,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(45,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //5
     glPushMatrix();
    glTranslatef(50,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(50,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    /////////////////


        //1
    glPushMatrix();
    glTranslatef(55,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(55,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //2
     glPushMatrix();
    glTranslatef(60,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(60,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //3
     glPushMatrix();
    glTranslatef(65,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(65,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //4
     glPushMatrix();
    glTranslatef(70,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(70,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    //5
     glPushMatrix();
    glTranslatef(75,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(75,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

    /////////////

    // last one
    glPushMatrix();
    glTranslatef(80,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(80,-1,0);
            glColor3f(0.000, 0.502, 0.000);

    streetri();
    glPopMatrix();

// end ************************************************************************





//sun *********************************************************************
    glPushMatrix();
    glTranslatef(txvalS,0,0);
    glColor3f(1.0,0.0,0.1);
    drawFilledCircleS(-22,15,3.0);
    glPopMatrix();
// end ***********************************************************************

//cloudCircle **************************************************************
    glPushMatrix();
    //cloud 1
     glTranslatef(txvalCC,0,0);
     	glColor3f(1.0,1.3,1.1);

     drawFilledCircle(-53,23,1.3);
    drawFilledCircle(-54,25,1.5);
     drawFilledCircle(-52,25,1.5);

     //cloud 2
    drawFilledCircle(-15.5,18,1.7);
    drawFilledCircle(-12.5,18,1.7);
    drawFilledCircle(-14,16.5,1.7);
    drawFilledCircle(-14,20,1.7);

     //cloud 3
    drawFilledCircle(-30.5,18,1.7);
    drawFilledCircle(-27.5,18,1.7);
    drawFilledCircle(-29,16.5,1.7);
    drawFilledCircle(-29,20,1.7);

     //cloud 4
    drawFilledCircle(-45.5,18,1.7);
    drawFilledCircle(-42.5,18,1.7);
    drawFilledCircle(-44,16.5,1.7);
    drawFilledCircle(-44,20,1.7);

   glPopMatrix();
// end ******************************************************



// big tree ********************************************************************

    //tree --> big tree
    //tree1();
    //tree2();
    glColor3f(0.000, 0.392, 0.000);

    tree2u();

    glPushMatrix();
    //glTranslatef(82,40,0);
    glColor3f(0.000, 0.392, 0.000);
    drawFilledCircleS(-82.5,44,4.0);
    glPopMatrix();


    //tree --> 2nd big tree
    //tree1();
    //tree2();
    glColor3f(0.000, 0.392, 0.000);

    tree2u();

    glPushMatrix();
    glColor3f(0.000, 0.0, 0.000);
    glTranslatef(42,40,0);
     tree2u();
    drawFilledCircleS(-12.5,44,4.0);
    glPopMatrix();
// end *****************************************************************

// Shahid Minar *************************************************************



    //rokto
    glPushMatrix();
    //glTranslatef(7,9,0);
    glColor3f(1.0,0.0,0.1);
    drawFilledCircleS(-67.9,50,1.6);
    glPopMatrix();

    //1

    sminar();

    //2
    glPushMatrix();
    glTranslatef(2,0,0);
    //glScalef(1,0.99,1);
    sminar2();
    glPopMatrix();

     //3
    glPushMatrix();
    glTranslatef(4,0,0);
    //glScalef(1,0.99,1);
    sminar3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,0,0);
    //glScalef(1,0.99,1);
    sminar3();
    glPopMatrix();

    //4
    glPushMatrix();
    glTranslatef(7,0,0);
    sminar2();
    glPopMatrix();

    //5
    glPushMatrix();
    glTranslatef(9,0,0);
    sminar();
    glPopMatrix();


//end ********************************************

//house ****************************************************************
    glColor3f(0.333, 0.420, 0.184);

    house0();
        glColor3f(0.333, 0.420, 0.184);


    house1();
        glColor3f(0.0, 0.0, 0.0);

    Htriangle();
        glColor3f(0.533, 0.8, 0.9176);

    house2();

    //1st floor window
        glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPushMatrix();
    glTranslatef(-2.5,0,0);
            glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2.5,0,0);
            glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2.5,2,0);
            glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,2,0);
            glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPopMatrix();
    glColor3f(0.6824, 0.996, 0.2);


    house4();
        glColor3f(0.0, 0.0, 0.0);

    house0b();

    glColor3f(1.000, 0.000, 1.000);


    house21();
        glColor3f(0.835, 0.7529, 0.8431);

    house22();
        glColor3f(0.92, 0.514, 0.92);

    house220();
        glColor3f(0.835, 0.7529, 0.8431);

    house23();
    glColor3f(0.835, 0.7529, 0.8431);

    s2hchad();
        glColor3f(0.835, 0.7529, 0.8431);

    s2hside();
        glColor3f(0.835, 0.7529, 0.8431);

    s2hside2();

// school *******************************************************

    // small block
            glColor3f(0.835, 0.7529, 0.8431);

    door1();

    glPushMatrix();
    glTranslatef(2,0,0);
        glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(10,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(14,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();

    //2nd row
    glPushMatrix();
    glTranslatef(0,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(2,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(8,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(10,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(14,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();


    //3rd row
    glPushMatrix();
    glTranslatef(0,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(2,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(8,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(10,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(14,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();

// end *************************************************************************

//flag *********************************************************************
    glColor3f(0.0, 0.0, 0.0);

    flag1();
        glColor3f(0.000, 0.502, 0.000);

    flag2();

    //rokto
    glPushMatrix();
    //glTranslatef(7,9,0);
    glColor3f(1.0,0.0,0.1);
    drawFilledCircleS(-57.9,44.50,0.8);
    glPopMatrix();

// end *********************************************************************


    glutPostRedisplay();
    glColor3ub(255,255,255);//
    glRecti(-210,310,-200,-210);
    glRecti(200,310,210,-210);

    glFlush();
    glutSwapBuffers();
}




void carLight()
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,1);
    glVertex2f(-42,58);
    glColor3f(1,1,0);
    glVertex2f(-38,56);
    glVertex2f(-38,59);
    glEnd();
    glPopMatrix();

}

void starf(){

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,0);
    glVertex2f(-83,16.70);
    glColor3f(1,1,0);
    glVertex2f(-82,18.70);
    glColor3f(1,1,0);
    glVertex2f(-81,17);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,0);
    glVertex2f(-83,18);
    glColor3f(1,1,0);
    glVertex2f(-82,16.20);
    glColor3f(1,1,0);
    glVertex2f(-81,18);

    glEnd();
    glPopMatrix();


    //glPushMatrix();
    //glTranslatef(-35,-40,0);
    //carLight();
    //glPopMatrix();

    //glPushMatrix();
    //glTranslatef(-33,-41,0);
    //glRotatef(90,0,0,1);
    //carLight();
    //glPopMatrix();
}


// Display second +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void displayNight(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-90, -5, 80, 10);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
//    glViewport(0, 0 ,windowWidth ,windowHeight);


    glPushMatrix();


//large green ******************************************************
glColor3f(0.000, 0.192, 0.000);
    Quadr1();
    //black
        glColor3f(0.0,0.0,0.0);

    Quadr2();
//road ************************************************************
    glColor3f(0.090, 0.1086, 0.1025);

    Quadr3();

    //zebra crossing
        glColor3f(.60,.60,.60);

    Quadl1();
        glColor3f(.60,.60,.60);

    Quadlz1();
        glColor3f(.60,.60,.60);

    Quadl2();
        glColor3f(.60,.60,.60);

    Quadl3();
        glColor3f(.60,.60,.60);

    Quadl4();
        glColor3f(.60,.60,.60);

    Quadlz4();
        glColor3f(.60,.60,.60);

    Quadl5();

//slim green ****************************************************************
    glColor3f(0.000, 0.192, 0.000);

    Quadf1();
    //slim blue
        glColor3f(0.1549, 0.2784, 0.2843);

    Quadfb1();

// car ***********************************************************************
    glPushMatrix();
    glTranslatef(txval,0,0);
    QuadcN();
    //chaka
    	glColor3f(.70,.93,.91);

    drawFilledCircle(-50,58.6,1.1);
    drawFilledCircle(-44,58.6,1.1);
    glPopMatrix();

    //car light
    glPushMatrix();
    glTranslatef(txval,0,0);
    carLight();
    glPopMatrix();


    //tyre
    glPushMatrix();
    glColor3f(1.0, 0.0, 1.0);
    glScaled(sval,sval,1);
    glutWireTorus(0.5, 3, 15, 30);
    glPopMatrix();
// end ********************************************************************************


// main sky **************************************************************************************
    glColor3f(0.000, 0.0749, .15000);

    Quadf3();
// end **************************************************************************************

// Digonto **************************************************************************************

    glPushMatrix();
    	glColor3f(0.233, 0.4, 0.4176);

    drawFilledCircleD(-87,40,5.0);
    drawFilledCircleD(-74,40,10.0);
    drawFilledCircleD(-55,40,10.0);
    drawFilledCircleD(-30,40,10.0);
    drawFilledCircleD(-11,40,10.0);
    glPopMatrix();
// end ***********************************************************************************


// gray sky **********************************************************************************
    glColor3f(0.1692, 0.224, 0.20078);

    Quadf2();
// end ************************************************************************************



//small tree **************************************************************************
    //stree1();
    //streetri();

    glPushMatrix();
    glTranslatef(-0.5,-1,0);
        glColor3f(0.000, 0.4502, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.5,-1,0);
        glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //1
    glPushMatrix();
    glTranslatef(5,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(5,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //2
     glPushMatrix();
    glTranslatef(10,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(10,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //3
     glPushMatrix();
    glTranslatef(15,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(15,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //4
     glPushMatrix();
    glTranslatef(20,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(20,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //5
     glPushMatrix();
    glTranslatef(25,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(25,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    /////////////

        //1
    glPushMatrix();
    glTranslatef(30,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(30,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //2
     glPushMatrix();
    glTranslatef(35,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(35,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //3
     glPushMatrix();
    glTranslatef(40,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(40,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //4
     glPushMatrix();
    glTranslatef(45,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(45,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //5
     glPushMatrix();
    glTranslatef(50,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(50,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    /////////////////


        //1
    glPushMatrix();
    glTranslatef(55,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(55,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //2
     glPushMatrix();
    glTranslatef(60,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(60,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //3
     glPushMatrix();
    glTranslatef(65,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(65,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //4
     glPushMatrix();
    glTranslatef(70,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(70,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    //5
     glPushMatrix();
    glTranslatef(75,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(75,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

    /////////////

    // last one
    glPushMatrix();
    glTranslatef(80,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    stree1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(80,-1,0);
            glColor3f(0.000, 0.452, 0.000);

    streetri();
    glPopMatrix();

// end ************************************************************************






//sun --> Moon  *********************************************************************
    glPushMatrix();
    glTranslatef(txvalS,0,0);
    glColor3f(1.0,1.0,1.0);
    drawFilledCircleS(-12,17,3.0);
    glColor3f(0.000, 0.0749, .15000);
    drawFilledCircleS(-13,16,3.0);
    glPopMatrix();


      // glPushMatrix();
        //glColor3f(1,1,1);
        //cloud(50,45);
        //glColor3f(0,0.1,0.1);
        //cloud(48,46);
        //glEnd();
        //glPopMatrix();
// end ***********************************************************************






// Star **************************************************************
    glPushMatrix();
    starf();

    glTranslatef(8,-1.5,0);
    starf();
    glTranslatef(-6,-3,0);
    starf();
    glTranslatef(5,-1.7,0);
    starf();

    //

    glTranslatef(25,3,0);
    starf();

    glTranslatef(10,3,0);
    starf();

    glTranslatef(15,-2,0);
    starf();

     glTranslatef(10,-2,0);
    starf();

   glPopMatrix();


    //glPushMatrix();
    //starf();
   // glPopMatrix();

    //glPushMatrix();
    //glTranslatef(1,-1,0);
    //glTranslatef(15,3,0);
    //glRotatef(45,0,0,1);
    //glScalef(1,2,1);
    //starf();
    //glPopMatrix();

//end star _________________________________________________

// end ******************************************************





//cloudCircle **************************************************************
    glPushMatrix();
    //cloud 1
     glTranslatef(txvalCC,0,0);
     	glColor3f(.70,.93,.91);

     drawFilledCircle(-53,23,1.3);
    drawFilledCircle(-54,25,1.5);
     drawFilledCircle(-52,25,1.5);


     //cloud 3
    drawFilledCircle(-30.5,18,1.7);
    drawFilledCircle(-27.5,18,1.7);
    drawFilledCircle(-29,16.5,1.7);
    drawFilledCircle(-29,19,0.7);
    glPopMatrix();

// end ******************************************************











// big tree ********************************************************************

    //tree --> big tree
    //tree1();
    //tree2();
    //glColor3f(0.000, 0.152, 0.000);

    //tree2u();



    //tree --> 2nd big tree
    //tree1();
    //tree2();
    glColor3f(0.000, 0.152, 0.000);

    tree2u();

      glPushMatrix();
    //glTranslatef(82,40,0);
    glColor3f(0.000, 0.322, 0.000);
    drawFilledCircleS(-82.5,44,4.0);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.000, 0.0, 0.000);
    glTranslatef(42,40,0);
     tree2u();
    drawFilledCircleS(-12.5,44,4.0);
    glPopMatrix();
// end *****************************************************************

// Shahid Minar *************************************************************



    //rokto
    glPushMatrix();
    //glTranslatef(7,9,0);
    glColor3f(.50,0.0,0.1);
    drawFilledCircleS(-67.9,50,1.6);
    glPopMatrix();

    //1

    sminar();

    //2
    glPushMatrix();
    glTranslatef(2,0,0);
    //glScalef(1,0.99,1);
    sminar2();
    glPopMatrix();

     //3
    glPushMatrix();
    glTranslatef(4,0,0);
    //glScalef(1,0.99,1);
    sminar3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,0,0);
    //glScalef(1,0.99,1);
    sminar3();
    glPopMatrix();

    //4
    glPushMatrix();
    glTranslatef(7,0,0);
    sminar2();
    glPopMatrix();

    //5
    glPushMatrix();
    glTranslatef(9,0,0);
    sminar();
    glPopMatrix();


//end ********************************************

//house ****************************************************************
    glColor3f(0.173, 0.220, 0.084);
    //right house main block
    house0();
        glColor3f(0.333, 0.420, 0.184);

    // top main block
    house1();
        glColor3f(0.0, 0.0, 0.0);

    Htriangle();
        glColor3f(0.533, 0.8, 0.9176);
    //second floor window
    house2();

    //1st floor window
        glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPushMatrix();
    glTranslatef(-2.5,0,0);
            glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2.5,0,0);
            glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2.5,2,0);
            glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,2,0);
            glColor3f(0.533, 0.8, 0.9176);

    house3();
    glPopMatrix();
    glColor3f(0.1824, 0.396, 0.29);

    //right house door
    house4();
        //glColor3f(0.0, 0.0, 0.0);

   // house0b();

    glColor3f(.5000, 0.000, .5000);


    house21();
        glColor3f(0.435, 0.4529, 0.4431);

    house22();
        glColor3f(0.435, 0.4529, 0.4431);

    house220();
        glColor3f(0.535, 0.7529, 0.8431);

    house23();
    glColor3f(0.435, 0.4529, 0.4431);

    s2hchad();
        glColor3f(0.435, 0.4529, 0.4431);

    s2hside();
        glColor3f(0.435, 0.4529, 0.4431);

    s2hside2();

// school *******************************************************

    // small block
            glColor3f(0.835, 0.7529, 0.8431);

    door1();

    glPushMatrix();
    glTranslatef(2,0,0);
        glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(10,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(14,0,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();

    //2nd row
    glPushMatrix();
    glTranslatef(0,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(2,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(8,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(10,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(14,2.5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();


    //3rd row
    glPushMatrix();
    glTranslatef(0,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(2,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(8,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(10,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(14,5,0);
            glColor3f(0.835, 0.7529, 0.8431);

    door1();
    glPopMatrix();

// end *************************************************************************

//flag *********************************************************************
    glColor3f(0.0, 0.0, 0.0);

    flag1();
       // glColor3f(0.000, 0.502, 0.000);

    //flag2();

    //rokto
    //glPushMatrix();
    //glTranslatef(7,9,0);
    //glColor3f(1.0,0.0,0.1);
    //drawFilledCircleS(-57.9,44.50,0.8);
    //glPopMatrix();

// end *********************************************************************


    glutPostRedisplay();
    glColor3ub(255,255,255);//
    glRecti(-210,310,-200,-210);
    glRecti(200,310,210,-210);

    glFlush();
    glutSwapBuffers();
}



//end Display 2nd for night +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



// ************************* *************************************

void displayFront()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0.7,0.7,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-60,60,-40,60);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glPushMatrix();
    StartingText();
    glEnd();
    glPopMatrix();
     glFlush();
    glutSwapBuffers();



}
// end *****************************************************************************************





void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'R':
        flagScale=true;
        break;
    case 'r':
        flagScale=false;
        break;



    case 27:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}

//double sval=1;
//double txval=0,txval1=0;
// bool flagScale=false;

///////////////////  2 view


void handleKeypress(unsigned char key, int x, int y) {
switch (key) {
   case  'd':
       glutDestroyWindow(1);
       glutInitWindowSize(1200, 800);

            glutCreateWindow("Home City View");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);
              break;



        case 'n':
           glutDestroyWindow(1);
       glutInitWindowSize(1200, 800);

            glutCreateWindow("Home City View");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displayNight);

            glutPostRedisplay();
            break;

        case 'R':
            flagScale=true;
            break;
        case 'r':
            flagScale=false;
            break;

        case 27: // Escape key
        exit(1);

}
}


/// end







void animate()
{
	if (flagScale == true)
	{
	    //car
		//txval-= 0.005;
		txval+= 0.2;
		if(txval > 50){
           txval = -40;
			//txval1 = 1;
		}

		txvalC-= 0.01;
		if(txvalC < -90){
           txvalC = 5;
		}

        // sun/moon
		txvalS-= 0.02;
		if(txvalS < -80){
           txvalS = 15;
			//txval1 = 1;
		}


		//cloud circle txvalCC
		txvalCC-= 0.07;
		if(txvalCC < -80){
           txvalCC = 50;
		}

		//txvalCC-= 0.1;
		//if(txvalCC < -95){
           //txvalCC = 30;
			//txval1 = 1;
		//}
		//txvalCC-= 0.01;
		//if(txvalCC < -65){
           //txvalCC = -5;
			//txval1 = 1;
		//}

	}
	if (flagScale == false)
	{
		txval = 0;
		txval1 = 0;

		txvalC = 0;
		txval1C = 0;

		txvalS = 0;
		txval1S = 0;

		//circle cloud

		txvalCC=0;
		txvallCC=0;

	}

	glutPostRedisplay();
}

   void init(void)
{
    glClearColor( 0.0f, 0.0f, 0.0f, 1.0f);


}

int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode

glutInitWindowPosition(10,10);
glutInitWindowSize(1200, 800);
glutCreateWindow("Home City View");
glShadeModel( GL_SMOOTH );
glEnable( GL_DEPTH_TEST );

//car animation
//glutKeyboardFunc(myKeyboardFunc);
glutKeyboardFunc(handleKeypress);
init();
glutIdleFunc(animate);

glShadeModel( GL_SMOOTH );



glutDisplayFunc(displayNight);
glutDisplayFunc(display);
glutDisplayFunc(displayFront);




glDepthFunc(GL_LEQUAL);    // Set the type of depth-test

glutMainLoop();
return 0;
}
