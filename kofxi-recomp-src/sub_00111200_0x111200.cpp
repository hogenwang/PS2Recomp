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

// Function: sub_00111200
// Address: 0x111200 - 0x111258
void sub_00111200_0x111200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111200_0x111200");
#endif

    switch (ctx->pc) {
        case 0x111218u: goto label_111218;
        case 0x111240u: goto label_111240;
        default: break;
    }

    ctx->pc = 0x111200u;

    // 0x111200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111208: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11120c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x111210: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x111210u;
    SET_GPR_U32(ctx, 31, 0x111218u);
    ctx->pc = 0x111214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111210u;
    // 0x111214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x111210u, 0x111218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111218u;
label_111218:
    // 0x111218: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x111218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11121c: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11121Cu;
    {
        const bool branch_taken_0x11121c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x11121c) {
            ctx->pc = 0x111220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11121Cu;
            // 0x111220: 0x8e23003c  lw          $v1, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11122Cu;
            goto label_11122c;
        }
    }
    ctx->pc = 0x111224u;
    // 0x111224: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111224u;
    {
        const bool branch_taken_0x111224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111224u;
        // 0x111228: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111224) {
            ctx->pc = 0x111238u;
            goto label_111238;
        }
    }
    ctx->pc = 0x11122Cu;
label_11122c:
    // 0x11122c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111230: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x111230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x111234: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x111234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_111238:
    // 0x111238: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x111238u;
    SET_GPR_U32(ctx, 31, 0x111240u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x111238u, 0x111240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111240u;
label_111240:
    // 0x111240: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x111240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x111244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111248: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11124c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11124cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111250: 0x3e00008  jr          $ra
    ctx->pc = 0x111250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111250u;
        // 0x111254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111258u;
}
