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

// Function: sub_002133D0
// Address: 0x2133d0 - 0x213480
void sub_002133D0_0x2133d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002133D0_0x2133d0");
#endif

    switch (ctx->pc) {
        case 0x2133ecu: goto label_2133ec;
        case 0x2133fcu: goto label_2133fc;
        case 0x21340cu: goto label_21340c;
        case 0x21341cu: goto label_21341c;
        case 0x21342cu: goto label_21342c;
        case 0x21343cu: goto label_21343c;
        case 0x21344cu: goto label_21344c;
        case 0x21345cu: goto label_21345c;
        default: break;
    }

    ctx->pc = 0x2133d0u;

    // 0x2133d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2133d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2133d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2133d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2133d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2133d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2133dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2133dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2133e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2133e4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2133E4u;
    SET_GPR_U32(ctx, 31, 0x2133ECu);
    ctx->pc = 0x2133E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133E4u;
    // 0x2133e8: 0x24840698  addiu       $a0, $a0, 0x698 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2133E4u, 0x2133ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2133ECu;
label_2133ec:
    // 0x2133ec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2133ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2133f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2133f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2133f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2133F4u;
    SET_GPR_U32(ctx, 31, 0x2133FCu);
    ctx->pc = 0x2133F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133F4u;
    // 0x2133f8: 0x24840658  addiu       $a0, $a0, 0x658 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2133F4u, 0x2133FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2133FCu;
label_2133fc:
    // 0x2133fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2133fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213400: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x213400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x213404: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213404u;
    SET_GPR_U32(ctx, 31, 0x21340Cu);
    ctx->pc = 0x213408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213404u;
    // 0x213408: 0x248403d8  addiu       $a0, $a0, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213404u, 0x21340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21340Cu;
label_21340c:
    // 0x21340c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21340cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213410: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x213410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x213414: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213414u;
    SET_GPR_U32(ctx, 31, 0x21341Cu);
    ctx->pc = 0x213418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213414u;
    // 0x213418: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213414u, 0x21341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21341Cu;
label_21341c:
    // 0x21341c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21341cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213420: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x213420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x213424: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213424u;
    SET_GPR_U32(ctx, 31, 0x21342Cu);
    ctx->pc = 0x213428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213424u;
    // 0x213428: 0x248406b8  addiu       $a0, $a0, 0x6B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213424u, 0x21342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21342Cu;
label_21342c:
    // 0x21342c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21342cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213430: 0x26050244  addiu       $a1, $s0, 0x244
    ctx->pc = 0x213430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 580));
    // 0x213434: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213434u;
    SET_GPR_U32(ctx, 31, 0x21343Cu);
    ctx->pc = 0x213438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213434u;
    // 0x213438: 0x24840688  addiu       $a0, $a0, 0x688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213434u, 0x21343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21343Cu;
label_21343c:
    // 0x21343c: 0x8e050250  lw          $a1, 0x250($s0)
    ctx->pc = 0x21343cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x213440: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213444: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213444u;
    SET_GPR_U32(ctx, 31, 0x21344Cu);
    ctx->pc = 0x213448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213444u;
    // 0x213448: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213444u, 0x21344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21344Cu;
label_21344c:
    // 0x21344c: 0x8e050254  lw          $a1, 0x254($s0)
    ctx->pc = 0x21344cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x213450: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213454: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213454u;
    SET_GPR_U32(ctx, 31, 0x21345Cu);
    ctx->pc = 0x213458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213454u;
    // 0x213458: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213454u, 0x21345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21345Cu;
label_21345c:
    // 0x21345c: 0x26100258  addiu       $s0, $s0, 0x258
    ctx->pc = 0x21345cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 600));
    // 0x213460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213464: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x213464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213468: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21346c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21346cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213470: 0x24840428  addiu       $a0, $a0, 0x428
    ctx->pc = 0x213470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1064));
    // 0x213474: 0x8043e52  j           func_10F948
    ctx->pc = 0x213474u;
    ctx->pc = 0x213478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213474u;
    // 0x213478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21347Cu;
    // 0x21347c: 0x0  nop
    ctx->pc = 0x21347cu;
    // NOP
}
