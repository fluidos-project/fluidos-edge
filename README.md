# Introduction

This repository outlines the steps to create a basic setup for managing Edge nodes and devices, and is designed to meet [Fluidos project](https://fluidos.eu) requirements. It includes the installation and configuration of various components, such as, Kubernetes, CloudCore, EdgeCore, etc. These steps enable easy access and management of Edge nodes using standard Kubernetes methods from a Fluidos node.

# FLUIDOS Edge Architecture

The following figure depicts the envisioned FLUIDOS Edge multi-layered architecture.

![](doc/installation-guide/drax/figures/Fluidos-edge.png)

# Repository structure

-  [**doc/**](doc/)
   - [**installation-guide**](doc/installation-guide): A comprehensive guide to set up a fully functional Fluidos Edge System
-  [**fw/**](fw/)
   - [**FluidosEdge_STWINBX1_MEMS_BLE2_Binaries/**](fw/FluidosEdge_STWINBX1_MEMS_BLE2_Binaries): Ready to use FLUIDOS firmware for the [STWIN.box - STEVAL-STWINBX1](https://www.st.com/en/evaluation-tools/steval-stwinbx1.html) board. For more information about product specifications, application notes and user manuals please refer to the [ST evaluation tools portal](https://www.st.com/en/evaluation-tools/steval-stwinbx1.html#documentation)
   - [**FluidosEdge_STWINBX1_MEMS_BLE2_Sources/**](fw/FluidosEdge_STWINBX1_MEMS_BLE2_Sources): STWIN.box project source files
-  [**manifests/**](manifests/)
   -  [**samples**](manifests/samples/): various sample yaml file for deploying mappers, setting up the router, etc.
-  [**sw/**](sw/)
   - [**FluidosEdge-System**](https://github.com/otto-tom/FluidosEdge-System): Fluidos Edge System source code
   - [**FluidosEdge-Mappers**](sw/FluidosEdge-Mappers): Fluidos Edge Mappers source code

 In order to ```clone``` this repository with the submodules included, use the command:
```bash
git clone --recurse-submodules https://github.com/fluidos-project/fluidos-edge.git
```
If you do not intend to build the Fluidos Edge System or the Mappers from source you can omit these submodules by using the following command:
```bash
git clone https://github.com/fluidos-project/fluidos-edge.git
``` 
If you have already cloned only the basic repository, and you wish to build the submodules, use this command:
```bash
git submodule update --init --progress
```
Alternatively, if you wish to work only with the Fluidos Edge System submodule:
```bash
git submodule update --init --progress sw/FluidosEdge-System
```
Or if you wish to work only with the Fluidos Edge Mappers submodule:
```bash
git submodule update --init --progress sw/FluidosEdge-Mappers
```