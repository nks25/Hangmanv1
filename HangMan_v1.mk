##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=HangMan_v1
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/Subh/Documents/New WorkSpace"
ProjectPath            :="C:/Users/Subh/Documents/New WorkSpace/HangMan_v1"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Subh
Date                   :=11/08/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="HangMan_v1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -std=c++17 -std=c++14 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -std=c99 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_Frames.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Library_PartialWord.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Library_WordContainer.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Frames.cpp$(ObjectSuffix): src/Frames.cpp $(IntermediateDirectory)/src_Frames.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Subh/Documents/New WorkSpace/HangMan_v1/src/Frames.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Frames.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Frames.cpp$(DependSuffix): src/Frames.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Frames.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Frames.cpp$(DependSuffix) -MM src/Frames.cpp

$(IntermediateDirectory)/src_Frames.cpp$(PreprocessSuffix): src/Frames.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Frames.cpp$(PreprocessSuffix) src/Frames.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Subh/Documents/New WorkSpace/HangMan_v1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/src_Library_PartialWord.cpp$(ObjectSuffix): src/Library/PartialWord.cpp $(IntermediateDirectory)/src_Library_PartialWord.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Subh/Documents/New WorkSpace/HangMan_v1/src/Library/PartialWord.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Library_PartialWord.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Library_PartialWord.cpp$(DependSuffix): src/Library/PartialWord.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Library_PartialWord.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Library_PartialWord.cpp$(DependSuffix) -MM src/Library/PartialWord.cpp

$(IntermediateDirectory)/src_Library_PartialWord.cpp$(PreprocessSuffix): src/Library/PartialWord.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Library_PartialWord.cpp$(PreprocessSuffix) src/Library/PartialWord.cpp

$(IntermediateDirectory)/src_Library_WordContainer.cpp$(ObjectSuffix): src/Library/WordContainer.cpp $(IntermediateDirectory)/src_Library_WordContainer.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Subh/Documents/New WorkSpace/HangMan_v1/src/Library/WordContainer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Library_WordContainer.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Library_WordContainer.cpp$(DependSuffix): src/Library/WordContainer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Library_WordContainer.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Library_WordContainer.cpp$(DependSuffix) -MM src/Library/WordContainer.cpp

$(IntermediateDirectory)/src_Library_WordContainer.cpp$(PreprocessSuffix): src/Library/WordContainer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Library_WordContainer.cpp$(PreprocessSuffix) src/Library/WordContainer.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


