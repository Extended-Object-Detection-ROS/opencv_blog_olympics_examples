# opencv_blog_olympics_examples
Object base, simple application and test images for [OpenCV Blog Olympics](https://learnopencv.com/blog-olympics/) contest.  
This repository is a part of [Extended Object Detection](https://github.com/Extended-Object-Detection-ROS) project.  
For project documentation please [follow link](https://github.com/Extended-Object-Detection-ROS/wiki_english/wiki).  

# Install and run test code
Tested on Linux Kubuntu 20.04 LTS with installed OpenCV 4.2.0
```bash
git clone https://github.com/Extended-Object-Detection-ROS/opencv_blog_olympics_examples --recurse-submodules
cd opencv_blog_olympics_examples/src
mkdir build
cd build
cmake ..
make
./eod_simple_example
```
You will get image with recognized red cup.

# Other tests
Can be performed with two different applications:
## Simple console app
Please install [console app](https://github.com/Extended-Object-Detection-ROS/dummy_console_app)   
From build directory run:  
__Example 1.__  
```
./dummy_console_app <path to opencv_blog_olympics_examples>/objectbase/ObjectBase.xml <path to opencv_blog_olympics_examples>/images/two-cups-on-wooden-table_1373-290.jpg Cup
./dummy_console_app <path to opencv_blog_olympics_examples>/objectbase/ObjectBase.xml <path to opencv_blog_olympics_examples>/images/two-cups-on-wooden-table_1373-290.jpg Reds
./dummy_console_app <path to opencv_blog_olympics_examples>/objectbase/ObjectBase.xml <path to opencv_blog_olympics_examples>/images/two-cups-on-wooden-table_1373-290.jpg RedCup
```
__Example 2.__
```
./dummy_console_app <path to opencv_blog_olympics_examples>/objectbase/ObjectBase.xml <path to opencv_blog_olympics_examples>/images/Midlife-Crisis-Motorcycles.jpg Person Motorcycle
./dummy_console_app <path to opencv_blog_olympics_examples>/objectbase/ObjectBase.xml <path to opencv_blog_olympics_examples>/images/Midlife-Crisis-Motorcycles.jpg Biker
```
And also you can try same with Arny or you own picture
```
./dummy_console_app <path to opencv_blog_olympics_examples>/objectbase/ObjectBase.xml <path to opencv_blog_olympics_examples>/images/judgment_day_alone_75.jpg Person Motorcycle
./dummy_console_app <path to opencv_blog_olympics_examples>/objectbase/ObjectBase.xml <path to opencv_blog_olympics_examples>/images/judgment_day_alone_75.jpg Biker
```
__Example 3.__
```
./dummy_console_app <path to opencv_blog_olympics_examples>/objectbase/ObjectBase.xml <path to opencv_blog_olympics_examples>/imagesmongolia-joy-desert-youth.jpg Person Motorcycle
./dummy_console_app <path to opencv_blog_olympics_examples>/objectbase/ObjectBase.xml <path to opencv_blog_olympics_examples>/images
./dummy_console_app /home/anton/Pictures/opencv_blog_olympics_examples/objectbase/ObjectBase.xml /home/anton/Pictures/opencv_blog_olympics_examples/images/mongolia-joy-desert-youth.jpg TwoPersonsOnMotorcycle
```

## QT GUI app
Please install [QT GUI](https://github.com/Extended-Object-Detection-ROS/qt_gui_eod)  
With it do next steps:  
1. Click `Open ObjectBase...` button and select base at `objectbase/ObjectBase.xml`  
1. Click `Open image...` button and select image from `images` or your own
1. Select\unselect objects to detect at left side of window  
1. Click `Detect!` button  
2. Enjoy the results!
