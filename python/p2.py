from PIL import Image,ImageFilter, ImageEnhance

'''def resize_images(images_name,new_size=(200,200)):
    for image in images_name:
        img=Image.open(image)
        img=img.resize(new_size)
        img.save("resized_"+image)
images = ["nature.jpg"]
resize_images(images)'''

nature_img=Image.open('nature.jpg')
nature=nature_img.convert('L')
#nature.show();
edge_detect=nature_img.filter(ImageFilter.FIND_EDGES)
#edge_detect.show()
contrast=ImageEnhance.Contrast(nature_img).enhance(3.5)
bright=ImageEnhance.Brightness(contrast).enhance(5)
#contrast.show()
bright.show()
