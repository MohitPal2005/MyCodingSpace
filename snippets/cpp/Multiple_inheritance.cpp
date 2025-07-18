#include<iostream>
using namespace std;

class Device
{
    protected:
        string brand;
        int batterylie;
    public:
        Device(string b,int ba)
        {
            brand=b;
            batterylie=ba;
        }
        void showDeviceInfo()
        {
            cout<<"The Brand of device is: "<<brand<<endl;
            cout<<"The Batterylife of device is: "<<batterylie<<endl;
        }
};

class Camera
{
    protected:
        int cameraResolution;
    public:
        Camera(int c)
        {
            cameraResolution=c;
        }
        void showCameraSpecs()
        {
            cout<<"The Camera-Resolution is: "<<cameraResolution<<endl;
        }
};

class SmartPhone : public Device, public Camera
{
    string OS;
    public:
        SmartPhone(string brand,int batterylie,int cameraResolution,string O):Device(brand,batterylie),Camera(cameraResolution)
        {
            OS=O;
        }
        void showFullSpecs()
        {
            showDeviceInfo();
            showCameraSpecs();
            cout<<"Operating System: "<<OS<<endl;
        }

};

int main()
{
    SmartPhone obj("Samsung", 5000, 108, "Android");
    obj.showFullSpecs();
}