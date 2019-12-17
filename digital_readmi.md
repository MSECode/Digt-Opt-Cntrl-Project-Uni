# Balacing a cart-model robot

## Summary

This project was developed as part of the course of Digital and Optimal controls at Aalto University.

Basically, the project consists of the task of balancing a cart-model robot starting from a simple PID control approach and leading, at the end, with a more complet model made of state observer and Linear Quadraic Regulator (LQR) controller.

## Explanation of the project

**Brief explanation of the sections**

The project was divided into three main parts:

- **Laboratory A**: Static and dynamic analysis of the robot model. Linearized equation of morion and space-state (SS) model. PID design and disturbances modelling.
- **Laboratory B**: Calibration and State Observer designing. Defined the full and reduced Luenberger observers.
- **Laboratory C**: Complete discretization of the model. LQR approach for controller and final testing.

**Detailed explanation**

### Laboratory A

In order to obtain the Equations of Motion (EOM) the static and dynamic analysis was perormed using the model of the robot shown below.
![Model of the robot ](/images/image_4_readme/model_robot.png)
Moreover, the electronic circuit was based on the model displayed below.
![Model of the robot ](/images/image_4_readme/model_circuit.png)

Therefore, the equations of motion obtained from the defined models were linearized in order to get the linear time-invariant (LTI) state-space (SS) system.

After that, a PID controller was designed using the pole placement method. Furthermore, the system was tested in Simulink adding a signal in input to simulated an external distrurbance.

At the end, the closed-loop system was simulated in Simulink in order to find the maximal value of the disturbance, for which the robot will follow.

### Laboratory B

In this part we started to communicate with the real robot. First of all, the calibration for the gyroscope was performed and the communication checked.
After that, the main task of this part was completed. A reduced and a full Luenberger observers were designed using the pole allocation method because we cannot directly meausure all the state of the system. Therefore, it is necessary to design this kind of observer to simulate some of the states.
At the end of this part, some tests were performed

### Laboratory C

Basically, this part deals with the optimal control designing. Actually, the LQR technique was developed in discrete time in order to obtain an optimal control to the system.

Moreover, a modul for managing external reference was defined, since we would like to give reference inputs to the robot and make it follows them.

At this point, some tests was perfomed on the robot using differents sampling frequencies in order to choose the best one, i.e. the lowest frequency that makes the robot follow sufficiently safely the nastier reference signal.

At the end, the behaviour of the robot was tested with a couple of given reference signals.

Below, the results of some test and of the final demo are shown.
A gif of the robot's behaviour is also proposed at the end.

## Fina tests & outcomes

![Plots for one of the tests ](/images/image_4_readme/test_image.png)

![First given reference signal ](/images/image_4_readme/demo_1.png)

![Second given reference signal ](/images/image_4_readme/demo_2.png)

![Animation of stabilizing robot ](/images/image_4_readme/animation_1.gif)

![Animation of following reference signal ](/images/image_4_readme/animation_2.gif)

---

## Team, license & copyright
