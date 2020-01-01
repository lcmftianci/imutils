/***************************************************************
face align utils
***************************************************************/

#include <opencv2/opencv.hpp>
//https://github.com/davisking/dlib third_party/dlib
//https://github.com/opencv/opencv third_party/opencv
namespace imutils{
    class FaceAligner{
    public:
        FaceAligner();
        virtual ~FaceAligner();

        private:
            void*   _predictor;
            Point   _desiredLeftEye;
            int     _desiredFaceWidth;
            int     _desiredFaceHeight;
    };
}