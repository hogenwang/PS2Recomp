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

// Function: sub_00222BA0
// Address: 0x222ba0 - 0x222c18
void sub_00222BA0_0x222ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222BA0_0x222ba0");
#endif

    switch (ctx->pc) {
        case 0x222bccu: goto label_222bcc;
        case 0x222bd8u: goto label_222bd8;
        case 0x222c00u: goto label_222c00;
        default: break;
    }

    ctx->pc = 0x222ba0u;

    // 0x222ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222ba4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x222ba4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222ba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222bb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222bb4: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x222bb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222bb8: 0x11ee0011  beq         $t7, $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x222BB8u;
    {
        const bool branch_taken_0x222bb8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x222BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BB8u;
        // 0x222bbc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bb8) {
            ctx->pc = 0x222C00u;
            goto label_222c00;
        }
    }
    ctx->pc = 0x222BC0u;
    // 0x222bc0: 0x9c840018  lwu         $a0, 0x18($a0)
    ctx->pc = 0x222bc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x222bc4: 0xc0990d8  jal         func_264360
    ctx->pc = 0x222BC4u;
    SET_GPR_U32(ctx, 31, 0x222BCCu);
    ctx->pc = 0x222BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BC4u;
    // 0x222bc8: 0xae2e0000  sw          $t6, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264360u, 0x222BC4u, 0x222BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BCCu;
label_222bcc:
    // 0x222bcc: 0x96240016  lhu         $a0, 0x16($s1)
    ctx->pc = 0x222bccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x222bd0: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x222BD0u;
    SET_GPR_U32(ctx, 31, 0x222BD8u);
    ctx->pc = 0x222BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BD0u;
    // 0x222bd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x222BD0u, 0x222BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BD8u;
label_222bd8:
    // 0x222bd8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222bdc: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x222bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x222be0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x222be0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x222be4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x222be4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222be8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x222be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x222bec: 0x24e72fd0  addiu       $a3, $a3, 0x2FD0
    ctx->pc = 0x222becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12240));
    // 0x222bf0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x222bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222bf4: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x222bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x222bf8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x222BF8u;
    SET_GPR_U32(ctx, 31, 0x222C00u);
    ctx->pc = 0x222BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BF8u;
    // 0x222bfc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x222BF8u, 0x222C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C00u;
label_222c00:
    // 0x222c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222c08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x222C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C0Cu;
        // 0x222c10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222C14u;
    // 0x222c14: 0x0  nop
    ctx->pc = 0x222c14u;
    // NOP
}
