// Flat C exports observed in d3d11.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef D3D11_C_H
#define D3D11_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: CreateDirect3D11SurfaceFromDXGISurface (ABI unverified)
// Export: CreateDirect3D11DeviceFromDXGIDevice (ABI unverified)
// Export: D3D11CoreGetLayeredDeviceSize (ABI unverified)
// Export: D3D11CoreCreateDevice (ABI unverified)
// Export: EnableFeatureLevelUpgrade (ABI unverified)
// Export: D3D11CoreCreateLayeredDevice (ABI unverified)
// Export: D3DPerformance_GetStatus (ABI unverified)
// Export: D3DPerformance_BeginEvent (ABI unverified)
// Export: D3D11CoreRegisterLayers (ABI unverified)
// Export: D3DPerformance_EndEvent (ABI unverified)
// Export: D3D11CreateDeviceAndSwapChain (ABI unverified)
// Export: D3D11CreateDevice (ABI unverified)
// Export: D3DKMTCloseAdapter (ABI unverified)
// Export: D3DKMTCreateAllocation (ABI unverified)
// Export: D3DKMTCreateContext (ABI unverified)
// Export: D3DKMTCreateDevice (ABI unverified)
// Export: D3DKMTCreateSynchronizationObject (ABI unverified)
// Export: D3DKMTDestroyAllocation (ABI unverified)
// Export: D3DKMTDestroyContext (ABI unverified)
// Export: D3DKMTDestroyDevice (ABI unverified)
// Export: D3DKMTDestroySynchronizationObject (ABI unverified)
// Export: D3DKMTGetContextSchedulingPriority (ABI unverified)
// Export: D3DKMTGetDisplayModeList (ABI unverified)
// Export: D3DKMTGetMultisampleMethodList (ABI unverified)
// Export: D3DKMTGetRuntimeData (ABI unverified)
// Export: D3DKMTGetSharedPrimaryHandle (ABI unverified)
// Export: D3DKMTLock (ABI unverified)
// Export: D3DKMTPresent (ABI unverified)
// Export: D3DKMTQueryAllocationResidency (ABI unverified)
// Export: D3DKMTRender (ABI unverified)
// Export: D3DKMTSetAllocationPriority (ABI unverified)
// Export: D3DKMTSetContextSchedulingPriority (ABI unverified)
// Export: D3DKMTSetDisplayMode (ABI unverified)
// Export: D3DKMTSetDisplayPrivateDriverFormat (ABI unverified)
// Export: D3DKMTSetGammaRamp (ABI unverified)
// Export: D3DKMTSetVidPnSourceOwner (ABI unverified)
// Export: D3DKMTSignalSynchronizationObject (ABI unverified)
// Export: D3DKMTUnlock (ABI unverified)
// Export: D3DKMTWaitForSynchronizationObject (ABI unverified)
// Export: D3DKMTWaitForVerticalBlankEvent (ABI unverified)
// Export: D3DPerformance_SetMarker (ABI unverified)
// Export: D3D11CreateDeviceForD3D12 (ABI unverified)
// Export: D3D11On12CreateDevice (ABI unverified)
// Export: D3DKMTQueryAdapterInfo (ABI unverified)
// Export: OpenAdapter10 (ABI unverified)
// Export: OpenAdapter10_2 (ABI unverified)
// Export: D3DKMTEscape (ABI unverified)
// Export: D3DKMTGetDeviceState (ABI unverified)
// Export: D3DKMTOpenAdapterFromHdc (ABI unverified)
// Export: D3DKMTOpenResource (ABI unverified)
// Export: D3DKMTQueryResourceInfo (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // D3D11_C_H
