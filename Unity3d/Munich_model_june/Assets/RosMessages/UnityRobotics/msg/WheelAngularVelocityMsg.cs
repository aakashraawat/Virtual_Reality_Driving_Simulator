//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.UnityRobotics
{
    [Serializable]
    public class WheelAngularVelocityMsg : Message
    {
        public const string k_RosMessageName = "unity_robotics_msgs/WheelAngularVelocity";
        public override string RosMessageName => k_RosMessageName;

        //  Angular velocity message
        public double angular_vel;

        public WheelAngularVelocityMsg()
        {
            this.angular_vel = 0.0;
        }

        public WheelAngularVelocityMsg(double angular_vel)
        {
            this.angular_vel = angular_vel;
        }

        public static WheelAngularVelocityMsg Deserialize(MessageDeserializer deserializer) => new WheelAngularVelocityMsg(deserializer);

        private WheelAngularVelocityMsg(MessageDeserializer deserializer)
        {
            deserializer.Read(out this.angular_vel);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.angular_vel);
        }

        public override string ToString()
        {
            return "WheelAngularVelocityMsg: " +
            "\nangular_vel: " + angular_vel.ToString();
        }

#if UNITY_EDITOR
        [UnityEditor.InitializeOnLoadMethod]
#else
        [UnityEngine.RuntimeInitializeOnLoadMethod]
#endif
        public static void Register()
        {
            MessageRegistry.Register(k_RosMessageName, Deserialize);
        }
    }
}