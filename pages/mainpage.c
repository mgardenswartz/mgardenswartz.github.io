/**
 * @file mainpage.c
 * @brief Main Page Documentation for Project
 */

/**
 * @mainpage MAIN PAGE
 *
 * 
 * @section goals Goals
 * - Write drivers over I2C in C for the VL53L0X Time of Flight sensor and a 6-channel color sensor
 * - Use SolidWorks to CAD the external components
 * - Use Fusion 360 to draw the hardware schematics and design a custom PCB
 * - Use CubeIDE to code in C/C++ and understand the different functions of each hardware pin.
 *
 * @section req Requirements
 * This project's requirements are provided by Professor Charlie Revfrem.
 *
 * @subsection electronics_req The Electronics Requirements:
 * - A custom PCB designed around an STM32F411 MCU (or similar) programmed in either C, C++ (or Rust, with permission).
 * - Two or more actuators, such as motors, driving the machine, actuated by suitable electronics, such as motor drivers.
 * - Two or more unique sensors.
 * - Some sort of closed-loop control loop or similarly complex algorithm.
 * - A wireless controller allowing you to command the bot hands-free or to be used as a wireless e-stop. The controller and receiver will be provided to students for use during ME 507.
 *
 * @subsection manufacturing_req The Manufacturing Requirements:
 * - 3D Printing: All custom non-flat parts should likely be manufactured using FDM 3D printing.
 * - PCB Fabrication: Flat parts can be made to order out of PCB material (fiberglass) along with the PCB controlling your robot. This option provides high precision and rigidity.
 * - Laser-cutting: Flat parts can be made quickly and accurately on the laser cutter if the parts are of a suitable material; many materials are not safe to cut with a laser.
 * - Water-jetting: Flat parts not suitable for the laser cutter can be made accurately and quickly using the water-jet.
 *
 * @subsection safety_req The Safety Requirements:
 * - If you use a battery, you need to communicate with your instructor before plugging it in or charging it in the lab.
 * - Your robot must have an emergency stop feature that can be triggered by the provided radio transmitter. For example, releasing the trigger on the transmitter can act as a “dead man’s switch”. The emergency stop must also activate if communication is lost with the wireless controller.
 * - You may also want to include a way to safely grab your robot if it is mobile in nature, just in case your robot gains sentience and goes after one of the operators.
 * - Your robot may not injure a human being or, through inaction, allow a human being to come to harm.
 * - Your robot must obey the orders given it by human beings except where such orders would conflict with the First Law.
 * - Your robot must protect its own existence as long as such protection does not conflict with the First or Second Laws.
 * 
 * @section hardware Hardware
 *  - Conveyor Belt
 *  - 6-Channel Color Sensor
 *  - VL53L0X Time of Flight Sensor
 *  - STM32F411 MCU
 *  - Custom PCB
 *  - DumboRC remote for E-STOP
 * 
 * @section software Software
 * - C++ classes
 * - I2C drivers
 * - GPIO drivers
 * - Timer input capture drivers
 * 
 * @section repository REPOSITORY REFERENCE
 * All code that will be referenced in this portfolio relate to the project is accessible through https://github.com/mgardenswartz/color_sorter_conveyor.
 * 
 * @section info CONTACT INFO
 * 
 * <pre>   
 * <b>Author:</b>         Max Gardenswartz
 * 
 * <b>Email:</b>          mgardens@calpoly.edu
 * 
 * <b>LinkedIn:</b>       https://www.linkedin.com/in/max-gardenswartz/
 * 
 * <b>Phone Number:</b>   +1 (208) 410-9066 
 * 
 * <b>Major:</b>          Mechanical Engineer at Cal Poly San Luis Obispo
 * 
 * <b>Date:</b>           May 21, 2024
 * </pre>
 */
