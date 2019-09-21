from PIL import Image

nature=Image.open('nature.jpg')
width,height=nature.size

for x in range(width):
    for y in range(height):
        pixel_coordinates=(x,y)
        r,g,b=nature.getpixel(pixel_coordinates)
        negative_color=(255-r,255-g,255-b)
        nature.putpixel(pixel_coordinates,negative_color)
        
nature.show()

