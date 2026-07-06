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

// Function: sub_0029CBA0
// Address: 0x29cba0 - 0x29cc10
void sub_0029CBA0_0x29cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CBA0_0x29cba0");
#endif

    switch (ctx->pc) {
        case 0x29cbdcu: goto label_29cbdc;
        case 0x29cbe4u: goto label_29cbe4;
        default: break;
    }

    ctx->pc = 0x29cba0u;

    // 0x29cba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29cba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29cba4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29cba8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29cba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29cbac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29cbacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29cbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29cbb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29cbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29cbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29cbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbc0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x29CBC0u;
    {
        const bool branch_taken_0x29cbc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBC0u;
        // 0x29cbc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cbc0) {
            ctx->pc = 0x29CBF4u;
            goto label_29cbf4;
        }
    }
    ctx->pc = 0x29CBC8u;
    // 0x29cbc8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29cbcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CBCCu;
    {
        const bool branch_taken_0x29cbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cbcc) {
            ctx->pc = 0x29CBDCu;
            goto label_29cbdc;
        }
    }
    ctx->pc = 0x29CBD4u;
    // 0x29cbd4: 0xc0a7364  jal         func_29CD90
    ctx->pc = 0x29CBD4u;
    SET_GPR_U32(ctx, 31, 0x29CBDCu);
    ctx->pc = 0x29CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBD4u;
    // 0x29cbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD90u, 0x29CBD4u, 0x29CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBDCu;
label_29cbdc:
    // 0x29cbdc: 0xc0a7320  jal         func_29CC80
    ctx->pc = 0x29CBDCu;
    SET_GPR_U32(ctx, 31, 0x29CBE4u);
    ctx->pc = 0x29CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBDCu;
    // 0x29cbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC80u, 0x29CBDCu, 0x29CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBE4u;
label_29cbe4:
    // 0x29cbe4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29cbe8: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x29cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x29cbec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cbf0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x29cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_29cbf4:
    // 0x29cbf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29cbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cbf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29cbf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cbfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29cbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cc00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cc00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cc04: 0x3e00008  jr          $ra
    ctx->pc = 0x29CC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC04u;
        // 0x29cc08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CC0Cu;
    // 0x29cc0c: 0x0  nop
    ctx->pc = 0x29cc0cu;
    // NOP
    if (ctx->pc == 0x29cc0cu) { ctx->pc = 0x29cc10u; }
}
