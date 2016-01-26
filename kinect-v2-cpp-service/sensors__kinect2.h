//This file is automatically generated. DO NOT EDIT!

#include <RobotRaconteur.h>
#include <boost/signals2.hpp>
#pragma once

namespace sensors
{
namespace kinect2
{

class KinectBody;
class KinectMultiSource;
class Image;
class DepthImage;
class ImageHeader;
class Kinect;

class KinectBody : public RobotRaconteur::RRStructure {
public:
uint64_t tracking_id;
uint8_t tracked;
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > lean;
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > joint_positions;
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > joint_orientations;
RR_SHARED_PTR<RobotRaconteur::RRArray<uint8_t > > joint_tracking_state;
RR_SHARED_PTR<RobotRaconteur::RRArray<uint8_t > > hand_state;
RR_SHARED_PTR<RobotRaconteur::RRArray<uint8_t > > hand_confidence;

virtual std::string RRType() {return "sensors.kinect2.KinectBody";  }
};

class KinectMultiSource : public RobotRaconteur::RRStructure {
public:
uint8_t Color;
uint8_t Depth;
uint8_t Infrared;
uint8_t Body;
uint8_t BodyIndex;
uint8_t LongExposureInfrared;

virtual std::string RRType() {return "sensors.kinect2.KinectMultiSource";  }
};

class Image : public RobotRaconteur::RRStructure {
public:
int32_t width;
int32_t height;
int32_t channels;
RR_SHARED_PTR<RobotRaconteur::RRArray<uint8_t > > data;

virtual std::string RRType() {return "sensors.kinect2.Image";  }
};

class DepthImage : public RobotRaconteur::RRStructure {
public:
int32_t width;
int32_t height;
int32_t channels;
RR_SHARED_PTR<RobotRaconteur::RRArray<uint16_t > > data;

virtual std::string RRType() {return "sensors.kinect2.DepthImage";  }
};

class ImageHeader : public RobotRaconteur::RRStructure {
public:
int32_t width;
int32_t height;
int32_t channels;
uint8_t step;

virtual std::string RRType() {return "sensors.kinect2.ImageHeader";  }
};

class Kinect : public virtual RobotRaconteur::RRObject
{
public:
virtual uint8_t EnableSensors(RR_SHARED_PTR<KinectMultiSource > s)=0;

virtual uint8_t DisableSensors()=0;

virtual RR_SHARED_PTR<KinectMultiSource > SensorsEnabled()=0;

virtual RR_SHARED_PTR<ImageHeader > getColorImageHeader()=0;

virtual RR_SHARED_PTR<ImageHeader > getDepthImageHeader()=0;

virtual RR_SHARED_PTR<Image > getCurrentColorImage()=0;

virtual RR_SHARED_PTR<DepthImage > getCurrentDepthImage()=0;

virtual RR_SHARED_PTR<DepthImage > getCurrentInfraredImage()=0;

virtual RR_SHARED_PTR<Image > getCurrentBodyIndexImage()=0;

virtual RR_SHARED_PTR<DepthImage > getCurrentLongExposureInfraredImage()=0;

virtual RR_SHARED_PTR<RobotRaconteur::RRArray<uint64_t > > getTrackedBodyIDs()=0;

virtual RR_SHARED_PTR<KinectBody > getDetectedBody(int32_t index)=0;

virtual std::string RRType() {return "sensors.kinect2.Kinect";  }
};

}
}

