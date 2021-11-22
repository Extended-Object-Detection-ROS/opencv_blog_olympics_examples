# opencv_blog_olympics_examples
Object base, simple application and test images for OpenCV Blog Olympic contest.

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
Please install QT GUI https://github.com/Extended-Object-Detection-ROS/qt_gui_eod  
With it do next steps:  
Open object base at `objectbase/ObjectBase.xml`  
Open image from `images`  
Select\unselect objects to detect  
Click `Detect!` button  
