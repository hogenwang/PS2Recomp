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

// Function: sub_0016A6B0
// Address: 0x16a6b0 - 0x16a750
void sub_0016A6B0_0x16a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A6B0_0x16a6b0");
#endif

    switch (ctx->pc) {
        case 0x16a6ccu: goto label_16a6cc;
        case 0x16a6e8u: goto label_16a6e8;
        case 0x16a6f8u: goto label_16a6f8;
        case 0x16a724u: goto label_16a724;
        default: break;
    }

    ctx->pc = 0x16a6b0u;

    // 0x16a6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16a6b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16a6b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a6bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a6c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6c4: 0xc062804  jal         func_18A010
    ctx->pc = 0x16A6C4u;
    SET_GPR_U32(ctx, 31, 0x16A6CCu);
    ctx->pc = 0x16A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6C4u;
    // 0x16a6c8: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x16A6C4u, 0x16A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6CCu;
label_16a6cc:
    // 0x16a6cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6d0: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A6D0u;
    {
        const bool branch_taken_0x16a6d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a6d0) {
            ctx->pc = 0x16A6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A6D0u;
            // 0x16a6d4: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A6E0u;
            goto label_16a6e0;
        }
    }
    ctx->pc = 0x16A6D8u;
    // 0x16a6d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16A6D8u;
    {
        const bool branch_taken_0x16a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6D8u;
        // 0x16a6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6d8) {
            ctx->pc = 0x16A738u;
            goto label_16a738;
        }
    }
    ctx->pc = 0x16A6E0u;
label_16a6e0:
    // 0x16a6e0: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x16A6E0u;
    SET_GPR_U32(ctx, 31, 0x16A6E8u);
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x16A6E0u, 0x16A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6E8u;
label_16a6e8:
    // 0x16a6e8: 0x960500ec  lhu         $a1, 0xEC($s0)
    ctx->pc = 0x16a6e8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x16a6ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16a6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16a6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a6f8:
    // 0x16a6f8: 0x94c303ba  lhu         $v1, 0x3BA($a2)
    ctx->pc = 0x16a6f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 954)));
    // 0x16a6fc: 0x5465000b  bnel        $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x16A6FCu;
    {
        const bool branch_taken_0x16a6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x16a6fc) {
            ctx->pc = 0x16A700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A6FCu;
            // 0x16a700: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A72Cu;
            goto label_16a72c;
        }
    }
    ctx->pc = 0x16A704u;
    // 0x16a704: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x16a704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x16a708: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16a708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a70c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x16a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x16a710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a714: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16a718: 0x944603c6  lhu         $a2, 0x3C6($v0)
    ctx->pc = 0x16a718u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 966)));
    // 0x16a71c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x16A71Cu;
    SET_GPR_U32(ctx, 31, 0x16A724u);
    ctx->pc = 0x16A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A71Cu;
    // 0x16a720: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x16A71Cu, 0x16A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A724u;
label_16a724:
    // 0x16a724: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16A724u;
    {
        const bool branch_taken_0x16a724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a724) {
            ctx->pc = 0x16A738u;
            goto label_16a738;
        }
    }
    ctx->pc = 0x16A72Cu;
label_16a72c:
    // 0x16a72c: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x16a72cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16a730: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x16A730u;
    {
        const bool branch_taken_0x16a730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A730u;
        // 0x16a734: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a730) {
            ctx->pc = 0x16A6F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a6f8;
        }
    }
    ctx->pc = 0x16A738u;
label_16a738:
    // 0x16a738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16a738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a73c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a744: 0x3e00008  jr          $ra
    ctx->pc = 0x16A744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A744u;
        // 0x16a748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A74Cu;
    // 0x16a74c: 0x0  nop
    ctx->pc = 0x16a74cu;
    // NOP
}
