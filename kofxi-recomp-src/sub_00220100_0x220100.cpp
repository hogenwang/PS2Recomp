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

// Function: sub_00220100
// Address: 0x220100 - 0x220150
void sub_00220100_0x220100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220100_0x220100");
#endif

    switch (ctx->pc) {
        case 0x220130u: goto label_220130;
        default: break;
    }

    ctx->pc = 0x220100u;

    // 0x220100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22010c: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x22010cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x220110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x220110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x220114: 0x8e2fc9f4  lw          $t7, -0x360C($s1)
    ctx->pc = 0x220114u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953460)));
    // 0x220118: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x220118u;
    {
        const bool branch_taken_0x220118 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x22011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220118u;
        // 0x22011c: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220118) {
            ctx->pc = 0x220130u;
            goto label_220130;
        }
    }
    ctx->pc = 0x220120u;
    // 0x220120: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x220124: 0x8e05c9ec  lw          $a1, -0x3614($s0)
    ctx->pc = 0x220124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953452)));
    // 0x220128: 0xc089e80  jal         func_227A00
    ctx->pc = 0x220128u;
    SET_GPR_U32(ctx, 31, 0x220130u);
    ctx->pc = 0x22012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220128u;
    // 0x22012c: 0x248422e0  addiu       $a0, $a0, 0x22E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A00u, 0x220128u, 0x220130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220130u;
label_220130:
    // 0x220130: 0xae00c9ec  sw          $zero, -0x3614($s0)
    ctx->pc = 0x220130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953452), GPR_U32(ctx, 0));
    // 0x220134: 0xae20c9f4  sw          $zero, -0x360C($s1)
    ctx->pc = 0x220134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953460), GPR_U32(ctx, 0));
    // 0x220138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22013c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22013cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220144: 0x3e00008  jr          $ra
    ctx->pc = 0x220144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220144u;
        // 0x220148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22014Cu;
    // 0x22014c: 0x0  nop
    ctx->pc = 0x22014cu;
    // NOP
    if (ctx->pc == 0x22014cu) { ctx->pc = 0x220150u; }
}
