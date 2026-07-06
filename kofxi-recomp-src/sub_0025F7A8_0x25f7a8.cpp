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

// Function: sub_0025F7A8
// Address: 0x25f7a8 - 0x25f8d0
void sub_0025F7A8_0x25f7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F7A8_0x25f7a8");
#endif

    switch (ctx->pc) {
        case 0x25f7c8u: goto label_25f7c8;
        case 0x25f7d0u: goto label_25f7d0;
        case 0x25f7e4u: goto label_25f7e4;
        case 0x25f858u: goto label_25f858;
        case 0x25f860u: goto label_25f860;
        case 0x25f868u: goto label_25f868;
        case 0x25f884u: goto label_25f884;
        case 0x25f89cu: goto label_25f89c;
        case 0x25f8b4u: goto label_25f8b4;
        case 0x25f8bcu: goto label_25f8bc;
        case 0x25f8c4u: goto label_25f8c4;
        default: break;
    }

    ctx->pc = 0x25f7a8u;

    // 0x25f7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f7ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f7b0: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x25f7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x25f7b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f7b8: 0x8e04bea0  lw          $a0, -0x4160($s0)
    ctx->pc = 0x25f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950560)));
    // 0x25f7bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25f7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25f7c0: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x25F7C0u;
    SET_GPR_U32(ctx, 31, 0x25F7C8u);
    ctx->pc = 0x25F7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7C0u;
    // 0x25f7c4: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x25F7C0u, 0x25F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7C8u;
label_25f7c8:
    // 0x25f7c8: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x25F7C8u;
    SET_GPR_U32(ctx, 31, 0x25F7D0u);
    ctx->pc = 0x25F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7C8u;
    // 0x25f7cc: 0x8e04bea0  lw          $a0, -0x4160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x25F7C8u, 0x25F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7D0u;
label_25f7d0:
    // 0x25f7d0: 0x8e241774  lw          $a0, 0x1774($s1)
    ctx->pc = 0x25f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6004)));
    // 0x25f7d4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F7D4u;
    {
        const bool branch_taken_0x25f7d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7D4u;
        // 0x25f7d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7d4) {
            ctx->pc = 0x25F7E8u;
            goto label_25f7e8;
        }
    }
    ctx->pc = 0x25F7DCu;
    // 0x25f7dc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x25F7DCu;
    SET_GPR_U32(ctx, 31, 0x25F7E4u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x25F7DCu, 0x25F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7E4u;
label_25f7e4:
    // 0x25f7e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f7e8:
    // 0x25f7e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25f7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f7ec: 0xae221774  sw          $v0, 0x1774($s1)
    ctx->pc = 0x25f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6004), GPR_U32(ctx, 2));
    // 0x25f7f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25f7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f7f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7F8u;
        // 0x25f7fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F800u;
    // 0x25f800: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f808: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25f808u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x25f80c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25f810: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25f814: 0x3c13efff  lui         $s3, 0xEFFF
    ctx->pc = 0x25f814u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61439 << 16));
    // 0x25f818: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x25f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x25f81c: 0x3c12bfff  lui         $s2, 0xBFFF
    ctx->pc = 0x25f81cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49151 << 16));
    // 0x25f820: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x25f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x25f824: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x25f824u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f828: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x25f828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25f82c: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x25f82cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x25f830: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25f830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25f834: 0x2416fffb  addiu       $s6, $zero, -0x5
    ctx->pc = 0x25f834u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x25f838: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25f838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25f83c: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x25f83cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x25f840: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f844: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x25f844u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x25f848: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f84c: 0x3c144000  lui         $s4, 0x4000
    ctx->pc = 0x25f84cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16384 << 16));
    // 0x25f850: 0xae001770  sw          $zero, 0x1770($s0)
    ctx->pc = 0x25f850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6000), GPR_U32(ctx, 0));
    // 0x25f854: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x25f854u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_25f858:
    // 0x25f858: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x25F858u;
    SET_GPR_U32(ctx, 31, 0x25F860u);
    ctx->pc = 0x25F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F858u;
    // 0x25f85c: 0x8ee41774  lw          $a0, 0x1774($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6004)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x25F858u, 0x25F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F860u;
label_25f860:
    // 0x25f860: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25F860u;
    SET_GPR_U32(ctx, 31, 0x25F868u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25F860u, 0x25F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F868u;
label_25f868:
    // 0x25f868: 0x8fc31770  lw          $v1, 0x1770($fp)
    ctx->pc = 0x25f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6000)));
    // 0x25f86c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f870: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x25f870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25f874: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F874u;
    {
        const bool branch_taken_0x25f874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F874u;
        // 0x25f878: 0x762024  and         $a0, $v1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f874) {
            ctx->pc = 0x25F888u;
            goto label_25f888;
        }
    }
    ctx->pc = 0x25F87Cu;
    // 0x25f87c: 0xc093a06  jal         func_24E818
    ctx->pc = 0x25F87Cu;
    SET_GPR_U32(ctx, 31, 0x25F884u);
    ctx->pc = 0x25F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F87Cu;
    // 0x25f880: 0xae041770  sw          $a0, 0x1770($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6000), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E818u, 0x25F87Cu, 0x25F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F884u;
label_25f884:
    // 0x25f884: 0x8e031770  lw          $v1, 0x1770($s0)
    ctx->pc = 0x25f884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6000)));
label_25f888:
    // 0x25f888: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x25f888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x25f88c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F88Cu;
    {
        const bool branch_taken_0x25f88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F88Cu;
        // 0x25f890: 0x732024  and         $a0, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f88c) {
            ctx->pc = 0x25F8A0u;
            goto label_25f8a0;
        }
    }
    ctx->pc = 0x25F894u;
    // 0x25f894: 0xc091d7c  jal         func_2475F0
    ctx->pc = 0x25F894u;
    SET_GPR_U32(ctx, 31, 0x25F89Cu);
    ctx->pc = 0x25F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F894u;
    // 0x25f898: 0xae041770  sw          $a0, 0x1770($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6000), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2475F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2475F0u, 0x25F894u, 0x25F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F89Cu;
label_25f89c:
    // 0x25f89c: 0x8e031770  lw          $v1, 0x1770($s0)
    ctx->pc = 0x25f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6000)));
label_25f8a0:
    // 0x25f8a0: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x25f8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x25f8a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F8A4u;
    {
        const bool branch_taken_0x25f8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8A4u;
        // 0x25f8a8: 0x722024  and         $a0, $v1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8a4) {
            ctx->pc = 0x25F8B4u;
            goto label_25f8b4;
        }
    }
    ctx->pc = 0x25F8ACu;
    // 0x25f8ac: 0xc08de14  jal         func_237850
    ctx->pc = 0x25F8ACu;
    SET_GPR_U32(ctx, 31, 0x25F8B4u);
    ctx->pc = 0x25F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8ACu;
    // 0x25f8b0: 0xae041770  sw          $a0, 0x1770($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6000), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x25F8ACu, 0x25F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8B4u;
label_25f8b4:
    // 0x25f8b4: 0xc097316  jal         func_25CC58
    ctx->pc = 0x25F8B4u;
    SET_GPR_U32(ctx, 31, 0x25F8BCu);
    ctx->pc = 0x25CC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC58u, 0x25F8B4u, 0x25F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8BCu;
label_25f8bc:
    // 0x25f8bc: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25F8BCu;
    SET_GPR_U32(ctx, 31, 0x25F8C4u);
    ctx->pc = 0x25F8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8BCu;
    // 0x25f8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25F8BCu, 0x25F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8C4u;
label_25f8c4:
    // 0x25f8c4: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x25F8C4u;
    {
        const bool branch_taken_0x25f8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f8c4) {
            ctx->pc = 0x25F858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25f858;
        }
    }
    ctx->pc = 0x25F8CCu;
    // 0x25f8cc: 0x0  nop
    ctx->pc = 0x25f8ccu;
    // NOP
    if (ctx->pc == 0x25f8ccu) { ctx->pc = 0x25f8d0u; }
}
