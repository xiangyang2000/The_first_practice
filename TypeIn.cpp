#include<string>
#include<iostream>
#include<fstream>
using namespace std;
#include "CAR.h"
#define car_total_number 10//定义本批次需要录入车辆的数量
int main(){
    int i=1;
    ofstream fout("Car_list.txt");//利用ofstream类的构造函数创建一个文件输出流对象来打开文件 
    while(!cin.eof())//当cin没有处于流尾状态时，循环继续。ctrl+z 再按一次回车就能退出循环了。
    {

        string TrolleyNo;//小车编号
        string chassisnumber="dp888888";//底盘编号
        string ChassisModel="SCOUT_MINI";//底盘型号
        string wheelbase="451mm";//轴距
        string trackwidth="490mm";//轮距
        string clearance="115mm";//最小离地间隙
        string turningradius="0m";//最小转弯半径
        string Drivingform="四轮驱动";//驱动形式
        string Maximumstroke="10KM";//最大行程
        string Tiretype="公路轮、麦克纳姆轮";//轮胎型号
        string Tyresize="175mm";//轮胎尺寸
        string AGXmodel="AGX_Xavier";//AGX型号
        string AI="32_TOPS";//AGX AI
        string Cudacore="512";//CUDA核心
        string TensorCORE="64";//Tensor CORE
        string Videostorage="32G";//显存
        string storage="32G";//存储
        string cameramodel="RealSense_D435i";//双目摄像头型号
        string camera="D340";//摄像头
        string frameresolution="1920*1080";//RGB帧分辨率
        string framerate="30";//RGB帧率
        string FOV="87*58";//FOV
        string DepthFrameRate="90";//深度帧率
        string Lidarmodel="RS-Helios-16p";//多线激光雷达型号
        string channelNumber="16";//通道数
        string Testscope="100m";//测试范围
        string powerwaste="8W";//功耗
        string Gyroscopemodel="CH110";//陀螺仪型号
        string manufacturer="NXP";//厂家
        string Screensize="11.6";//液晶显示屏尺寸
        string LCDmodel="super";//液晶显示屏型号
        string Batteryparameters="24V/15Ah";//电池参数
        string Powersupply="24V";//对外供电
        string Chargingduration="2H";//充电时长

        string stu_id;//学生学号
        string stu_name;//学生姓名
 
 
        cout << "第" << i<< "次输入"  << endl;
        cout<<"(1)小车编号："<<endl;
        cin>>TrolleyNo;
        cout<<"(3)学生学号："<<endl;
        cin>>stu_id;
        cout<<"(2)学生姓名："<<endl;
        cin>>stu_name;


        
        Car_list s={stu_name,stu_id,TrolleyNo,chassisnumber,ChassisModel,wheelbase,trackwidth,clearance,turningradius,Drivingform,Maximumstroke,
        Tiretype,Tyresize,AGXmodel,AI,Cudacore,TensorCORE,Videostorage,storage,cameramodel,camera,frameresolution,framerate,
        FOV,DepthFrameRate,Lidarmodel,channelNumber,Testscope,powerwaste,Gyroscopemodel,manufacturer,Screensize,LCDmodel,
        Batteryparameters,Powersupply,Chargingduration};
        fout<<s.TrolleyNo<<" ";
        fout<<s.chassisnumber<<" ";
        fout<<s.ChassisModel<<" ";
        fout<<s.wheelbase<<" ";
        fout<<s.trackwidth<<" ";
        fout<<s.clearance<<" ";
        fout<<s.turningradius<<" ";
        fout<<s.Drivingform<<" ";
        fout<<s.Maximumstroke<<" ";
        fout<<s.Tiretype<<" ";
        fout<<s.Tyresize<<" ";
        fout<<s.AGXmodel<<" ";
        fout<<s.AI<<" ";
        fout<<s.Cudacore<<" ";
        fout<<s.TensorCORE<<" ";
        fout<<s.Videostorage<<" ";
        fout<<s.storage<<" ";
        fout<<s.cameramodel<<" ";
        fout<<s.camera<<" ";
        fout<<s.frameresolution<<" ";
        fout<<s.framerate<<" ";
        fout<<s.FOV<<" ";
        fout<<s.DepthFrameRate<<" ";
        fout<<s.Lidarmodel<<" ";
        fout<<s.channelNumber<<" ";
        fout<<s.Testscope<<" ";
        fout<<s.powerwaste<<" ";
        fout<<s.Gyroscopemodel<<" ";
        fout<<s.manufacturer<<" ";
        fout<<s.Screensize<<" ";
        fout<<s.LCDmodel<<" ";
        fout<<s.Batteryparameters<<" ";
        fout<<s.Powersupply<<" ";
        fout<<s.Chargingduration<<" ";
        fout<<s.stu_name<<" ";
        fout<<s.stu_id<<endl;

        i++;
        if(i==(car_total_number+1))
        {
            break;
        }


    }
    fout.close();
}