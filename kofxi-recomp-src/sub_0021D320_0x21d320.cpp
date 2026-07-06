#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D320
// Address: 0x21d320 - 0x21d798
void sub_0021D320_0x21d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D320_0x21d320");
#endif

    switch (ctx->pc) {
        case 0x21d33cu: goto label_21d33c;
        case 0x21d34cu: goto label_21d34c;
        case 0x21d35cu: goto label_21d35c;
        case 0x21d36cu: goto label_21d36c;
        case 0x21d37cu: goto label_21d37c;
        case 0x21d38cu: goto label_21d38c;
        case 0x21d39cu: goto label_21d39c;
        case 0x21d3acu: goto label_21d3ac;
        case 0x21d3bcu: goto label_21d3bc;
        case 0x21d3ccu: goto label_21d3cc;
        case 0x21d3dcu: goto label_21d3dc;
        case 0x21d3ecu: goto label_21d3ec;
        case 0x21d3fcu: goto label_21d3fc;
        case 0x21d40cu: goto label_21d40c;
        case 0x21d41cu: goto label_21d41c;
        case 0x21d42cu: goto label_21d42c;
        case 0x21d494u: goto label_21d494;
        case 0x21d4a8u: goto label_21d4a8;
        case 0x21d4bcu: goto label_21d4bc;
        case 0x21d4d0u: goto label_21d4d0;
        case 0x21d4e4u: goto label_21d4e4;
        case 0x21d4f8u: goto label_21d4f8;
        case 0x21d50cu: goto label_21d50c;
        case 0x21d520u: goto label_21d520;
        case 0x21d534u: goto label_21d534;
        case 0x21d548u: goto label_21d548;
        case 0x21d55cu: goto label_21d55c;
        case 0x21d570u: goto label_21d570;
        case 0x21d584u: goto label_21d584;
        case 0x21d598u: goto label_21d598;
        case 0x21d5acu: goto label_21d5ac;
        case 0x21d5c0u: goto label_21d5c0;
        case 0x21d5d0u: goto label_21d5d0;
        case 0x21d63cu: goto label_21d63c;
        case 0x21d650u: goto label_21d650;
        case 0x21d664u: goto label_21d664;
        case 0x21d678u: goto label_21d678;
        case 0x21d68cu: goto label_21d68c;
        case 0x21d6a0u: goto label_21d6a0;
        case 0x21d6b4u: goto label_21d6b4;
        case 0x21d6c8u: goto label_21d6c8;
        case 0x21d6dcu: goto label_21d6dc;
        case 0x21d6f0u: goto label_21d6f0;
        case 0x21d704u: goto label_21d704;
        case 0x21d718u: goto label_21d718;
        case 0x21d72cu: goto label_21d72c;
        case 0x21d740u: goto label_21d740;
        case 0x21d754u: goto label_21d754;
        case 0x21d768u: goto label_21d768;
        case 0x21d770u: goto label_21d770;
        default: break;
    }

    ctx->pc = 0x21d320u;

label_21d320:
    // 0x21d320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d328: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21d328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21d32c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d330: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d334: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D334u;
    SET_GPR_U32(ctx, 31, 0x21D33Cu);
    ctx->pc = 0x21D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D334u;
    // 0x21d338: 0x248418d8  addiu       $a0, $a0, 0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D334u, 0x21D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D33Cu;
label_21d33c:
    // 0x21d33c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d344: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D344u;
    SET_GPR_U32(ctx, 31, 0x21D34Cu);
    ctx->pc = 0x21D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D344u;
    // 0x21d348: 0x24841828  addiu       $a0, $a0, 0x1828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D344u, 0x21D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D34Cu;
label_21d34c:
    // 0x21d34c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d350: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x21d350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x21d354: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D354u;
    SET_GPR_U32(ctx, 31, 0x21D35Cu);
    ctx->pc = 0x21D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D354u;
    // 0x21d358: 0x248418f8  addiu       $a0, $a0, 0x18F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D354u, 0x21D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D35Cu;
label_21d35c:
    // 0x21d35c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d360: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x21d360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21d364: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D364u;
    SET_GPR_U32(ctx, 31, 0x21D36Cu);
    ctx->pc = 0x21D368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D364u;
    // 0x21d368: 0x24841908  addiu       $a0, $a0, 0x1908 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D364u, 0x21D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D36Cu;
label_21d36c:
    // 0x21d36c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d370: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x21d370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x21d374: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D374u;
    SET_GPR_U32(ctx, 31, 0x21D37Cu);
    ctx->pc = 0x21D378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D374u;
    // 0x21d378: 0x24841918  addiu       $a0, $a0, 0x1918 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D374u, 0x21D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D37Cu;
label_21d37c:
    // 0x21d37c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d380: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x21d380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x21d384: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D384u;
    SET_GPR_U32(ctx, 31, 0x21D38Cu);
    ctx->pc = 0x21D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D384u;
    // 0x21d388: 0x24841928  addiu       $a0, $a0, 0x1928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D384u, 0x21D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D38Cu;
label_21d38c:
    // 0x21d38c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d390: 0x26050148  addiu       $a1, $s0, 0x148
    ctx->pc = 0x21d390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x21d394: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D394u;
    SET_GPR_U32(ctx, 31, 0x21D39Cu);
    ctx->pc = 0x21D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D394u;
    // 0x21d398: 0x24841938  addiu       $a0, $a0, 0x1938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D394u, 0x21D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D39Cu;
label_21d39c:
    // 0x21d39c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d3a0: 0x26050248  addiu       $a1, $s0, 0x248
    ctx->pc = 0x21d3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
    // 0x21d3a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D3A4u;
    SET_GPR_U32(ctx, 31, 0x21D3ACu);
    ctx->pc = 0x21D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3A4u;
    // 0x21d3a8: 0x24841948  addiu       $a0, $a0, 0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D3A4u, 0x21D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3ACu;
label_21d3ac:
    // 0x21d3ac: 0x8e050348  lw          $a1, 0x348($s0)
    ctx->pc = 0x21d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
    // 0x21d3b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d3b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D3B4u;
    SET_GPR_U32(ctx, 31, 0x21D3BCu);
    ctx->pc = 0x21D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3B4u;
    // 0x21d3b8: 0x24841958  addiu       $a0, $a0, 0x1958 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D3B4u, 0x21D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3BCu;
label_21d3bc:
    // 0x21d3bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d3c0: 0x2605034c  addiu       $a1, $s0, 0x34C
    ctx->pc = 0x21d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 844));
    // 0x21d3c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D3C4u;
    SET_GPR_U32(ctx, 31, 0x21D3CCu);
    ctx->pc = 0x21D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3C4u;
    // 0x21d3c8: 0x24841968  addiu       $a0, $a0, 0x1968 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D3C4u, 0x21D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3CCu;
label_21d3cc:
    // 0x21d3cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d3d0: 0x26050354  addiu       $a1, $s0, 0x354
    ctx->pc = 0x21d3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 852));
    // 0x21d3d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D3D4u;
    SET_GPR_U32(ctx, 31, 0x21D3DCu);
    ctx->pc = 0x21D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3D4u;
    // 0x21d3d8: 0x24841978  addiu       $a0, $a0, 0x1978 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D3D4u, 0x21D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3DCu;
label_21d3dc:
    // 0x21d3dc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d3e0: 0x26050394  addiu       $a1, $s0, 0x394
    ctx->pc = 0x21d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 916));
    // 0x21d3e4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D3E4u;
    SET_GPR_U32(ctx, 31, 0x21D3ECu);
    ctx->pc = 0x21D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3E4u;
    // 0x21d3e8: 0x24841988  addiu       $a0, $a0, 0x1988 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D3E4u, 0x21D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3ECu;
label_21d3ec:
    // 0x21d3ec: 0x8e0503d4  lw          $a1, 0x3D4($s0)
    ctx->pc = 0x21d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 980)));
    // 0x21d3f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d3f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D3F4u;
    SET_GPR_U32(ctx, 31, 0x21D3FCu);
    ctx->pc = 0x21D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3F4u;
    // 0x21d3f8: 0x24841998  addiu       $a0, $a0, 0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D3F4u, 0x21D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3FCu;
label_21d3fc:
    // 0x21d3fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d400: 0x260503d8  addiu       $a1, $s0, 0x3D8
    ctx->pc = 0x21d400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 984));
    // 0x21d404: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D404u;
    SET_GPR_U32(ctx, 31, 0x21D40Cu);
    ctx->pc = 0x21D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D404u;
    // 0x21d408: 0x248419a8  addiu       $a0, $a0, 0x19A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D404u, 0x21D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D40Cu;
label_21d40c:
    // 0x21d40c: 0x8e050418  lw          $a1, 0x418($s0)
    ctx->pc = 0x21d40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x21d410: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d414: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D414u;
    SET_GPR_U32(ctx, 31, 0x21D41Cu);
    ctx->pc = 0x21D418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D414u;
    // 0x21d418: 0x248419b8  addiu       $a0, $a0, 0x19B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D414u, 0x21D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D41Cu;
label_21d41c:
    // 0x21d41c: 0x8e05041c  lw          $a1, 0x41C($s0)
    ctx->pc = 0x21d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x21d420: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d424: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D424u;
    SET_GPR_U32(ctx, 31, 0x21D42Cu);
    ctx->pc = 0x21D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D424u;
    // 0x21d428: 0x248419c8  addiu       $a0, $a0, 0x19C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D424u, 0x21D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D42Cu;
label_21d42c:
    // 0x21d42c: 0x26100420  addiu       $s0, $s0, 0x420
    ctx->pc = 0x21d42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x21d430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d434: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d438: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d440: 0x248419d8  addiu       $a0, $a0, 0x19D8
    ctx->pc = 0x21d440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6616));
    // 0x21d444: 0x8043e52  j           func_10F948
    ctx->pc = 0x21D444u;
    ctx->pc = 0x21D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D444u;
    // 0x21d448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21D44Cu;
    // 0x21d44c: 0x0  nop
    ctx->pc = 0x21d44cu;
    // NOP
    // 0x21d450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d454: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d454u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d458: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21d45c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21d460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d468: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d46c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21d46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d470: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21d470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21d474: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21d474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d478: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21d478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21d47c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21d47cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d480: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d484: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21d484u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21d488: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21d488u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d48c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21D48Cu;
    SET_GPR_U32(ctx, 31, 0x21D494u);
    ctx->pc = 0x21D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D48Cu;
    // 0x21d490: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x21D48Cu, 0x21D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D494u;
label_21d494:
    // 0x21d494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d498: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d49c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d49cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4a0: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D4A0u;
    SET_GPR_U32(ctx, 31, 0x21D4A8u);
    ctx->pc = 0x21D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4A0u;
    // 0x21d4a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D4A0u, 0x21D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4A8u;
label_21d4a8:
    // 0x21d4a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4b4: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D4B4u;
    SET_GPR_U32(ctx, 31, 0x21D4BCu);
    ctx->pc = 0x21D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4B4u;
    // 0x21d4b8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D4B4u, 0x21D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4BCu;
label_21d4bc:
    // 0x21d4bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4c8: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D4C8u;
    SET_GPR_U32(ctx, 31, 0x21D4D0u);
    ctx->pc = 0x21D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4C8u;
    // 0x21d4cc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D4C8u, 0x21D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4D0u;
label_21d4d0:
    // 0x21d4d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d4d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4dc: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D4DCu;
    SET_GPR_U32(ctx, 31, 0x21D4E4u);
    ctx->pc = 0x21D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4DCu;
    // 0x21d4e0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D4DCu, 0x21D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4E4u;
label_21d4e4:
    // 0x21d4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4f0: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D4F0u;
    SET_GPR_U32(ctx, 31, 0x21D4F8u);
    ctx->pc = 0x21D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4F0u;
    // 0x21d4f4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D4F0u, 0x21D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4F8u;
label_21d4f8:
    // 0x21d4f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d500: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d504: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D504u;
    SET_GPR_U32(ctx, 31, 0x21D50Cu);
    ctx->pc = 0x21D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D504u;
    // 0x21d508: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D504u, 0x21D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D50Cu;
label_21d50c:
    // 0x21d50c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d514: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d518: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21D518u;
    SET_GPR_U32(ctx, 31, 0x21D520u);
    ctx->pc = 0x21D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D518u;
    // 0x21d51c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21D518u, 0x21D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D520u;
label_21d520:
    // 0x21d520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d528: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d52c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21D52Cu;
    SET_GPR_U32(ctx, 31, 0x21D534u);
    ctx->pc = 0x21D530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D52Cu;
    // 0x21d530: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x21D52Cu, 0x21D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D534u;
label_21d534:
    // 0x21d534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d53c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d53cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d540: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D540u;
    SET_GPR_U32(ctx, 31, 0x21D548u);
    ctx->pc = 0x21D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D540u;
    // 0x21d544: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D540u, 0x21D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D548u;
label_21d548:
    // 0x21d548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d54c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d550: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d554: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D554u;
    SET_GPR_U32(ctx, 31, 0x21D55Cu);
    ctx->pc = 0x21D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D554u;
    // 0x21d558: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D554u, 0x21D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D55Cu;
label_21d55c:
    // 0x21d55c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d564: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d568: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21D568u;
    SET_GPR_U32(ctx, 31, 0x21D570u);
    ctx->pc = 0x21D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D568u;
    // 0x21d56c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21D568u, 0x21D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D570u;
label_21d570:
    // 0x21d570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d578: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d57c: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D57Cu;
    SET_GPR_U32(ctx, 31, 0x21D584u);
    ctx->pc = 0x21D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D57Cu;
    // 0x21d580: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D57Cu, 0x21D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D584u;
label_21d584:
    // 0x21d584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d58c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d58cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d590: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21D590u;
    SET_GPR_U32(ctx, 31, 0x21D598u);
    ctx->pc = 0x21D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D590u;
    // 0x21d594: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21D590u, 0x21D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D598u;
label_21d598:
    // 0x21d598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d59c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d5a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5a4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21D5A4u;
    SET_GPR_U32(ctx, 31, 0x21D5ACu);
    ctx->pc = 0x21D5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5A4u;
    // 0x21d5a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21D5A4u, 0x21D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5ACu;
label_21d5ac:
    // 0x21d5ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d5b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5b8: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D5B8u;
    SET_GPR_U32(ctx, 31, 0x21D5C0u);
    ctx->pc = 0x21D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5B8u;
    // 0x21d5bc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D5B8u, 0x21D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5C0u;
label_21d5c0:
    // 0x21d5c0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21d5c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21d5c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21d5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5c8: 0xc0874c8  jal         func_21D320
    ctx->pc = 0x21D5C8u;
    SET_GPR_U32(ctx, 31, 0x21D5D0u);
    ctx->pc = 0x21D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5C8u;
    // 0x21d5cc: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D320u;
    goto label_21d320;
    ctx->pc = 0x21D5D0u;
label_21d5d0:
    // 0x21d5d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21d5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d5d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d5dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d5dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d5e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21d5e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d5e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21d5e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d5e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21d5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21d5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x21D5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5ECu;
        // 0x21d5f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D5F4u;
    // 0x21d5f4: 0x0  nop
    ctx->pc = 0x21d5f4u;
    // NOP
    // 0x21d5f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d5fc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d5fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d600: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21d600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21d604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d608: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d60c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d614: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21d618: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21d618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d61c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21d61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21d620: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21d620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d624: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21d624u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21d628: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d62c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21d62cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d630: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x21d630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21d634: 0xc084582  jal         func_211608
    ctx->pc = 0x21D634u;
    SET_GPR_U32(ctx, 31, 0x21D63Cu);
    ctx->pc = 0x21D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D634u;
    // 0x21d638: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21D634u, 0x21D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D63Cu;
label_21d63c:
    // 0x21d63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d644: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d648: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D648u;
    SET_GPR_U32(ctx, 31, 0x21D650u);
    ctx->pc = 0x21D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D648u;
    // 0x21d64c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D648u, 0x21D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D650u;
label_21d650:
    // 0x21d650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d658: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d65c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D65Cu;
    SET_GPR_U32(ctx, 31, 0x21D664u);
    ctx->pc = 0x21D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D65Cu;
    // 0x21d660: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D65Cu, 0x21D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D664u;
label_21d664:
    // 0x21d664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d668: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d66c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d670: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D670u;
    SET_GPR_U32(ctx, 31, 0x21D678u);
    ctx->pc = 0x21D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D670u;
    // 0x21d674: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D670u, 0x21D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D678u;
label_21d678:
    // 0x21d678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d67c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d680: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d684: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D684u;
    SET_GPR_U32(ctx, 31, 0x21D68Cu);
    ctx->pc = 0x21D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D684u;
    // 0x21d688: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D684u, 0x21D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D68Cu;
label_21d68c:
    // 0x21d68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d690: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d694: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d698: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D698u;
    SET_GPR_U32(ctx, 31, 0x21D6A0u);
    ctx->pc = 0x21D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D698u;
    // 0x21d69c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D698u, 0x21D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6A0u;
label_21d6a0:
    // 0x21d6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6ac: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D6ACu;
    SET_GPR_U32(ctx, 31, 0x21D6B4u);
    ctx->pc = 0x21D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6ACu;
    // 0x21d6b0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D6ACu, 0x21D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6B4u;
label_21d6b4:
    // 0x21d6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6c0: 0xc084612  jal         func_211848
    ctx->pc = 0x21D6C0u;
    SET_GPR_U32(ctx, 31, 0x21D6C8u);
    ctx->pc = 0x21D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6C0u;
    // 0x21d6c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21D6C0u, 0x21D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6C8u;
label_21d6c8:
    // 0x21d6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6d4: 0xc084582  jal         func_211608
    ctx->pc = 0x21D6D4u;
    SET_GPR_U32(ctx, 31, 0x21D6DCu);
    ctx->pc = 0x21D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6D4u;
    // 0x21d6d8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21D6D4u, 0x21D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6DCu;
label_21d6dc:
    // 0x21d6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6e8: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D6E8u;
    SET_GPR_U32(ctx, 31, 0x21D6F0u);
    ctx->pc = 0x21D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6E8u;
    // 0x21d6ec: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D6E8u, 0x21D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6F0u;
label_21d6f0:
    // 0x21d6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d6f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6fc: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D6FCu;
    SET_GPR_U32(ctx, 31, 0x21D704u);
    ctx->pc = 0x21D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6FCu;
    // 0x21d700: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D6FCu, 0x21D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D704u;
label_21d704:
    // 0x21d704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d708: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d70c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d710: 0xc084612  jal         func_211848
    ctx->pc = 0x21D710u;
    SET_GPR_U32(ctx, 31, 0x21D718u);
    ctx->pc = 0x21D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D710u;
    // 0x21d714: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21D710u, 0x21D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D718u;
label_21d718:
    // 0x21d718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d71c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d720: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d724: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D724u;
    SET_GPR_U32(ctx, 31, 0x21D72Cu);
    ctx->pc = 0x21D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D724u;
    // 0x21d728: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D724u, 0x21D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D72Cu;
label_21d72c:
    // 0x21d72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d730: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d734: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d738: 0xc084612  jal         func_211848
    ctx->pc = 0x21D738u;
    SET_GPR_U32(ctx, 31, 0x21D740u);
    ctx->pc = 0x21D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D738u;
    // 0x21d73c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21D738u, 0x21D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D740u;
label_21d740:
    // 0x21d740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d748: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d74c: 0xc084612  jal         func_211848
    ctx->pc = 0x21D74Cu;
    SET_GPR_U32(ctx, 31, 0x21D754u);
    ctx->pc = 0x21D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D74Cu;
    // 0x21d750: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21D74Cu, 0x21D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D754u;
label_21d754:
    // 0x21d754: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d758: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d760: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D760u;
    SET_GPR_U32(ctx, 31, 0x21D768u);
    ctx->pc = 0x21D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D760u;
    // 0x21d764: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21D760u, 0x21D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D768u;
label_21d768:
    // 0x21d768: 0xc0874c8  jal         func_21D320
    ctx->pc = 0x21D768u;
    SET_GPR_U32(ctx, 31, 0x21D770u);
    ctx->pc = 0x21D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D768u;
    // 0x21d76c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D320u;
    goto label_21d320;
    ctx->pc = 0x21D770u;
label_21d770:
    // 0x21d770: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21d774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d778: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21d778u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21d77c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d77cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d780: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d784: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21d784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d788: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21d788u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d78c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21d78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21d790: 0x3e00008  jr          $ra
    ctx->pc = 0x21D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D790u;
        // 0x21d794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D798u;
}
