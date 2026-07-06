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

// Function: sub_0011ED18
// Address: 0x11ed18 - 0x11ee38
void sub_0011ED18_0x11ed18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ED18_0x11ed18");
#endif

    switch (ctx->pc) {
        case 0x11ed64u: goto label_11ed64;
        case 0x11ed7cu: goto label_11ed7c;
        case 0x11edb4u: goto label_11edb4;
        default: break;
    }

    ctx->pc = 0x11ed18u;

    // 0x11ed18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11ed18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11ed1c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11ed20: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x11ed20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x11ed24: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11ed28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11ed2c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x11ed2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11ed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11ed34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11ed34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed38: 0x8e62b9d8  lw          $v0, -0x4628($s3)
    ctx->pc = 0x11ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949336)));
    // 0x11ed3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ed3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed40: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11ed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11ed44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ed48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11ED48u;
    {
        const bool branch_taken_0x11ed48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED48u;
        // 0x11ed4c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed48) {
            ctx->pc = 0x11ED58u;
            goto label_11ed58;
        }
    }
    ctx->pc = 0x11ED50u;
    // 0x11ed50: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11ED50u;
    {
        const bool branch_taken_0x11ed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED50u;
        // 0x11ed54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed50) {
            ctx->pc = 0x11EDB8u;
            goto label_11edb8;
        }
    }
    ctx->pc = 0x11ED58u;
label_11ed58:
    // 0x11ed58: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11ed58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11ed5c: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11ED5Cu;
    SET_GPR_U32(ctx, 31, 0x11ED64u);
    ctx->pc = 0x11ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED5Cu;
    // 0x11ed60: 0x8e24b9e0  lw          $a0, -0x4620($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11ED5Cu, 0x11ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED64u;
label_11ed64:
    // 0x11ed64: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ED64u;
    {
        const bool branch_taken_0x11ed64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED64u;
        // 0x11ed68: 0x28500000  slti        $s0, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed64) {
            ctx->pc = 0x11ED7Cu;
            goto label_11ed7c;
        }
    }
    ctx->pc = 0x11ED6Cu;
    // 0x11ed6c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11ED6Cu;
    {
        const bool branch_taken_0x11ed6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED6Cu;
        // 0x11ed70: 0x8e24b9e0  lw          $a0, -0x4620($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed6c) {
            ctx->pc = 0x11ED7Cu;
            goto label_11ed7c;
        }
    }
    ctx->pc = 0x11ED74u;
    // 0x11ed74: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x11ED74u;
    SET_GPR_U32(ctx, 31, 0x11ED7Cu);
    ctx->pc = 0x11ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED74u;
    // 0x11ed78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x11ED74u, 0x11ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED7Cu;
label_11ed7c:
    // 0x11ed7c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11ED7Cu;
    {
        const bool branch_taken_0x11ed7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED7Cu;
        // 0x11ed80: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed7c) {
            ctx->pc = 0x11ED8Cu;
            goto label_11ed8c;
        }
    }
    ctx->pc = 0x11ED84u;
    // 0x11ed84: 0x8e62b9d8  lw          $v0, -0x4628($s3)
    ctx->pc = 0x11ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949336)));
    // 0x11ed88: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x11ed88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_11ed8c:
    // 0x11ed8c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x11ED8Cu;
    {
        const bool branch_taken_0x11ed8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED8Cu;
        // 0x11ed90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed8c) {
            ctx->pc = 0x11EDB8u;
            goto label_11edb8;
        }
    }
    ctx->pc = 0x11ED94u;
    // 0x11ed94: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x11ED94u;
    {
        const bool branch_taken_0x11ed94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED94u;
        // 0x11ed98: 0xae60b9d8  sw          $zero, -0x4628($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294949336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed94) {
            ctx->pc = 0x11EDA8u;
            goto label_11eda8;
        }
    }
    ctx->pc = 0x11ED9Cu;
    // 0x11ed9c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11eda0: 0x8c43f3c0  lw          $v1, -0xC40($v0)
    ctx->pc = 0x11eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964160)));
    // 0x11eda4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x11eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_11eda8:
    // 0x11eda8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11edac: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11EDACu;
    SET_GPR_U32(ctx, 31, 0x11EDB4u);
    ctx->pc = 0x11EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EDACu;
    // 0x11edb0: 0x8c44b9dc  lw          $a0, -0x4624($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11EDACu, 0x11EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDB4u;
label_11edb4:
    // 0x11edb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11edb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11edb8:
    // 0x11edb8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11edb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11edbc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11edbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11edc0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11edc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11edc4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11edc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11edc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11edc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11edcc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11edccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11edd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11edd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11edd4: 0x3e00008  jr          $ra
    ctx->pc = 0x11EDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDD4u;
        // 0x11edd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EDDCu;
    // 0x11eddc: 0x0  nop
    ctx->pc = 0x11eddcu;
    // NOP
    // 0x11ede0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11ede4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x11ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x11ede8: 0x8c45de28  lw          $a1, -0x21D8($v0)
    ctx->pc = 0x11ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958632)));
    // 0x11edec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EDECu;
    {
        const bool branch_taken_0x11edec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDECu;
        // 0x11edf0: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edec) {
            ctx->pc = 0x11EDFCu;
            goto label_11edfc;
        }
    }
    ctx->pc = 0x11EDF4u;
    // 0x11edf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11edf8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_11edfc:
    // 0x11edfc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11ee00: 0x8c43de2c  lw          $v1, -0x21D4($v0)
    ctx->pc = 0x11ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958636)));
    // 0x11ee04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EE04u;
    {
        const bool branch_taken_0x11ee04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE04u;
        // 0x11ee08: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee04) {
            ctx->pc = 0x11EE18u;
            goto label_11ee18;
        }
    }
    ctx->pc = 0x11EE0Cu;
    // 0x11ee0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11ee10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11ee14: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_11ee18:
    // 0x11ee18: 0x8c43de30  lw          $v1, -0x21D0($v0)
    ctx->pc = 0x11ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958640)));
    // 0x11ee1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EE1Cu;
    {
        const bool branch_taken_0x11ee1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE1Cu;
        // 0x11ee20: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee1c) {
            ctx->pc = 0x11EE30u;
            goto label_11ee30;
        }
    }
    ctx->pc = 0x11EE24u;
    // 0x11ee24: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x11ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x11ee28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11ee2c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11ee30:
    // 0x11ee30: 0x8043324  j           func_10CC90
    ctx->pc = 0x11EE30u;
    ctx->pc = 0x11EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EE30u;
    // 0x11ee34: 0x8c44b9e0  lw          $a0, -0x4620($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime); return;
    ctx->pc = 0x11EE38u;
}
