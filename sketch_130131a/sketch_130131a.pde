// static mode, excuites sexquentally, line by line downwards

size(800, 800); // this is the size of my sketch window
ellipse(150, 10, 10, 15); // this is the ellipse
                          // ellipse (x, y, w, h)

fill(0, 127, 127);
noStroke();
ellipse(375, 350, 15, 50);

noFill();
stroke(127);
strokeWeight(10);
ellipse(width/2, height/2, 50, 60);

noFill();
strokeWeight(2);
line(40, 40, 360, 360);

rect(30, 200, 50, 60);

triangle(10, 10, 0, 60, 60, 60);

noStroke();
point(200, 30);
