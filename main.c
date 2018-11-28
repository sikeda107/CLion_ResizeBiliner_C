#include <stdio.h>
//#include <opencv2/core/core_c.h>
//#include <opencv2/core/types_c.h>
#include <highgui.h>
#include <opencv2/imgcodecs/imgcodecs_c.h>

int main(int argc, char **argv) {
    char filename[30] = "../INPUT/test_pos_1.ppm";
    CvMat *image, *gray, output;
    CvSize outsize;

    image = cvLoadImageM(filename, 1 );
    if (image == NULL) {
        printf("No image data \n");
        return -1;
    }
//    gray = cvCreateMat(image->rows, image->cols, image->type);
    gray = cvCreateMat(480, 640, 1111638032);
//    //  void cvtColor(InputArray src, OutputArray dst, int code, int dstCn=0 )
    cvCvtColor(image, &gray, 1);
//    // resize(InputArray src, OutputArray dst, Size dsize, double fx=0, double
//    // fy=0, int interpolation=INTER_LINEAR )
//    outsize =
//            Size(round(image.cols * (1.0 / 1.25)), round(image.rows * (1.0 / 1.25)));
//    resize(gray, output, outsize, 0, 0, INTER_LINEAR);
//
//    //    ファイルに出力
//    imwrite("../OUTPUT/gray.pgm", gray);
//    imwrite("../OUTPUT/output.pgm", output);

    //    画面にそのまま表示
    cvNamedWindow("Display Image", CV_WINDOW_AUTOSIZE );
    cvShowImage("RGB Image", image);
    cvShowImage("Gray Image", gray);
    cvWaitKey(0);
    /*
    imshow("Display Gray", gray);
    imshow("Display Bilinear", output);
     */
    return 0;
}
