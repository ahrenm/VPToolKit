# VPToolKit

Virtual Production ToolKit  
Extreamly Alpha  

This tool kit aims to address some of the common requirements of Virtual Production in Unreal Engine 4.  

Current tutorial video:  
https://youtu.be/YhY0qMEfT8M  

This version has been tested against HTC Vive controllers and puck trackers. No other setups have been tested.  

Currently it supports  
- A custom tracking volume  
- Assiging Actors to trackers (eg virtual cameras)  
- A framework for controlling Level Sequences and Triggerable Actors  

Disclaimers
- Not sure the Tracked Actor Component -> Location Offset, is being applied correctly. Needs to be checked  
- The tracker noise reduction is nasty  
- The tracking volume visulation is a big WIP. I need to come up with some way to handle the virtual forward vector created by the SteamVR Room Setup  