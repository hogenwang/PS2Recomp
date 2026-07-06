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

// Function: sub_001F9BA0
// Address: 0x1f9ba0 - 0x1f9c30
void sub_001F9BA0_0x1f9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9BA0_0x1f9ba0");
#endif

    switch (ctx->pc) {
        case 0x1f9bf4u: goto label_1f9bf4;
        default: break;
    }

    ctx->pc = 0x1f9ba0u;

    // 0x1f9ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9ba4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1f9ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9bb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f9bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f9bb4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1f9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1f9bb8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1f9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f9bbc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1f9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1f9bc0: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x1f9bc0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9bc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f9bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9bcc: 0x4c00013  bltz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F9BCCu;
    {
        const bool branch_taken_0x1f9bcc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1F9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BCCu;
        // 0x1f9bd0: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bcc) {
            ctx->pc = 0x1F9C1Cu;
            goto label_1f9c1c;
        }
    }
    ctx->pc = 0x1F9BD4u;
    // 0x1f9bd4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1f9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9bd8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1f9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1f9bdc: 0x248413a0  addiu       $a0, $a0, 0x13A0
    ctx->pc = 0x1f9bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5024));
    // 0x1f9be0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9be4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F9BE4u;
    {
        const bool branch_taken_0x1f9be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BE4u;
        // 0x1f9be8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9be4) {
            ctx->pc = 0x1F9C1Cu;
            goto label_1f9c1c;
        }
    }
    ctx->pc = 0x1F9BECu;
    // 0x1f9bec: 0xc07e70c  jal         func_1F9C30
    ctx->pc = 0x1F9BECu;
    SET_GPR_U32(ctx, 31, 0x1F9BF4u);
    ctx->pc = 0x1F9BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BECu;
    // 0x1f9bf0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C30u, 0x1F9BECu, 0x1F9BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BF4u;
label_1f9bf4:
    // 0x1f9bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9bf8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f9bfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9c00: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9C00u;
    {
        const bool branch_taken_0x1f9c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C00u;
        // 0x1f9c04: 0x34a50421  ori         $a1, $a1, 0x421 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1057);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c00) {
            ctx->pc = 0x1F9C18u;
            goto label_1f9c18;
        }
    }
    ctx->pc = 0x1F9C08u;
    // 0x1f9c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9c0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f9c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9c10: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F9C10u;
    ctx->pc = 0x1F9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C10u;
    // 0x1f9c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F9C18u;
label_1f9c18:
    // 0x1f9c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f9c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9c1c:
    // 0x1f9c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9c20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f9c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9c24: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C24u;
        // 0x1f9c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C2Cu;
    // 0x1f9c2c: 0x0  nop
    ctx->pc = 0x1f9c2cu;
    // NOP
    if (ctx->pc == 0x1f9c2cu) { ctx->pc = 0x1f9c30u; }
}
