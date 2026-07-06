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

// Function: sub_00287010
// Address: 0x287010 - 0x287080
void sub_00287010_0x287010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287010_0x287010");
#endif

    switch (ctx->pc) {
        case 0x28702cu: goto label_28702c;
        case 0x287030u: goto label_287030;
        case 0x287058u: goto label_287058;
        default: break;
    }

    ctx->pc = 0x287010u;

    // 0x287010: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x287010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x287014: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x287014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x287018: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x287018u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28701c: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28701Cu;
    {
        const bool branch_taken_0x28701c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28701c) {
            ctx->pc = 0x287020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28701Cu;
            // 0x287020: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287040u;
            goto label_287040;
        }
    }
    ctx->pc = 0x287024u;
    // 0x287024: 0x3e00008  jr          $ra
    ctx->pc = 0x287024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287024u;
        // 0x287028: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28702Cu;
label_28702c:
    // 0x28702c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x28702cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_287030:
    // 0x287030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287034: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x287034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287038: 0x3e00008  jr          $ra
    ctx->pc = 0x287038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287038u;
        // 0x28703c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287040u;
label_287040:
    // 0x287040: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x287040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x287044: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x287044u;
    {
        const bool branch_taken_0x287044 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x287048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287044u;
        // 0x287048: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287044) {
            ctx->pc = 0x287074u;
            goto label_287074;
        }
    }
    ctx->pc = 0x28704Cu;
    // 0x28704c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x28704cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x287050: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x287050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x287054: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x287054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_287058:
    // 0x287058: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x287058u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28705c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x28705cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287060: 0x1464fff2  bne         $v1, $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x287060u;
    {
        const bool branch_taken_0x287060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x287064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287060u;
        // 0x287064: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287060) {
            ctx->pc = 0x28702Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28702c;
        }
    }
    ctx->pc = 0x287068u;
    // 0x287068: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x287068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x28706c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28706Cu;
    {
        const bool branch_taken_0x28706c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x287070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28706Cu;
        // 0x287070: 0x24e7fff8  addiu       $a3, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28706c) {
            ctx->pc = 0x287058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287058;
        }
    }
    ctx->pc = 0x287074u;
label_287074:
    // 0x287074: 0x3e00008  jr          $ra
    ctx->pc = 0x287074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287074u;
        // 0x287078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28707Cu;
    // 0x28707c: 0x0  nop
    ctx->pc = 0x28707cu;
    // NOP
    if (ctx->pc == 0x28707cu) { ctx->pc = 0x287080u; }
}
