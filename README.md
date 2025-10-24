# DLBFoam-Hydrogen-Tutorials
This repository provides advanced hydrogen combustion tutorial cases with enhanced transport modelling with [FickianTransportFoam](https://github.com/Aalto-CFD/FickianTransportFoam) and chemistry acceleration with [DLBFoam](https://github.com/Aalto-CFD/DLBFoam) for OpenFOAM.

The detailed discussion and validation of the provided tutorial cases are openly available in Ref. [[1]](#1)

The field data and mesh files that are too large to fit in github are aviable in https://doi.org/10.23729/fd-d0f0dedb-1e92-35b0-b1e4-da3e58435ea4
## Tutorial cases

The provided tutorial cases represent the following:

* [2D laminar freely propagating premixed flame](2D_planar_flame/README.md)
* [2D axi-symmetric laminar non-premixed jet flame](2D_jet_flame/README.md)
* [3D turbulent non-premixed flame (HYLON, Flame A)](3D_HYLON_flame_A/README.md)
* [3D turbulent premixed flame (AHEAD)](3D_AHEAD/README.md)

Chemistry is modeled using the chemical kinetic mechanism of Capurso et al. [[3]](#3). Source code for the PyJac generated analytical Jacobian is given in the *mech* folder. Compile the Jacobian first by executing *./Allwmake* before running the tutorials and make sure that you have a valid OpenFOAM 10 installation with DLBFoam and FickianTransportFoam libraries.

As there are many more experimental benchmarks of various combustion phenomena that have not been tested, we would be happy to receive your contribution using the **DLBFoam** and reporting the speed-up and scaling effects against standard solvers.


## Citation

If you use our tutorial cases, please cite the paper discussing these test cases [[1]](#1), together with the DLBFoam paper noted in Ref. [[2]](#2).

## References
<a id="1">[1]</a>
A. Haider, I. Morev, A. Rintanen, Z. Shahin, P. Tamadonfar, S. Karimkashi, A. Wehrfritz, V. Vuorinen, Accelerated numerical simulations of hydrogen flames: Open-source implementation of an advanced diffusion model library in OpenFOAM

<a id="2">[2]</a> 
I. Morev, B. Tekgül, M. Gadalla, A. Shahanaghi, J. Kannan, S. Karimkashi, O. Kaario, V. Vuorinen, Fast reactive flow simulations using analytical Jacobian and dynamic load balancing in OpenFOAM, Physics of Fluids 34, 021801, [10.1063/5.0077437](https://doi.org/10.1063/5.0077437) (2022).
<details>
<summary>BibTex</summary>
<p>
 
```
@article{morev2022fast,
  author = {Morev,Ilya  and Tekg{\"u}l,Bulut  and Gadalla,Mahmoud  and Shahanaghi,Ali  and Kannan,Jeevananthan  and Karimkashi,Shervin  and Kaario,Ossi  and Vuorinen,Ville },
  title = {{Fast reactive flow simulations using analytical Jacobian and dynamic load balancing in OpenFOAM}},
  journal = {Physics of Fluids},
  volume = {34},
  number = {2},
  pages = {021801},
  year = {2022},
  doi = {10.1063/5.0077437},
}
```
</p>
</details>

<a id="3">[3]</a> 
T. Capurso, D. Laera, E. Riber, and B. Cuenot, “NOx pathways in lean partially premixed swirling H2-air turbulent flame,” Combustion and Flame, vol. 248, p. 112581, Feb. 2023

