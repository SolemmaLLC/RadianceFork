# RCSid $Id: CMakeLists.txt,v 1.22 2025/07/24 01:24:01 greg Exp $

set(VERSION_FILE "${radiance_BINARY_DIR}/src/rt/Version.c")
create_version_file("${VERSION_FILE}")

add_library(radiance
  "${VERSION_FILE}"
  ../common/paths.c
  ../common/platform.h
  ../common/random.h
  ambcomp.c
  ambient.c
  ambio.c
  aniso.c
  ashikhmin.c
  dielectric.c
  fprism.c
  freeobjmem.c
  func.c
  glass.c
  initotypes.c
  m_alias.c
  m_brdf.c
  m_bsdf.c
  m_wgmdf.c
  m_clip.c
  m_direct.c
  m_mirror.c
  m_mist.c
  mx_data.c
  mx_func.c
  noise3.c
  normal.c
  o_cone.c
  o_face.c
  o_instance.c
  o_mesh.c
  p_data.c
  p_func.c
  pmap.c
  pmapamb.c
  pmapbias.c
  pmapcontrib.c
  pmapdata.c
  pmapdiag.c
  pmapio.c
  pmapmat.c
  pmapopt.c
  pmapparm.c
  pmaprand.c
  pmapray.c
  pmapsrc.c
  pmaptype.c
  pmcontrib2.c
  pmutil.c
  preload.c
  raytrace.c
  renderopts.c
  source.c
  sphere.c
  srcobstr.c
  srcsamp.c
  srcsupp.c
  t_data.c
  t_func.c
  text.c
  virtuals.c
)

if(WIN32)
  set(rayp_SOURCES raypwin.c)
else()
  set(rayp_SOURCES raypcalls.c)
endif()

add_library(raycalls raycalls.c ${rayp_SOURCES} rayfifo.c)


