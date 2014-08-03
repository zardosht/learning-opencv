/*
 * DisplayImage.cpp
 *
 *  Created on: Aug 3, 2014
 *      Author: zardosht
 */

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	if(argc != 2){
		cout << "Usage: DisplayImage <image-to-display>"  << endl;
		return -1;
	}

	Mat image;
	image = imread(argv[1], CV_LOAD_IMAGE_COLOR);

	if(!image.data){
		cout << "Could not open or find the image." << endl;
		return -1;
	}

	namedWindow("Display Window", WINDOW_AUTOSIZE);
	imshow("Display Window", image);

	waitKey(0);
	return 0;

}
