#ifndef IMBAPROCESS_H
#define IMBAPROCESS_H
#include <memory>
#include <iostream>
#include <QWidget>

namespace Ui {
class ImbaProcess;
}

class ImbaProcess : public QWidget
{
    Q_OBJECT

public:
    explicit ImbaProcess(QWidget *parent = nullptr);
    ~ImbaProcess();


private:
    Ui::ImbaProcess *ui;


private slots:
    void on_Btn_open_clicked();//文件浏览按钮
    void on_Btn_StarCollect_clicked();//开始采集
    void on_Btn_StopCollect_clicked();//停止相机
    void on_checkBox_Localfile_stateChanged(int state);//选择本地文件 Check BOX
    void on_checkBox_Camera_stateChanged(int state);//打开相机 Check BOX
    void on_Btn_histogram_use_clicked();//图像直方图应用按钮
    void on_Btn_ShowHistogram_clicked();//展示直方图
    void on_Btn_Showimage_clicked()    ;//展示原图
    //图像卷积
    void on_checkBox_ConvolutionaAmbiguity_stateChanged(int state);//卷积模糊
    void on_checkBox_CustomFiltering_stateChanged(int state);//自定义滤波
    void on_checkBox_GradientExtraction_stateChanged(int state);//梯度提取
    void on_checkBox_EdgeDiscovery_stateChanged(int state);//边缘发现
    void on_checkBox_NoiseDenoising_stateChanged(int state);//噪声与去噪
    void on_checkBox_EdgeRetentionFiltering_stateChanged(int state);//边缘保留滤波
    void on_checkBox_SharpeningEnhancement_stateChanged(int state);//锐化增强
    //二值分析
    void on_checkBox_thresholdSegmentation_stateChanged(int state);//图像阈值化分割
    void on_checkBox_GlobalComputing_stateChanged(int state);//全阈值计算
    void on_checkBox_AdaptiveComputing_stateChanged(int state);//自适应阈值计算
    void on_checkBox_Binaryzation_stateChanged(int state);//去噪二值化
    void on_checkBox_ConnectingElement_stateChanged(int state);//联通组件标记
    void on_checkBox_ContourDiscovery_stateChanged(int state);//轮廓发现
    void on_checkBox_FittingApproximation_stateChanged(int state);//拟合与逼近
    void on_checkBox_ContourAnalyse_stateChanged(int state);//轮廓分析
    void on_checkBox_LineDetection_stateChanged(int state);//直线检测
    void on_checkBox_HoffCircleDetection_stateChanged(int state);//霍夫圆检测
    void on_checkBox_BigSmallCircle_stateChanged(int state);//最大内接圆和最小外接圆
    void on_BtnContoursMatchShapopen_clicked();//轮廓匹配待查找对象打开文件
    void on_checkBox_ContourMaching_stateChanged(int state);//轮廓匹配
    void on_checkBox_KeyPiontCoding_stateChanged(int state);//关键点编码
    void on_checkBox_ConvexDetection_stateChanged(int state);//凸包检测
    //形态学分析

    void on_checkBox_StardiateErode_stateChanged(int state);//膨胀与腐蚀操作
    void on_checkBox_StarOpenOrClose_stateChanged(int state);//开闭操作
    void on_checkBox_SartmorphyLogyGrident_stateChanged(int state);//形态学梯度
    void on_checkBox_StarTopBlackheat_stateChanged(int state);//顶帽与黑帽操作
    void on_checkBox_StarHitOrnotHit_stateChanged(int state);//击中与击不中操作
    void on_checkBox_StarCoustmerStruct_stateChanged(int state);//自定义结构性元素操作
    void on_checkBox_StarDistanceChange_stateChanged(int state);//距离变换操作
    void on_checkBox_StarWaterShed_stateChanged(int state);//分水岭分割操作
    //特诊提取
    void on_checkBox_ImagePyramid_stateChanged(int state);//图像金字塔
    void on_checkBox_HarrisDection_stateChanged(int state);//Harris角点检测
    void on_checkBox_shiTomasDection_stateChanged(int state);//shi-tomas角点检测
    void on_checkBox_HogFeature_stateChanged(int state);//HOG特征描述子
    void on_checkBox_ORBFratureDection_stateChanged(int state);//ORB特征描述子
    void on_checkBox_BasicFeatureDection_stateChanged(int state);//基于特征的对象检测
    void on_BtnORBTemplateobject_clicked();//ORB描述子匹配模板对象
    //视频分析
    void on_checkBox_ColorTailAfter_stateChanged(int state);//基于颜色对象跟踪
    void on_checkBox_VideoBlackGroundAnalyse_stateChanged(int state);//视频背景分析
    void on_checkBox_FramDiferenceAnalyse_stateChanged(int state);//基于帧差法分析
    void on_checkBox_SparseOpticalFlow_stateChanged(int state);//稀疏光流
    void on_checkBox_DenseOpticalFlow_stateChanged(int state);//稠密光流
    void on_checkBox_MeanTransfer_stateChanged(int state);//均值迁移




public:
      static std::unique_ptr<ImbaProcess> basicImprocess;//类的智能指针静态对象
};

#endif // IMBAPROCESS_H
