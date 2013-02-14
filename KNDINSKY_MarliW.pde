//this is static mode. excecutes line by line. sequentioal

background(230, 213, 159);
size(185, 135); // this is the size of my sketch window 
 // this is my ellipse 
                          // ellipse(x, y, w, h)



noFill();
stroke(0);
strokeWeight(1);
ellipse(  180, 50, 30, 30); //right most black outline circle


fill(139, 155, 152);
stroke(1);
strokeWeight(.5);
ellipse( 22, 48, 35, 35);//left blue circle




fill(240, 230, 218);
triangle( 40, 135, 75, 10, 110, 135); //big triangle

noStroke();
fill(255, 199, 58);
triangle(80, 95, 110, 50, 132, 95); //yellow triangle

noFill();
stroke(0);
strokeWeight(2);
triangle( 40, 135, 75, 10, 110, 135);



fill(178, 165, 131);
stroke(0);
strokeWeight(2);
ellipse(  148, 98, 40, 40);//bottom right outter circle

fill(80, 97, 140);
stroke(200);
strokeWeight(1);
ellipse(  148, 98, 30, 30);//bottom right blue cirlce

stroke(0);
strokeWeight(3);
line( 0, 82, 82, 135);
line( 0, 118, 40, 135);
strokeWeight(2);
line( 178, 0, 178, 135);
line( 182, 0, 182, 135);

strokeWeight(1);
line( 162, 21,185,21);
line( 162, 23, 185, 23);

line( 162, 120,185,120);
line( 162, 122, 185, 122);
line( 162, 124, 185, 124);


 //triange (x1, y1, x2, y2, x3, y3)
