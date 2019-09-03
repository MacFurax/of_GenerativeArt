# Generative Art

Solution with multiple Generative Art sub-projects.

## Dependencies

OpenFrameWorks 10.1, to compile you need to define an environment variable called OF_ROOT that contains the path to the openframeworks root folder.

- ofxImGui from my fork https://github.com/MacFurax/ofxImGui
- ofxPDSP from my fork https://github.com/MacFurax/ofxPDSP
- ofxAudioFile
- ofxGui
- ofxNetwork
- ofxOsc
- ofxXmlSettings

## Projects

### <Project Name>

Project descriptions

## Template project

The root of the solution contains a Visual Studio template project in the file **Generative Art Base Project.zip.zip**.

To know where to copy it see bellow:

For VS 2015 see:

https://docs.microsoft.com/en-us/visualstudio/ide/how-to-locate-and-organize-project-and-item-templates?view=vs-2015

For VS 2017 see:

https://docs.microsoft.com/en-us/visualstudio/ide/how-to-locate-and-organize-project-and-item-templates?view=vs-2017

For VS 2019 see:

https://docs.microsoft.com/en-us/visualstudio/ide/how-to-locate-and-organize-project-and-item-templates?view=vs-2019

To compile you need to define an environment variable called OF_ROOT that contains the path to the openframeworks root folder.

If you add a new project without the template, you should edit the project file to replace reference to openframeworks rot folder by **$(OF_ROOT)**.

You might need to update the reference to OF root folder by manually editing

* GenerativeArt.sln
* [project_name]/BaseProject.vcxproj
* [project_name]/BaseProject.vcxproj.filters

### Assets for Template projects

Icon and image for template are stored in the assets folder. 



## .gitignore

The gitignore will keep:

- everything in the data folder of each project
- imgui.ini file in bin folder

## .gitattributes

Images file format and zip file are handled by LFS.