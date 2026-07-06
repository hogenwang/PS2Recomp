#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234CC8
// Address: 0x234cc8 - 0x234d80
void sub_00234CC8_0x234cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234CC8_0x234cc8");
#endif

    switch (ctx->pc) {
        case 0x234d28u: goto label_234d28;
        case 0x234d38u: goto label_234d38;
        case 0x234d4cu: goto label_234d4c;
        default: break;
    }

    ctx->pc = 0x234cc8u;

    // 0x234cc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234ccc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x234cd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x234cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x234cd4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x234cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x234cd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x234cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x234cdc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x234cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x234ce0: 0x8c45fcf8  lw          $a1, -0x308($v0)
    ctx->pc = 0x234ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966520)));
    // 0x234ce4: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x234ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x234ce8: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x234CE8u;
    {
        const bool branch_taken_0x234ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234CE8u;
            // 0x234cec: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ce8) {
            ctx->pc = 0x234D60u;
            goto label_234d60;
        }
    }
    ctx->pc = 0x234CF0u;
    // 0x234cf0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x234cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x234cf4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234CF4u;
    {
        const bool branch_taken_0x234cf4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x234CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234CF4u;
            // 0x234cf8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cf4) {
            ctx->pc = 0x234D04u;
            goto label_234d04;
        }
    }
    ctx->pc = 0x234CFCu;
    // 0x234cfc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x234CFCu;
    {
        const bool branch_taken_0x234cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234CFCu;
            // 0x234d00: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cfc) {
            ctx->pc = 0x234D64u;
            goto label_234d64;
        }
    }
    ctx->pc = 0x234D04u;
label_234d04:
    // 0x234d04: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x234d08: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x234d08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x234d0c: 0x8c50fcb8  lw          $s0, -0x348($v0)
    ctx->pc = 0x234d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966456)));
    // 0x234d10: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x234D10u;
    {
        const bool branch_taken_0x234d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234D10u;
            // 0x234d14: 0xa3880b  movn        $s1, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d10) {
            ctx->pc = 0x234D60u;
            goto label_234d60;
        }
    }
    ctx->pc = 0x234D18u;
    // 0x234d18: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x234D18u;
    {
        const bool branch_taken_0x234d18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234D18u;
            // 0x234d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d18) {
            ctx->pc = 0x234D64u;
            goto label_234d64;
        }
    }
    ctx->pc = 0x234D20u;
    // 0x234d20: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x234d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x234d24: 0x0  nop
    ctx->pc = 0x234d24u;
    // NOP
label_234d28:
    // 0x234d28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x234d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d2c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x234d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x234d30: 0xc04a966  jal         func_12A598
    ctx->pc = 0x234D30u;
    SET_GPR_U32(ctx, 31, 0x234D38u);
    ctx->pc = 0x234D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234D30u;
            // 0x234d34: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D38u; }
        if (ctx->pc != 0x234D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D38u; }
        if (ctx->pc != 0x234D38u) { return; }
    }
    ctx->pc = 0x234D38u;
label_234d38:
    // 0x234d38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d3c: 0xa3a0000f  sb          $zero, 0xF($sp)
    ctx->pc = 0x234d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x234d40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x234d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d44: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x234D44u;
    SET_GPR_U32(ctx, 31, 0x234D4Cu);
    ctx->pc = 0x234D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234D44u;
            // 0x234d48: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D4Cu; }
        if (ctx->pc != 0x234D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D4Cu; }
        if (ctx->pc != 0x234D4Cu) { return; }
    }
    ctx->pc = 0x234D4Cu;
label_234d4c:
    // 0x234d4c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x234d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234d50: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234D50u;
    {
        const bool branch_taken_0x234d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234D50u;
            // 0x234d54: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d50) {
            ctx->pc = 0x234D60u;
            goto label_234d60;
        }
    }
    ctx->pc = 0x234D58u;
    // 0x234d58: 0x5620fff3  bnel        $s1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x234D58u;
    {
        const bool branch_taken_0x234d58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x234d58) {
            ctx->pc = 0x234D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234D58u;
            // 0x234d5c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234d28;
        }
    }
    ctx->pc = 0x234D60u;
label_234d60:
    // 0x234d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234d64:
    // 0x234d64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x234d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234d68: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x234d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234d6c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x234d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234d70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x234d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234d74: 0x3e00008  jr          $ra
    ctx->pc = 0x234D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234D74u;
            // 0x234d78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234D7Cu;
    // 0x234d7c: 0x0  nop
    ctx->pc = 0x234d7cu;
    // NOP
    ctx->pc = 0x234d80u;
}
