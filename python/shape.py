import turtle as mg
import colorsys as cs
mg.setup(800,800)
mg.speed(0)
mg.tracer(10)
mg.width(2)
mg.bgcolor('black')
for j in range(25):
    for i in range(15):
        mg.color(cs.hsv_to_rgb(10, i/15, j/25))
        mg.right(90)
        mg.circle(200-j*4, 90)
        mg.left(90)
        mg.circle(200-j*4, 90)
        mg.right(90)
        mg.circle(50, -24)
mg.done()
