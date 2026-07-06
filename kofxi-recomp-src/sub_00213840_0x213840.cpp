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

// Function: sub_00213840
// Address: 0x213840 - 0x213910
void sub_00213840_0x213840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213840_0x213840");
#endif

    switch (ctx->pc) {
        case 0x21385cu: goto label_21385c;
        case 0x21386cu: goto label_21386c;
        case 0x21387cu: goto label_21387c;
        case 0x21388cu: goto label_21388c;
        case 0x21389cu: goto label_21389c;
        case 0x2138acu: goto label_2138ac;
        case 0x2138bcu: goto label_2138bc;
        case 0x2138ccu: goto label_2138cc;
        case 0x2138dcu: goto label_2138dc;
        case 0x2138ecu: goto label_2138ec;
        default: break;
    }

    ctx->pc = 0x213840u;

    // 0x213840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213848: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21384c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21384cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213850: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213854: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213854u;
    SET_GPR_U32(ctx, 31, 0x21385Cu);
    ctx->pc = 0x213858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213854u;
    // 0x213858: 0x24840708  addiu       $a0, $a0, 0x708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213854u, 0x21385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21385Cu;
label_21385c:
    // 0x21385c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21385cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213860: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213864: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213864u;
    SET_GPR_U32(ctx, 31, 0x21386Cu);
    ctx->pc = 0x213868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213864u;
    // 0x213868: 0x24840728  addiu       $a0, $a0, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213864u, 0x21386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21386Cu;
label_21386c:
    // 0x21386c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21386cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213870: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x213870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x213874: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213874u;
    SET_GPR_U32(ctx, 31, 0x21387Cu);
    ctx->pc = 0x213878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213874u;
    // 0x213878: 0x24840738  addiu       $a0, $a0, 0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213874u, 0x21387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21387Cu;
label_21387c:
    // 0x21387c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21387cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213880: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x213880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x213884: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213884u;
    SET_GPR_U32(ctx, 31, 0x21388Cu);
    ctx->pc = 0x213888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213884u;
    // 0x213888: 0x24840748  addiu       $a0, $a0, 0x748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213884u, 0x21388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21388Cu;
label_21388c:
    // 0x21388c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x21388cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x213890: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213894: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213894u;
    SET_GPR_U32(ctx, 31, 0x21389Cu);
    ctx->pc = 0x213898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213894u;
    // 0x213898: 0x24840758  addiu       $a0, $a0, 0x758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213894u, 0x21389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21389Cu;
label_21389c:
    // 0x21389c: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x21389cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2138a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2138a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2138a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2138A4u;
    SET_GPR_U32(ctx, 31, 0x2138ACu);
    ctx->pc = 0x2138A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138A4u;
    // 0x2138a8: 0x24840498  addiu       $a0, $a0, 0x498 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2138A4u, 0x2138ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2138ACu;
label_2138ac:
    // 0x2138ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2138acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2138b0: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x2138b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x2138b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2138B4u;
    SET_GPR_U32(ctx, 31, 0x2138BCu);
    ctx->pc = 0x2138B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138B4u;
    // 0x2138b8: 0x248406b8  addiu       $a0, $a0, 0x6B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2138B4u, 0x2138BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2138BCu;
label_2138bc:
    // 0x2138bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2138bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2138c0: 0x2605024c  addiu       $a1, $s0, 0x24C
    ctx->pc = 0x2138c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 588));
    // 0x2138c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2138C4u;
    SET_GPR_U32(ctx, 31, 0x2138CCu);
    ctx->pc = 0x2138C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138C4u;
    // 0x2138c8: 0x24840688  addiu       $a0, $a0, 0x688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2138C4u, 0x2138CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2138CCu;
label_2138cc:
    // 0x2138cc: 0x8e050258  lw          $a1, 0x258($s0)
    ctx->pc = 0x2138ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x2138d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2138d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2138d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2138D4u;
    SET_GPR_U32(ctx, 31, 0x2138DCu);
    ctx->pc = 0x2138D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138D4u;
    // 0x2138d8: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2138D4u, 0x2138DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2138DCu;
label_2138dc:
    // 0x2138dc: 0x8e05025c  lw          $a1, 0x25C($s0)
    ctx->pc = 0x2138dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x2138e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2138e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2138e4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2138E4u;
    SET_GPR_U32(ctx, 31, 0x2138ECu);
    ctx->pc = 0x2138E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138E4u;
    // 0x2138e8: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2138E4u, 0x2138ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2138ECu;
label_2138ec:
    // 0x2138ec: 0x26100260  addiu       $s0, $s0, 0x260
    ctx->pc = 0x2138ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x2138f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2138f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2138f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2138f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2138f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2138fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2138fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213900: 0x24840428  addiu       $a0, $a0, 0x428
    ctx->pc = 0x213900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1064));
    // 0x213904: 0x8043e52  j           func_10F948
    ctx->pc = 0x213904u;
    ctx->pc = 0x213908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213904u;
    // 0x213908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21390Cu;
    // 0x21390c: 0x0  nop
    ctx->pc = 0x21390cu;
    // NOP
}
