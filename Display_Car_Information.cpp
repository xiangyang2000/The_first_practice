#include<string>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
#include "CAR.h"

vector<Car_list> v;
void printf_car_information(int i);

int main(){
    string TrolleyNo;
    int i;
    char z;
    ifstream fin("Car_list.txt");
   while (fin.peek()!=EOF)//peek()方法是读取文件指针下一个位置的值，但并不移动文件指针
    {
        Car_list s;
        fin>>s.stu_name>>s.stu_id>>s.TrolleyNo>>s.chassisnumber>>s.ChassisModel>>s.wheelbase>>s.trackwidth>>s.clearance>>s.turningradius;
        fin>>s.Drivingform>>s.Maximumstroke>>s.Tiretype>>s.Tyresize>>s.AGXmodel>>s.AI>>s.Cudacore>>s.TensorCORE;
        fin>>s.Videostorage>>s.storage>>s.cameramodel>>s.camera>>s.frameresolution>>s.framerate>>s.FOV>>s.DepthFrameRate>>s.Lidarmodel;
        fin>>s.channelNumber>>s.Testscope>>s.powerwaste>>s.Gyroscopemodel>>s.manufacturer>>s.Screensize>>s.LCDmodel;
        fin>>s.Batteryparameters>>s.Powersupply>>s.Chargingduration;
        v.push_back(s);
    }

    i=0;//初始化进入程序默认显示第一辆车辆信息
    printf_car_information(i);//输出第i辆小车信息

    while(0<=i<=9)
    {
    cout<<"按n键显示下一辆小车信息,按p显示上一辆小车信息。(请注意,显示第1台显示按p无效,显示第10台小车按n无效)"<<endl;
    cout<<"按q退出"<<endl;
    cin>>z;//键盘输入
    if(z=='p')
        if(i>=1&&i<10)
        {
            i--;
            printf_car_information(i);//输出第i辆小车信息


        }
        else
        {
            cout<<"已经是第一辆小车！"<<endl;
        }
    if(z=='n')
        if(i >=0&&i<9){
            i++;
            printf_car_information(i);//输出第i辆小车信息
   
            }
        else{
            cout<<"已经是最后一辆小车！"<<endl;
        }
    
    if(z=='q')
    {
        break;
    }
    }

    fin.close();
}

void printf_car_information(int i)
{

            cout<<"(1)  编号："<<v[i].TrolleyNo<<endl;
            cout<<"(2)  底盘"<<endl;
            cout<<"    a)  编号:"<<v[i].chassisnumber<<endl;
            cout<<"    b)  型号:"<<v[i].ChassisModel<<endl;
            cout<<"    c)  轴距:"<<v[i].wheelbase<<endl;
            cout<<"    d)  轮距:"<<v[i].trackwidth<<endl;
            cout<<"    e)  最小离地间隙:"<<v[i].clearance<<endl;
            cout<<"    f)  最小转弯半径:"<<v[i].turningradius<<endl;
            cout<<"    g)  驱动形式:"<<v[i].Drivingform<<endl;
            cout<<"    f)  最大行程:"<<v[i].Maximumstroke<<endl;
            cout<<"    i)  轮胎(4个)"<<endl;
            cout<<"         i.  型号:"<<v[i].Tiretype<<endl;
            cout<<"        ii.  尺寸:"<<v[i].Tyresize<<endl;
            cout<<"(3)  AGX套件 (1个)"<<endl;
            cout<<"    a)  型号:"<<v[i].AGXmodel<<endl;
            cout<<"    b)  AI:"<<v[i].AI<<endl;
            cout<<"    c)  CUDA核心:"<<v[i].Cudacore<<endl;
            cout<<"    d)  Tensor CORE:"<<v[i].TensorCORE<<endl;
            cout<<"    e)  显存:"<<v[i].Videostorage<<endl;
            cout<<"    f)  存储:"<<v[i].storage<<endl;
            cout<<"(4)  双目摄像头 (1个)"<<endl;
            cout<<"    a)  型号:"<<v[i].cameramodel<<endl;
            cout<<"    b)  摄像头:"<<v[i].camera<<endl;
            cout<<"    c)  RGB帧分辨率:"<<v[i].frameresolution<<endl;
            cout<<"    d)  RGB帧率:"<<v[i].framerate<<endl;
            cout<<"    e)  FOV:"<<v[i].FOV<<endl;
            cout<<"    f)  深度帧率:"<<v[i].DepthFrameRate<<endl;
            cout<<"(5)  多线激光雷达 (1个)"<<endl;
            cout<<"    a)  型号:"<<v[i].Lidarmodel<<endl;
            cout<<"    b)  通道数:"<<v[i].channelNumber<<endl;
            cout<<"    c)  测试范围:"<<v[i].Testscope<<endl;
            cout<<"    d)  功耗:"<<v[i].powerwaste<<endl;
            cout<<"(6)  9轴陀螺仪 (1个)"<<endl;
            cout<<"    a)  型号:"<<v[i].Gyroscopemodel<<endl;
            cout<<"    b)  厂家:"<<v[i].manufacturer<<endl;
            cout<<"(7)  液晶显示屏 (1个)"<<endl;
            cout<<"    a)  尺寸:"<<v[i].Screensize<<endl;
            cout<<"    b)  型号:"<<v[i].LCDmodel<<endl;
            cout<<"(8)  电池模块 (1个)"<<endl;
            cout<<"    a)  参数:"<<v[i].Batteryparameters<<endl;
            cout<<"    b)  对外供电:"<<v[i].Powersupply<<endl;
            cout<<"    c)  充电时间:"<<v[i].Chargingduration<<endl;
            cout<<"学生姓名："<<v[i].stu_name<<",学生学号："<<v[i].stu_id<<endl;


}