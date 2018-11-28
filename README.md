# バイリニア補間法 OpenCV with C++

## OpenCVに関する情報
詳しくはリンク先で確認できる.
* [Mat](https://docs.opencv.org/2.4/doc/tutorials/core/mat_the_basic_image_container/mat_the_basic_image_container.html?highlight=mat#mat) : Basically a class with two data parts: the matrix header and a pointer to the matrix containing the pixel values.
* [imread()](https://docs.opencv.org/2.4/modules/highgui/doc/reading_and_writing_images_and_video.html?highlight=imread%20python#imread) : Loads an image from a file.
* [imwrite()](https://docs.opencv.org/2.4/modules/highgui/doc/reading_and_writing_images_and_video.html?highlight=imread%20python#imwrite) : Saves an image to a specified file.
* [cvtColor()](https://docs.opencv.org/2.4/modules/imgproc/doc/miscellaneous_transformations.html?highlight=cvtcolor%20python#cvtcolor) : Converts an image from one color space to another.
* [resize()](https://docs.opencv.org/2.4/modules/imgproc/doc/geometric_transformations.html#void%20resize(InputArray%20src,%20OutputArray%20dst,%20Size%20dsize,%20double%20fx,%20double%20fy,%20int%20interpolation)) : Resizes an image.
* [namedWindow()](https://docs.opencv.org/2.4/modules/highgui/doc/user_interface.html?highlight=namedwindow#namedwindow) : Creates a window.
* [imshow()](https://docs.opencv.org/2.4/modules/highgui/doc/user_interface.html?highlight=namedwindow#imshow) : Displays an image in the specified window

### C言語用
* [CvMat](https://docs.opencv.org/2.4/modules/core/doc/old_basic_structures.html?highlight=cvmat) : struct CvMat, A multi-channel dense matrix.
* [CvSize](https://docs.opencv.org/2.4/modules/core/doc/old_basic_structures.html?highlight=cvmat#cvsize) : struct CvSize, Size of a rectangle or an image.
* [CreateMat](https://docs.opencv.org/2.4/modules/core/doc/old_basic_structures.html?highlight=cvcreatemat#createmat) : Creates a matrix header and allocates the matrix data

## resize関数の注意点
MatlabとOpenCVでは若干デフォルトの設定が違うため注意が必要である.
OpenCVではアンチエイリアシングが実行されていない.

[Matlab imresize()](https://jp.mathworks.com/help/matlab/ref/imresize.html?searchHighlight=AntiAliasing&s_tid=doc_srchtitle) : イメージのサイズ変更
> イメージ縮小時のアンチエイリアシングの実行。'Antialiasing' と論理ブール値 true または false で構成されるコンマ区切りのペアとして指定します。既定値は内挿法に依存します。メソッドが最近傍 ('nearest') の場合、既定値は false です。その他すべての内挿法の場合、既定値は true です。

参考 : [MATLAB vs C++ vs OpenCV - imresize - Stack Overflow](https://stackoverflow.com/questions/26812289/matlab-vs-c-vs-opencv-imresize)

## CMakeLists.txtについて
OpenCV用に下記をCMakeListsに追加した.
詳しくは公式の「[OpenCV: Using OpenCV with gcc and CMake](https://docs.opencv.org/master/db/df5/tutorial_linux_gcc_cmake.html)」を参照.
```
cmake_minimum_required(VERSION 2.8)
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
target_link_libraries( ResizeBilinear ${OpenCV_LIBS} )
```

