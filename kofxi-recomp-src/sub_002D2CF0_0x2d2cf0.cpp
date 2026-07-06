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

// Function: sub_002D2CF0
// Address: 0x2d2cf0 - 0x2d2da8
void sub_002D2CF0_0x2d2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2CF0_0x2d2cf0");
#endif

    switch (ctx->pc) {
        case 0x2d2d44u: goto label_2d2d44;
        case 0x2d2d60u: goto label_2d2d60;
        default: break;
    }

    ctx->pc = 0x2d2cf0u;

    // 0x2d2cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d2cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2cf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d2cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d2cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d2d00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d2d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d2d04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d2d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d2d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d2d0c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2d2d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d2d10: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2d2d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d2d14: 0x788c0  sll         $s1, $a3, 3
    ctx->pc = 0x2d2d14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2d2d18: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x2d2d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d2d1c: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x2d2d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2d2d20: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x2d2d20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d2d24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2D24u;
    {
        const bool branch_taken_0x2d2d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D24u;
        // 0x2d2d28: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d24) {
            ctx->pc = 0x2D2D80u;
            goto label_2d2d80;
        }
    }
    ctx->pc = 0x2D2D2Cu;
    // 0x2d2d2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2d30: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x2d2d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d2d34: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2D34u;
    {
        const bool branch_taken_0x2d2d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d34) {
            ctx->pc = 0x2D2D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2D34u;
            // 0x2d2d38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2D54u;
            goto label_2d2d54;
        }
    }
    ctx->pc = 0x2D2D3Cu;
    // 0x2d2d3c: 0xc0b462c  jal         func_2D18B0
    ctx->pc = 0x2D2D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D2D44u);
    ctx->pc = 0x2D2D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D3Cu;
    // 0x2d2d40: 0x24e40002  addiu       $a0, $a3, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18B0u, 0x2D2D3Cu, 0x2D2D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D44u;
label_2d2d44:
    // 0x2d2d44: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D2D44u;
    {
        const bool branch_taken_0x2d2d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d44) {
            ctx->pc = 0x2D2D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2D44u;
            // 0x2d2d48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2D94u;
            goto label_2d2d94;
        }
    }
    ctx->pc = 0x2D2D4Cu;
    // 0x2d2d4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d2d50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d2d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2d54:
    // 0x2d2d54: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d2d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d2d58: 0xc0b60a2  jal         func_2D8288
    ctx->pc = 0x2D2D58u;
    SET_GPR_U32(ctx, 31, 0x2D2D60u);
    ctx->pc = 0x2D2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D58u;
    // 0x2d2d5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8288u, 0x2D2D58u, 0x2D2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D60u;
label_2d2d60:
    // 0x2d2d60: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d2d64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d68: 0xfc920000  sd          $s2, 0x0($a0)
    ctx->pc = 0x2d2d68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 18));
    // 0x2d2d6c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d2d70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d2d74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2D74u;
    {
        const bool branch_taken_0x2d2d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D74u;
        // 0x2d2d78: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d74) {
            ctx->pc = 0x2D2D90u;
            goto label_2d2d90;
        }
    }
    ctx->pc = 0x2D2D7Cu;
    // 0x2d2d7c: 0x0  nop
    ctx->pc = 0x2d2d7cu;
    // NOP
label_2d2d80:
    // 0x2d2d80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2d84: 0xfcd20000  sd          $s2, 0x0($a2)
    ctx->pc = 0x2d2d84u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 18));
    // 0x2d2d88: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2d2d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2d2d8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2d90:
    // 0x2d2d90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d2d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d2d94:
    // 0x2d2d94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d2d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2d98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d2d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2d9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d2d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2da0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DA0u;
        // 0x2d2da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2DA8u;
}
