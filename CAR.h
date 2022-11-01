#ifndef CAR_H
#define CAR_H
struct Car_list{
    string TrolleyNo;//小车编号
    string chassisnumber;//底盘编号
    string ChassisModel;//底盘型号
    string wheelbase;//底盘轴距
    string trackwidth;//底盘轮距
    string clearance;//最小离地间隙
    string turningradius;//最小转弯半径
    string Drivingform;//驱动形式
    string Maximumstroke;//最大行程
    string Tiretype;//轮胎型号
    string Tyresize;//轮胎尺寸
    string AGXmodel;//AGX型号
    string AI;//AGX AI
    string Cudacore;//CUDA核心
    string TensorCORE;//Tensor CORE
    string Videostorage;//显存
    string storage;//存储
    string cameramodel;//双目摄像头型号
    string camera;//摄像头
    string frameresolution;//RGB帧分辨率
    string framerate;//RGB帧率
    string FOV;//FOV
    string DepthFrameRate;//深度帧率
    string Lidarmodel;//多线激光雷达型号
    string channelNumber;//通道数
    string Testscope;//测试范围
    string powerwaste;//功耗
    string Gyroscopemodel;//陀螺仪型号
    string manufacturer;//厂家
    string Screensize;//液晶显示屏尺寸
    string LCDmodel;//液晶显示屏型号
    string Batteryparameters;//电池参数
    string Powersupply;//对外供电
    string Chargingduration;//充电时长
    string stu_id;//学生学号
    string stu_name;//学生姓名
};
#endif