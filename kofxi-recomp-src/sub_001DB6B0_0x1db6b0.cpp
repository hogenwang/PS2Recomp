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

// Function: sub_001DB6B0
// Address: 0x1db6b0 - 0x1db878
void sub_001DB6B0_0x1db6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB6B0_0x1db6b0");
#endif

    switch (ctx->pc) {
        case 0x1db700u: goto label_1db700;
        case 0x1db714u: goto label_1db714;
        case 0x1db724u: goto label_1db724;
        case 0x1db740u: goto label_1db740;
        case 0x1db750u: goto label_1db750;
        case 0x1db75cu: goto label_1db75c;
        case 0x1db768u: goto label_1db768;
        case 0x1db774u: goto label_1db774;
        case 0x1db804u: goto label_1db804;
        case 0x1db830u: goto label_1db830;
        default: break;
    }

    ctx->pc = 0x1db6b0u;

    // 0x1db6b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1db6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db6b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1db6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1db6b8: 0x24d3fffc  addiu       $s3, $a2, -0x4
    ctx->pc = 0x1db6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1db6bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db6c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1db6c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1db6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1db6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1db6d0: 0x24b40004  addiu       $s4, $a1, 0x4
    ctx->pc = 0x1db6d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1db6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db6d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1db6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1db6dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1db6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1db6e0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1db6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1db6e4: 0x1a600027  blez        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x1DB6E4u;
    {
        const bool branch_taken_0x1db6e4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1DB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E4u;
        // 0x1db6e8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6e4) {
            ctx->pc = 0x1DB784u;
            goto label_1db784;
        }
    }
    ctx->pc = 0x1DB6ECu;
    // 0x1db6ec: 0x3c17003f  lui         $s7, 0x3F
    ctx->pc = 0x1db6ecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63 << 16));
    // 0x1db6f0: 0x3c16003f  lui         $s6, 0x3F
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
    // 0x1db6f4: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x1db6f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1db6f8: 0x2928021  addu        $s0, $s4, $s2
    ctx->pc = 0x1db6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1db6fc: 0x0  nop
    ctx->pc = 0x1db6fcu;
    // NOP
label_1db700:
    // 0x1db700: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1db700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1db704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db708: 0x26e5c260  addiu       $a1, $s7, -0x3DA0
    ctx->pc = 0x1db708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951520));
    // 0x1db70c: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1DB70Cu;
    SET_GPR_U32(ctx, 31, 0x1DB714u);
    ctx->pc = 0x1DB710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB70Cu;
    // 0x1db710: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x1DB70Cu, 0x1DB714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB714u;
label_1db714:
    // 0x1db714: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB714u;
    {
        const bool branch_taken_0x1db714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB714u;
        // 0x1db718: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db714) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB71Cu;
    // 0x1db71c: 0xc048c54  jal         func_123150
    ctx->pc = 0x1DB71Cu;
    SET_GPR_U32(ctx, 31, 0x1DB724u);
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x1DB71Cu, 0x1DB724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB724u;
label_1db724:
    // 0x1db724: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db728: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x1db728u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x1db72c: 0xae2303b4  sw          $v1, 0x3B4($s1)
    ctx->pc = 0x1db72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 948), GPR_U32(ctx, 3));
label_1db730:
    // 0x1db730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db734: 0x26c5c268  addiu       $a1, $s6, -0x3D98
    ctx->pc = 0x1db734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951528));
    // 0x1db738: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1DB738u;
    SET_GPR_U32(ctx, 31, 0x1DB740u);
    ctx->pc = 0x1DB73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB738u;
    // 0x1db73c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x1DB738u, 0x1DB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB740u;
label_1db740:
    // 0x1db740: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB740u;
    {
        const bool branch_taken_0x1db740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB740u;
        // 0x1db744: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db740) {
            ctx->pc = 0x1DB76Cu;
            goto label_1db76c;
        }
    }
    ctx->pc = 0x1DB748u;
    // 0x1db748: 0xc048c54  jal         func_123150
    ctx->pc = 0x1DB748u;
    SET_GPR_U32(ctx, 31, 0x1DB750u);
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x1DB748u, 0x1DB750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB750u;
label_1db750:
    // 0x1db750: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1db750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1db754: 0xc048c54  jal         func_123150
    ctx->pc = 0x1DB754u;
    SET_GPR_U32(ctx, 31, 0x1DB75Cu);
    ctx->pc = 0x1DB758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB754u;
    // 0x1db758: 0xae22037c  sw          $v0, 0x37C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 892), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x1DB754u, 0x1DB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB75Cu;
label_1db75c:
    // 0x1db75c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1db75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1db760: 0xc048c54  jal         func_123150
    ctx->pc = 0x1DB760u;
    SET_GPR_U32(ctx, 31, 0x1DB768u);
    ctx->pc = 0x1DB764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB760u;
    // 0x1db764: 0xae220380  sw          $v0, 0x380($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x1DB760u, 0x1DB768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB768u;
label_1db768:
    // 0x1db768: 0xae220384  sw          $v0, 0x384($s1)
    ctx->pc = 0x1db768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 2));
label_1db76c:
    // 0x1db76c: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1DB76Cu;
    SET_GPR_U32(ctx, 31, 0x1DB774u);
    ctx->pc = 0x1DB770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB76Cu;
    // 0x1db770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1DB76Cu, 0x1DB774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB774u;
label_1db774:
    // 0x1db774: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB774u;
    {
        const bool branch_taken_0x1db774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB774u;
        // 0x1db778: 0x253182a  slt         $v1, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db774) {
            ctx->pc = 0x1DB784u;
            goto label_1db784;
        }
    }
    ctx->pc = 0x1DB77Cu;
    // 0x1db77c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1DB77Cu;
    {
        const bool branch_taken_0x1db77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB77Cu;
        // 0x1db780: 0x2928021  addu        $s0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db77c) {
            ctx->pc = 0x1DB700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db700;
        }
    }
    ctx->pc = 0x1DB784u;
label_1db784:
    // 0x1db784: 0x8e23037c  lw          $v1, 0x37C($s1)
    ctx->pc = 0x1db784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
    // 0x1db788: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1db788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db78c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1db78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db794: 0x38640008  xori        $a0, $v1, 0x8
    ctx->pc = 0x1db794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x1db798: 0x38630009  xori        $v1, $v1, 0x9
    ctx->pc = 0x1db798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
    // 0x1db79c: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x1db79cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1db7a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db7a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db7a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db7a8: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1db7a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1db7ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1db7acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db7b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1db7b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db7b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1db7b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1db7b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1db7b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db7bc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1db7bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1db7c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1db7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7C4u;
        // 0x1db7c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB7CCu;
    // 0x1db7cc: 0x0  nop
    ctx->pc = 0x1db7ccu;
    // NOP
    // 0x1db7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db7d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db7d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db7dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1db7e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1db7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1db7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1db7ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1db7ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1db7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1db7f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db7f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1db7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db7fc: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1DB7FCu;
    SET_GPR_U32(ctx, 31, 0x1DB804u);
    ctx->pc = 0x1DB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7FCu;
    // 0x1db800: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1DB7FCu, 0x1DB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB804u;
label_1db804:
    // 0x1db804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1db804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db80c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB80Cu;
    {
        const bool branch_taken_0x1db80c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB80Cu;
        // 0x1db810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db80c) {
            ctx->pc = 0x1DB828u;
            goto label_1db828;
        }
    }
    ctx->pc = 0x1DB814u;
    // 0x1db814: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1db814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1db818: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1db818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db81c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB81Cu;
    {
        const bool branch_taken_0x1db81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB81Cu;
        // 0x1db820: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db81c) {
            ctx->pc = 0x1DB83Cu;
            goto label_1db83c;
        }
    }
    ctx->pc = 0x1DB824u;
    // 0x1db824: 0x0  nop
    ctx->pc = 0x1db824u;
    // NOP
label_1db828:
    // 0x1db828: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1DB828u;
    SET_GPR_U32(ctx, 31, 0x1DB830u);
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1DB828u, 0x1DB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB830u;
label_1db830:
    // 0x1db830: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1db830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db834: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1db838: 0x2042823  subu        $a1, $s0, $a0
    ctx->pc = 0x1db838u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1db83c:
    // 0x1db83c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1db83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1db840: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1db840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1db844: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1db844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1db848: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1db848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1db84c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1db84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db854: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1db854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1db858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db85c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1db85cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1db860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db864: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1db864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1db868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db86c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB86Cu;
        // 0x1db870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB874u;
    // 0x1db874: 0x0  nop
    ctx->pc = 0x1db874u;
    // NOP
    if (ctx->pc == 0x1db874u) { ctx->pc = 0x1db878u; }
}
