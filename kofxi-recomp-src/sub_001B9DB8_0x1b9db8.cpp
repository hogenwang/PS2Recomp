#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9DB8
// Address: 0x1b9db8 - 0x1b9f18
void sub_001B9DB8_0x1b9db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9DB8_0x1b9db8");
#endif

    switch (ctx->pc) {
        case 0x1b9e08u: goto label_1b9e08;
        case 0x1b9e20u: goto label_1b9e20;
        case 0x1b9e58u: goto label_1b9e58;
        case 0x1b9e9cu: goto label_1b9e9c;
        case 0x1b9eb0u: goto label_1b9eb0;
        case 0x1b9ed0u: goto label_1b9ed0;
        case 0x1b9eecu: goto label_1b9eec;
        case 0x1b9ef8u: goto label_1b9ef8;
        case 0x1b9f00u: goto label_1b9f00;
        default: break;
    }

    ctx->pc = 0x1b9db8u;

    // 0x1b9db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9dc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9dc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b9dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b9dc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b9dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9dcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b9dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b9dd0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b9dd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9dd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9dd8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9DD8u;
    {
        const bool branch_taken_0x1b9dd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DD8u;
            // 0x1b9ddc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9dd8) {
            ctx->pc = 0x1B9E08u;
            goto label_1b9e08;
        }
    }
    ctx->pc = 0x1B9DE0u;
    // 0x1b9de0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b9de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9dec: 0x24848238  addiu       $a0, $a0, -0x7DC8
    ctx->pc = 0x1b9decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935096));
    // 0x1b9df0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9df0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9df4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b9df4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9df8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b9df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9dfc: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B9DFCu;
    ctx->pc = 0x1B9E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DFCu;
            // 0x1b9e00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9E04u;
    // 0x1b9e04: 0x0  nop
    ctx->pc = 0x1b9e04u;
    // NOP
label_1b9e08:
    // 0x1b9e08: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x1b9e08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x1b9e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9e10: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9E10u;
    {
        const bool branch_taken_0x1b9e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E10u;
            // 0x1b9e14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e10) {
            ctx->pc = 0x1B9E34u;
            goto label_1b9e34;
        }
    }
    ctx->pc = 0x1B9E18u;
    // 0x1b9e18: 0xc06d906  jal         func_1B6418
    ctx->pc = 0x1B9E18u;
    SET_GPR_U32(ctx, 31, 0x1B9E20u);
    ctx->pc = 0x1B9E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E18u;
            // 0x1b9e1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6418u;
    if (runtime->hasFunction(0x1B6418u)) {
        auto targetFn = runtime->lookupFunction(0x1B6418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E20u; }
        if (ctx->pc != 0x1B9E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6418_0x1b6418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E20u; }
        if (ctx->pc != 0x1B9E20u) { return; }
    }
    ctx->pc = 0x1B9E20u;
label_1b9e20:
    // 0x1b9e20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b9e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e24: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1b9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1b9e28: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9E28u;
    {
        const bool branch_taken_0x1b9e28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E28u;
            // 0x1b9e2c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e28) {
            ctx->pc = 0x1B9E38u;
            goto label_1b9e38;
        }
    }
    ctx->pc = 0x1B9E30u;
    // 0x1b9e30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b9e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e34:
    // 0x1b9e34: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b9e38:
    // 0x1b9e38: 0x8c622358  lw          $v0, 0x2358($v1)
    ctx->pc = 0x1b9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9048)));
    // 0x1b9e3c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9E3Cu;
    {
        const bool branch_taken_0x1b9e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E3Cu;
            // 0x1b9e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e3c) {
            ctx->pc = 0x1B9E74u;
            goto label_1b9e74;
        }
    }
    ctx->pc = 0x1B9E44u;
    // 0x1b9e44: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1b9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1b9e48: 0x5662000a  bnel        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B9E48u;
    {
        const bool branch_taken_0x1b9e48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b9e48) {
            ctx->pc = 0x1B9E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E48u;
            // 0x1b9e4c: 0x2713021  addu        $a2, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9E74u;
            goto label_1b9e74;
        }
    }
    ctx->pc = 0x1B9E50u;
    // 0x1b9e50: 0xc06d89c  jal         func_1B6270
    ctx->pc = 0x1B9E50u;
    SET_GPR_U32(ctx, 31, 0x1B9E58u);
    ctx->pc = 0x1B9E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E50u;
            // 0x1b9e54: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6270u;
    if (runtime->hasFunction(0x1B6270u)) {
        auto targetFn = runtime->lookupFunction(0x1B6270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E58u; }
        if (ctx->pc != 0x1B9E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6270_0x1b6270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E58u; }
        if (ctx->pc != 0x1B9E58u) { return; }
    }
    ctx->pc = 0x1B9E58u;
label_1b9e58:
    // 0x1b9e58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b9e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9e5c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9E5Cu;
    {
        const bool branch_taken_0x1b9e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9e5c) {
            ctx->pc = 0x1B9E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E5Cu;
            // 0x1b9e60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9E70u;
            goto label_1b9e70;
        }
    }
    ctx->pc = 0x1B9E64u;
    // 0x1b9e64: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b9e68: 0x2406fff1  addiu       $a2, $zero, -0xF
    ctx->pc = 0x1b9e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1b9e6c: 0x52300b  movn        $a2, $v0, $s2
    ctx->pc = 0x1b9e6cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1b9e70:
    // 0x1b9e70: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x1b9e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_1b9e74:
    // 0x1b9e74: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1b9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1b9e78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b9e7c: 0xa4530042  sh          $s3, 0x42($v0)
    ctx->pc = 0x1b9e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 19));
    // 0x1b9e80: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x1b9e80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1b9e84: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1b9e84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b9e88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9E88u;
    {
        const bool branch_taken_0x1b9e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E88u;
            // 0x1b9e8c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e88) {
            ctx->pc = 0x1B9EA8u;
            goto label_1b9ea8;
        }
    }
    ctx->pc = 0x1B9E90u;
    // 0x1b9e90: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b9e94: 0xc06d330  jal         func_1B4CC0
    ctx->pc = 0x1B9E94u;
    SET_GPR_U32(ctx, 31, 0x1B9E9Cu);
    ctx->pc = 0x1B9E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E94u;
            // 0x1b9e98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4CC0u;
    if (runtime->hasFunction(0x1B4CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E9Cu; }
        if (ctx->pc != 0x1B9E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4CC0_0x1b4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E9Cu; }
        if (ctx->pc != 0x1B9E9Cu) { return; }
    }
    ctx->pc = 0x1B9E9Cu;
label_1b9e9c:
    // 0x1b9e9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9E9Cu;
    {
        const bool branch_taken_0x1b9e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E9Cu;
            // 0x1b9ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e9c) {
            ctx->pc = 0x1B9EB4u;
            goto label_1b9eb4;
        }
    }
    ctx->pc = 0x1B9EA4u;
    // 0x1b9ea4: 0x0  nop
    ctx->pc = 0x1b9ea4u;
    // NOP
label_1b9ea8:
    // 0x1b9ea8: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B9EA8u;
    SET_GPR_U32(ctx, 31, 0x1B9EB0u);
    ctx->pc = 0x1B9EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EA8u;
            // 0x1b9eac: 0x24848268  addiu       $a0, $a0, -0x7D98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EB0u; }
        if (ctx->pc != 0x1B9EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EB0u; }
        if (ctx->pc != 0x1B9EB0u) { return; }
    }
    ctx->pc = 0x1B9EB0u;
label_1b9eb0:
    // 0x1b9eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9eb4:
    // 0x1b9eb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9eb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9ebc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b9ebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b9ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EC4u;
            // 0x1b9ec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9ECCu;
    // 0x1b9ecc: 0x0  nop
    ctx->pc = 0x1b9eccu;
    // NOP
label_1b9ed0:
    // 0x1b9ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9ed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9edc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9ee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9ee4: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B9EE4u;
    SET_GPR_U32(ctx, 31, 0x1B9EECu);
    ctx->pc = 0x1B9EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EE4u;
            // 0x1b9ee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EECu; }
        if (ctx->pc != 0x1B9EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EECu; }
        if (ctx->pc != 0x1B9EECu) { return; }
    }
    ctx->pc = 0x1B9EECu;
label_1b9eec:
    // 0x1b9eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ef0: 0xc06e7c6  jal         func_1B9F18
    ctx->pc = 0x1B9EF0u;
    SET_GPR_U32(ctx, 31, 0x1B9EF8u);
    ctx->pc = 0x1B9EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EF0u;
            // 0x1b9ef4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F18u;
    if (runtime->hasFunction(0x1B9F18u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EF8u; }
        if (ctx->pc != 0x1B9EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F18_0x1b9f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EF8u; }
        if (ctx->pc != 0x1B9EF8u) { return; }
    }
    ctx->pc = 0x1B9EF8u;
label_1b9ef8:
    // 0x1b9ef8: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B9EF8u;
    SET_GPR_U32(ctx, 31, 0x1B9F00u);
    ctx->pc = 0x1B9EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EF8u;
            // 0x1b9efc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F00u; }
        if (ctx->pc != 0x1B9F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F00u; }
        if (ctx->pc != 0x1B9F00u) { return; }
    }
    ctx->pc = 0x1B9F00u;
label_1b9f00:
    // 0x1b9f00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9f04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f10: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F10u;
            // 0x1b9f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9F18u;
    ctx->pc = 0x1b9f18u;
}
