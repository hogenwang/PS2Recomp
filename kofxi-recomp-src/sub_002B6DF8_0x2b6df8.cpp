#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6DF8
// Address: 0x2b6df8 - 0x2b6ea8
void sub_002B6DF8_0x2b6df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6DF8_0x2b6df8");
#endif

    switch (ctx->pc) {
        case 0x2b6df8u: goto label_2b6df8;
        case 0x2b6dfcu: goto label_2b6dfc;
        case 0x2b6e00u: goto label_2b6e00;
        case 0x2b6e04u: goto label_2b6e04;
        case 0x2b6e08u: goto label_2b6e08;
        case 0x2b6e0cu: goto label_2b6e0c;
        case 0x2b6e10u: goto label_2b6e10;
        case 0x2b6e14u: goto label_2b6e14;
        case 0x2b6e18u: goto label_2b6e18;
        case 0x2b6e1cu: goto label_2b6e1c;
        case 0x2b6e20u: goto label_2b6e20;
        case 0x2b6e24u: goto label_2b6e24;
        case 0x2b6e28u: goto label_2b6e28;
        case 0x2b6e2cu: goto label_2b6e2c;
        case 0x2b6e30u: goto label_2b6e30;
        case 0x2b6e34u: goto label_2b6e34;
        case 0x2b6e38u: goto label_2b6e38;
        case 0x2b6e3cu: goto label_2b6e3c;
        case 0x2b6e40u: goto label_2b6e40;
        case 0x2b6e44u: goto label_2b6e44;
        case 0x2b6e48u: goto label_2b6e48;
        case 0x2b6e4cu: goto label_2b6e4c;
        case 0x2b6e50u: goto label_2b6e50;
        case 0x2b6e54u: goto label_2b6e54;
        case 0x2b6e58u: goto label_2b6e58;
        case 0x2b6e5cu: goto label_2b6e5c;
        case 0x2b6e60u: goto label_2b6e60;
        case 0x2b6e64u: goto label_2b6e64;
        case 0x2b6e68u: goto label_2b6e68;
        case 0x2b6e6cu: goto label_2b6e6c;
        case 0x2b6e70u: goto label_2b6e70;
        case 0x2b6e74u: goto label_2b6e74;
        case 0x2b6e78u: goto label_2b6e78;
        case 0x2b6e7cu: goto label_2b6e7c;
        case 0x2b6e80u: goto label_2b6e80;
        case 0x2b6e84u: goto label_2b6e84;
        case 0x2b6e88u: goto label_2b6e88;
        case 0x2b6e8cu: goto label_2b6e8c;
        case 0x2b6e90u: goto label_2b6e90;
        case 0x2b6e94u: goto label_2b6e94;
        case 0x2b6e98u: goto label_2b6e98;
        case 0x2b6e9cu: goto label_2b6e9c;
        case 0x2b6ea0u: goto label_2b6ea0;
        case 0x2b6ea4u: goto label_2b6ea4;
        default: break;
    }

    ctx->pc = 0x2b6df8u;

label_2b6df8:
    // 0x2b6df8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b6dfc:
    // 0x2b6dfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b6dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b6e00:
    // 0x2b6e00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b6e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b6e04:
    // 0x2b6e04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b6e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b6e08:
    // 0x2b6e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b6e0c:
    // 0x2b6e0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b6e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b6e10:
    // 0x2b6e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b6e14:
    // 0x2b6e14: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b6e18:
    // 0x2b6e18: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2b6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b6e1c:
    // 0x2b6e1c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2b6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2b6e20:
    // 0x2b6e20: 0x40f809  jalr        $v0
label_2b6e24:
    if (ctx->pc == 0x2B6E24u) {
        ctx->pc = 0x2B6E24u;
            // 0x2b6e24: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E28u;
        goto label_2b6e28;
    }
    ctx->pc = 0x2B6E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6E28u);
        ctx->pc = 0x2B6E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E20u;
            // 0x2b6e24: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6E28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E28u; }
            if (ctx->pc != 0x2B6E28u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6E28u;
label_2b6e28:
    // 0x2b6e28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b6e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6e2c:
    // 0x2b6e2c: 0x6200018  bltz        $s1, . + 4 + (0x18 << 2)
label_2b6e30:
    if (ctx->pc == 0x2B6E30u) {
        ctx->pc = 0x2B6E30u;
            // 0x2b6e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6E34u;
        goto label_2b6e34;
    }
    ctx->pc = 0x2B6E2Cu;
    {
        const bool branch_taken_0x2b6e2c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2B6E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E2Cu;
            // 0x2b6e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e2c) {
            ctx->pc = 0x2B6E90u;
            goto label_2b6e90;
        }
    }
    ctx->pc = 0x2B6E34u;
label_2b6e34:
    // 0x2b6e34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b6e38:
    // 0x2b6e38: 0x56420007  bnel        $s2, $v0, . + 4 + (0x7 << 2)
label_2b6e3c:
    if (ctx->pc == 0x2B6E3Cu) {
        ctx->pc = 0x2B6E3Cu;
            // 0x2b6e3c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x2B6E40u;
        goto label_2b6e40;
    }
    ctx->pc = 0x2B6E38u;
    {
        const bool branch_taken_0x2b6e38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b6e38) {
            ctx->pc = 0x2B6E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E38u;
            // 0x2b6e3c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B6E58u;
            goto label_2b6e58;
        }
    }
    ctx->pc = 0x2B6E40u;
label_2b6e40:
    // 0x2b6e40: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x2b6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2b6e44:
    // 0x2b6e44: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_2b6e48:
    if (ctx->pc == 0x2B6E48u) {
        ctx->pc = 0x2B6E48u;
            // 0x2b6e48: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x2B6E4Cu;
        goto label_2b6e4c;
    }
    ctx->pc = 0x2B6E44u;
    {
        const bool branch_taken_0x2b6e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6e44) {
            ctx->pc = 0x2B6E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E44u;
            // 0x2b6e48: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B6E58u;
            goto label_2b6e58;
        }
    }
    ctx->pc = 0x2B6E4Cu;
label_2b6e4c:
    // 0x2b6e4c: 0xc0aecfe  jal         func_2BB3F8
label_2b6e50:
    if (ctx->pc == 0x2B6E50u) {
        ctx->pc = 0x2B6E50u;
            // 0x2b6e50: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x2B6E54u;
        goto label_2b6e54;
    }
    ctx->pc = 0x2B6E4Cu;
    SET_GPR_U32(ctx, 31, 0x2B6E54u);
    ctx->pc = 0x2B6E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E4Cu;
            // 0x2b6e50: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB3F8u;
    if (runtime->hasFunction(0x2BB3F8u)) {
        auto targetFn = runtime->lookupFunction(0x2BB3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E54u; }
        if (ctx->pc != 0x2B6E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB3F8_0x2bb3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E54u; }
        if (ctx->pc != 0x2B6E54u) { return; }
    }
    ctx->pc = 0x2B6E54u;
label_2b6e54:
    // 0x2b6e54: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2b6e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6e58:
    // 0x2b6e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6e5c:
    // 0x2b6e5c: 0xac82010c  sw          $v0, 0x10C($a0)
    ctx->pc = 0x2b6e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 2));
label_2b6e60:
    // 0x2b6e60: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6e64:
    // 0x2b6e64: 0xa0720110  sb          $s2, 0x110($v1)
    ctx->pc = 0x2b6e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 272), (uint8_t)GPR_U32(ctx, 18));
label_2b6e68:
    // 0x2b6e68: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2b6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6e6c:
    // 0x2b6e6c: 0xa0510111  sb          $s1, 0x111($v0)
    ctx->pc = 0x2b6e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 273), (uint8_t)GPR_U32(ctx, 17));
label_2b6e70:
    // 0x2b6e70: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6e74:
    // 0x2b6e74: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2b6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2b6e78:
    // 0x2b6e78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b6e7c:
    if (ctx->pc == 0x2B6E7Cu) {
        ctx->pc = 0x2B6E7Cu;
            // 0x2b6e7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B6E80u;
        goto label_2b6e80;
    }
    ctx->pc = 0x2B6E78u;
    {
        const bool branch_taken_0x2b6e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E78u;
            // 0x2b6e7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e78) {
            ctx->pc = 0x2B6E90u;
            goto label_2b6e90;
        }
    }
    ctx->pc = 0x2B6E80u;
label_2b6e80:
    // 0x2b6e80: 0xc0adbaa  jal         func_2B6EA8
label_2b6e84:
    if (ctx->pc == 0x2B6E84u) {
        ctx->pc = 0x2B6E84u;
            // 0x2b6e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E88u;
        goto label_2b6e88;
    }
    ctx->pc = 0x2B6E80u;
    SET_GPR_U32(ctx, 31, 0x2B6E88u);
    ctx->pc = 0x2B6E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E80u;
            // 0x2b6e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6EA8u;
    if (runtime->hasFunction(0x2B6EA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E88u; }
        if (ctx->pc != 0x2B6E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6EA8_0x2b6ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E88u; }
        if (ctx->pc != 0x2B6E88u) { return; }
    }
    ctx->pc = 0x2B6E88u;
label_2b6e88:
    // 0x2b6e88: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b6e8c:
    if (ctx->pc == 0x2B6E8Cu) {
        ctx->pc = 0x2B6E8Cu;
            // 0x2b6e8c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2B6E90u;
        goto label_2b6e90;
    }
    ctx->pc = 0x2B6E88u;
    {
        const bool branch_taken_0x2b6e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E88u;
            // 0x2b6e8c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e88) {
            ctx->pc = 0x2B6E94u;
            goto label_2b6e94;
        }
    }
    ctx->pc = 0x2B6E90u;
label_2b6e90:
    // 0x2b6e90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b6e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b6e94:
    // 0x2b6e94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b6e94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b6e98:
    // 0x2b6e98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b6e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6e9c:
    // 0x2b6e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6ea0:
    // 0x2b6ea0: 0x3e00008  jr          $ra
label_2b6ea4:
    if (ctx->pc == 0x2B6EA4u) {
        ctx->pc = 0x2B6EA4u;
            // 0x2b6ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2B6EA8u;
        goto label_fallthrough_0x2b6ea0;
    }
    ctx->pc = 0x2B6EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6EA0u;
            // 0x2b6ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b6ea0:
    ctx->pc = 0x2B6EA8u;
    ctx->pc = 0x2b6ea8u;
}
