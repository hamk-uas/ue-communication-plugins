# ue-communication-plugins
Unreal engine plugins for communication with Thingworx and Thingsboard IoT platforms.

## Installation
The plugins can be used with both C++ projects and Blueprint only projects (however I could not package Blueprint only project) 
#### Blueprint only project installation
To install the plugin for Blueprint project, you have to copy the plugin folder into the Engine folder - the path is most likely to be 
C:/Program Files/Epic Games/UE_4.XX/Engine/Plugins/Runtime/
#### C++ project installation
1. Create a "Plugins" folder in the project folder (the root folder where you have Visual Studio and UPROJECT files).
2. Copy the plugin into the Plugins folder
<br>
You might need to enable plugins, it can be done in the same way as you would enable any other marketplace stuff:
1. In the UE editor go "Edit->Plugins".
2. You should see all the installed plugins and Thingworx/Thingsboard among them.

## Example usage

Create a Blueprint Actor and add Thingsboard/Thingworx component. In the component parameters you can change base url, device id, 
measurements you want to get and username/password to access the measurements.
![Alternate image text](https://i.imgur.com/woB4NAs.png)
<br>
In oder to get the measurements you can use "Get Measurements Array" function, which returns array of structures. Each structure containes 
{Measurement name : Value} pair. You can iterate over all measurements with "For Each Loop". The measurements in the array should be in the 
same order you specified them in the component's parameters.
<br>
![Alternate image text](https://i.imgur.com/wrxJIub.png)
