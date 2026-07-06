#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2DF0
// Address: 0x2a2df0 - 0x2a2eb0
void sub_002A2DF0_0x2a2df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2DF0_0x2a2df0");
#endif

    switch (ctx->pc) {
        case 0x2a2df0u: goto label_2a2df0;
        case 0x2a2df4u: goto label_2a2df4;
        case 0x2a2df8u: goto label_2a2df8;
        case 0x2a2dfcu: goto label_2a2dfc;
        case 0x2a2e00u: goto label_2a2e00;
        case 0x2a2e04u: goto label_2a2e04;
        case 0x2a2e08u: goto label_2a2e08;
        case 0x2a2e0cu: goto label_2a2e0c;
        case 0x2a2e10u: goto label_2a2e10;
        case 0x2a2e14u: goto label_2a2e14;
        case 0x2a2e18u: goto label_2a2e18;
        case 0x2a2e1cu: goto label_2a2e1c;
        case 0x2a2e20u: goto label_2a2e20;
        case 0x2a2e24u: goto label_2a2e24;
        case 0x2a2e28u: goto label_2a2e28;
        case 0x2a2e2cu: goto label_2a2e2c;
        case 0x2a2e30u: goto label_2a2e30;
        case 0x2a2e34u: goto label_2a2e34;
        case 0x2a2e38u: goto label_2a2e38;
        case 0x2a2e3cu: goto label_2a2e3c;
        case 0x2a2e40u: goto label_2a2e40;
        case 0x2a2e44u: goto label_2a2e44;
        case 0x2a2e48u: goto label_2a2e48;
        case 0x2a2e4cu: goto label_2a2e4c;
        case 0x2a2e50u: goto label_2a2e50;
        case 0x2a2e54u: goto label_2a2e54;
        case 0x2a2e58u: goto label_2a2e58;
        case 0x2a2e5cu: goto label_2a2e5c;
        case 0x2a2e60u: goto label_2a2e60;
        case 0x2a2e64u: goto label_2a2e64;
        case 0x2a2e68u: goto label_2a2e68;
        case 0x2a2e6cu: goto label_2a2e6c;
        case 0x2a2e70u: goto label_2a2e70;
        case 0x2a2e74u: goto label_2a2e74;
        case 0x2a2e78u: goto label_2a2e78;
        case 0x2a2e7cu: goto label_2a2e7c;
        case 0x2a2e80u: goto label_2a2e80;
        case 0x2a2e84u: goto label_2a2e84;
        case 0x2a2e88u: goto label_2a2e88;
        case 0x2a2e8cu: goto label_2a2e8c;
        case 0x2a2e90u: goto label_2a2e90;
        case 0x2a2e94u: goto label_2a2e94;
        case 0x2a2e98u: goto label_2a2e98;
        case 0x2a2e9cu: goto label_2a2e9c;
        case 0x2a2ea0u: goto label_2a2ea0;
        case 0x2a2ea4u: goto label_2a2ea4;
        case 0x2a2ea8u: goto label_2a2ea8;
        case 0x2a2eacu: goto label_2a2eac;
        default: break;
    }

    ctx->pc = 0x2a2df0u;

label_2a2df0:
    // 0x2a2df0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a2df4:
    // 0x2a2df4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a2df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a2df8:
    // 0x2a2df8: 0x8c426990  lw          $v0, 0x6990($v0)
    ctx->pc = 0x2a2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27024)));
label_2a2dfc:
    // 0x2a2dfc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2a2e00:
    if (ctx->pc == 0x2A2E00u) {
        ctx->pc = 0x2A2E00u;
            // 0x2a2e00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2A2E04u;
        goto label_2a2e04;
    }
    ctx->pc = 0x2A2DFCu;
    {
        const bool branch_taken_0x2a2dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2DFCu;
            // 0x2a2e00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2dfc) {
            ctx->pc = 0x2A2E14u;
            goto label_2a2e14;
        }
    }
    ctx->pc = 0x2A2E04u;
label_2a2e04:
    // 0x2a2e04: 0xc04350c  jal         func_10D430
label_2a2e08:
    if (ctx->pc == 0x2A2E08u) {
        ctx->pc = 0x2A2E0Cu;
        goto label_2a2e0c;
    }
    ctx->pc = 0x2A2E04u;
    SET_GPR_U32(ctx, 31, 0x2A2E0Cu);
    ctx->pc = 0x10D430u;
    if (runtime->hasFunction(0x10D430u)) {
        auto targetFn = runtime->lookupFunction(0x10D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E0Cu; }
        if (ctx->pc != 0x2A2E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D430_0x10d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E0Cu; }
        if (ctx->pc != 0x2A2E0Cu) { return; }
    }
    ctx->pc = 0x2A2E0Cu;
label_2a2e0c:
    // 0x2a2e0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a2e10:
    if (ctx->pc == 0x2A2E10u) {
        ctx->pc = 0x2A2E10u;
            // 0x2a2e10: 0x40102d  daddu       $v0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E14u;
        goto label_2a2e14;
    }
    ctx->pc = 0x2A2E0Cu;
    {
        const bool branch_taken_0x2a2e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E0Cu;
            // 0x2a2e10: 0x40102d  daddu       $v0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e0c) {
            ctx->pc = 0x2A2E1Cu;
            goto label_2a2e1c;
        }
    }
    ctx->pc = 0x2A2E14u;
label_2a2e14:
    // 0x2a2e14: 0x40f809  jalr        $v0
label_2a2e18:
    if (ctx->pc == 0x2A2E18u) {
        ctx->pc = 0x2A2E1Cu;
        goto label_2a2e1c;
    }
    ctx->pc = 0x2A2E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2E1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A2E1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E1Cu; }
            if (ctx->pc != 0x2A2E1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A2E1Cu;
label_2a2e1c:
    // 0x2a2e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2e20:
    // 0x2a2e20: 0x3e00008  jr          $ra
label_2a2e24:
    if (ctx->pc == 0x2A2E24u) {
        ctx->pc = 0x2A2E24u;
            // 0x2a2e24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A2E28u;
        goto label_2a2e28;
    }
    ctx->pc = 0x2A2E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E20u;
            // 0x2a2e24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2E28u;
label_2a2e28:
    // 0x2a2e28: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2a2e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_2a2e2c:
    // 0x2a2e2c: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x2a2e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2a2e30:
    // 0x2a2e30: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a2e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e34:
    // 0x2a2e34: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2a2e38:
    if (ctx->pc == 0x2A2E38u) {
        ctx->pc = 0x2A2E38u;
            // 0x2a2e38: 0x8ca66a08  lw          $a2, 0x6A08($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27144)));
        ctx->pc = 0x2A2E3Cu;
        goto label_2a2e3c;
    }
    ctx->pc = 0x2A2E34u;
    {
        const bool branch_taken_0x2a2e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E34u;
            // 0x2a2e38: 0x8ca66a08  lw          $a2, 0x6A08($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e34) {
            ctx->pc = 0x2A2EA4u;
            goto label_2a2ea4;
        }
    }
    ctx->pc = 0x2A2E3Cu;
label_2a2e3c:
    // 0x2a2e3c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2a2e40:
    // 0x2a2e40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a2e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2a2e44:
    // 0x2a2e44: 0x2442c8c0  addiu       $v0, $v0, -0x3740
    ctx->pc = 0x2a2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
label_2a2e48:
    // 0x2a2e48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a2e4c:
    // 0x2a2e4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a2e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a2e50:
    // 0x2a2e50: 0x800008  jr          $a0
label_2a2e54:
    if (ctx->pc == 0x2A2E54u) {
        ctx->pc = 0x2A2E58u;
        goto label_2a2e58;
    }
    ctx->pc = 0x2A2E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A2E58u: goto label_2a2e58;
            case 0x2A2E68u: goto label_2a2e68;
            case 0x2A2E74u: goto label_2a2e74;
            case 0x2A2E88u: goto label_2a2e88;
            case 0x2A2EA0u: goto label_2a2ea0;
            case 0x2A2EA4u: goto label_2a2ea4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A2E58u;
label_2a2e58:
    // 0x2a2e58: 0x8ca26a08  lw          $v0, 0x6A08($a1)
    ctx->pc = 0x2a2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27144)));
label_2a2e5c:
    // 0x2a2e5c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2a2e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2a2e60:
    // 0x2a2e60: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a2e64:
    if (ctx->pc == 0x2A2E64u) {
        ctx->pc = 0x2A2E64u;
            // 0x2a2e64: 0xaca26a08  sw          $v0, 0x6A08($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 27144), GPR_U32(ctx, 2));
        ctx->pc = 0x2A2E68u;
        goto label_2a2e68;
    }
    ctx->pc = 0x2A2E60u;
    {
        const bool branch_taken_0x2a2e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E60u;
            // 0x2a2e64: 0xaca26a08  sw          $v0, 0x6A08($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 27144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e60) {
            ctx->pc = 0x2A2EA4u;
            goto label_2a2ea4;
        }
    }
    ctx->pc = 0x2A2E68u;
label_2a2e68:
    // 0x2a2e68: 0x8ca26a08  lw          $v0, 0x6A08($a1)
    ctx->pc = 0x2a2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27144)));
label_2a2e6c:
    // 0x2a2e6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a2e70:
    if (ctx->pc == 0x2A2E70u) {
        ctx->pc = 0x2A2E70u;
            // 0x2a2e70: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2A2E74u;
        goto label_2a2e74;
    }
    ctx->pc = 0x2A2E6Cu;
    {
        const bool branch_taken_0x2a2e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E6Cu;
            // 0x2a2e70: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e6c) {
            ctx->pc = 0x2A2E7Cu;
            goto label_2a2e7c;
        }
    }
    ctx->pc = 0x2A2E74u;
label_2a2e74:
    // 0x2a2e74: 0x8ca26a08  lw          $v0, 0x6A08($a1)
    ctx->pc = 0x2a2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27144)));
label_2a2e78:
    // 0x2a2e78: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2a2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2a2e7c:
    // 0x2a2e7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a2e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a2e80:
    // 0x2a2e80: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a2e84:
    if (ctx->pc == 0x2A2E84u) {
        ctx->pc = 0x2A2E84u;
            // 0x2a2e84: 0xaca26a08  sw          $v0, 0x6A08($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 27144), GPR_U32(ctx, 2));
        ctx->pc = 0x2A2E88u;
        goto label_2a2e88;
    }
    ctx->pc = 0x2A2E80u;
    {
        const bool branch_taken_0x2a2e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E80u;
            // 0x2a2e84: 0xaca26a08  sw          $v0, 0x6A08($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 27144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e80) {
            ctx->pc = 0x2A2EA4u;
            goto label_2a2ea4;
        }
    }
    ctx->pc = 0x2A2E88u;
label_2a2e88:
    // 0x2a2e88: 0x8ca36a08  lw          $v1, 0x6A08($a1)
    ctx->pc = 0x2a2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27144)));
label_2a2e8c:
    // 0x2a2e8c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2a2e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2a2e90:
    // 0x2a2e90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a2e94:
    if (ctx->pc == 0x2A2E94u) {
        ctx->pc = 0x2A2E94u;
            // 0x2a2e94: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->pc = 0x2A2E98u;
        goto label_2a2e98;
    }
    ctx->pc = 0x2A2E90u;
    {
        const bool branch_taken_0x2a2e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E90u;
            // 0x2a2e94: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e90) {
            ctx->pc = 0x2A2EA4u;
            goto label_2a2ea4;
        }
    }
    ctx->pc = 0x2A2E98u;
label_2a2e98:
    // 0x2a2e98: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a2e9c:
    if (ctx->pc == 0x2A2E9Cu) {
        ctx->pc = 0x2A2E9Cu;
            // 0x2a2e9c: 0xace26a08  sw          $v0, 0x6A08($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 27144), GPR_U32(ctx, 2));
        ctx->pc = 0x2A2EA0u;
        goto label_2a2ea0;
    }
    ctx->pc = 0x2A2E98u;
    {
        const bool branch_taken_0x2a2e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E98u;
            // 0x2a2e9c: 0xace26a08  sw          $v0, 0x6A08($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 27144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e98) {
            ctx->pc = 0x2A2EA4u;
            goto label_2a2ea4;
        }
    }
    ctx->pc = 0x2A2EA0u;
label_2a2ea0:
    // 0x2a2ea0: 0x8ca66a08  lw          $a2, 0x6A08($a1)
    ctx->pc = 0x2a2ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27144)));
label_2a2ea4:
    // 0x2a2ea4: 0x3e00008  jr          $ra
label_2a2ea8:
    if (ctx->pc == 0x2A2EA8u) {
        ctx->pc = 0x2A2EA8u;
            // 0x2a2ea8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EACu;
        goto label_2a2eac;
    }
    ctx->pc = 0x2A2EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2EA4u;
            // 0x2a2ea8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2EACu;
label_2a2eac:
    // 0x2a2eac: 0x0  nop
    ctx->pc = 0x2a2eacu;
    // NOP
    ctx->pc = 0x2a2eb0u;
}
