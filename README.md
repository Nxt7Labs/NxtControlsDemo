# NxtControlsDemo
Preview of upcoming customizable MFC UI controls from Nxt7Labs — a lightweight demo showcasing modern native Windows components.

# NxtControlsDemo (Preview Release)

A lightweight preview of Nxt7Labs’ upcoming Windows UI control library.
This demo showcases the first custom MFC control we’re releasing — a fully customizable NxtButton designed for modern Windows desktop applications.

# Purpose of This Repository
This repo is not the complete toolkit — this initial release includes only the custom Button control, giving you a taste of the upcoming suite of controls.

It serves to:
* Demonstrate the design quality and implementation style
* Give developers a glimpse of upcoming MFC and C++ UI components
* Provide sample patterns you can use in your own projects
* Build transparency and trust before paid releases
* Collect feedback from the community

Full commercial versions will include:
* More controls
* Full customization APIs
* High-DPI support
* Documentation
* DLL/LIB builds
* Extended features and themes

# Technologies
* C++
* MFC
* Windows x64 / GDI / GDI+
* Visual Studio 2019 / 2022

# How to Build
1 Clone the repo
2 Open NxtControlsDemo.sln in Visual Studio
3 Build and run

# NxtButton Features
* Customizable background color
* Support for icons and background images
* Hover, pressed, and disabled states
* Smooth, modern rendering

# How to use in your project

1. Add a normal MFC button control to your dialog or form view and create a variable as show below.
<img width="832" height="622" alt="image" src="https://github.com/user-attachments/assets/b58073c1-2510-4de8-bf5a-61396e5ea0b3" />

2. Set the Owner Draw property if Button as TRUE

<img width="1137" height="628" alt="image" src="https://github.com/user-attachments/assets/558b4410-548b-49eb-b46a-22a42e17211c" />


3.  Must copy Imgs, NxControls, NxtControlsLibd.dll and NxtControlsLib.dll as shown below.

<img width="1151" height="718" alt="image" src="https://github.com/user-attachments/assets/0cb6a212-0340-41d1-88d2-4044125e464a" />

4. Make project settings changes as below.

<img width="1146" height="624" alt="image" src="https://github.com/user-attachments/assets/010f41e4-da22-48af-878c-6090187008ae" />

<img width="1161" height="626" alt="image" src="https://github.com/user-attachments/assets/3e411e43-a657-4e31-ac51-8fc54b643dda" />

<img width="1177" height="643" alt="image" src="https://github.com/user-attachments/assets/adf4996b-7dad-4417-93d8-6d79801f69f4" />

<img width="1069" height="581" alt="image" src="https://github.com/user-attachments/assets/a4110f8f-c72c-4452-8aca-bac9055243b5" />

<img width="1046" height="572" alt="image" src="https://github.com/user-attachments/assets/24382b06-6ea0-4c7b-bbac-b212cfa29e3c" />

<img width="1088" height="594" alt="image" src="https://github.com/user-attachments/assets/e8d9ae46-fa76-4d01-891e-3088998b73ff" />

  
5. Make following changes in the dialog or formview header file.

<img width="780" height="761" alt="image" src="https://github.com/user-attachments/assets/5319c2ff-c2a7-4620-92e9-175b6a4c240f" />

6. Make the following initialization as below in the constructor of dialog or formview.

<img width="896" height="595" alt="image" src="https://github.com/user-attachments/assets/23185181-c264-4a67-9534-8a952b45b0bb" />




   
