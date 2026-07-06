#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6DA0
// Address: 0x1a6da0 - 0x1a7140
void sub_001A6DA0_0x1a6da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6DA0_0x1a6da0");
#endif

    switch (ctx->pc) {
        case 0x1a6db8u: goto label_1a6db8;
        case 0x1a6dc4u: goto label_1a6dc4;
        case 0x1a6de8u: goto label_1a6de8;
        case 0x1a6e00u: goto label_1a6e00;
        case 0x1a6e0cu: goto label_1a6e0c;
        case 0x1a6e30u: goto label_1a6e30;
        case 0x1a6e58u: goto label_1a6e58;
        case 0x1a6f38u: goto label_1a6f38;
        case 0x1a6f4cu: goto label_1a6f4c;
        case 0x1a6fb0u: goto label_1a6fb0;
        case 0x1a6fd4u: goto label_1a6fd4;
        case 0x1a6ff0u: goto label_1a6ff0;
        case 0x1a6ff8u: goto label_1a6ff8;
        case 0x1a700cu: goto label_1a700c;
        case 0x1a70b8u: goto label_1a70b8;
        case 0x1a70dcu: goto label_1a70dc;
        default: break;
    }

    ctx->pc = 0x1a6da0u;

    // 0x1a6da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6da8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a6da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a6dac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6db0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A6DB0u;
    SET_GPR_U32(ctx, 31, 0x1A6DB8u);
    ctx->pc = 0x1A6DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DB0u;
            // 0x1a6db4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DB8u; }
        if (ctx->pc != 0x1A6DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DB8u; }
        if (ctx->pc != 0x1A6DB8u) { return; }
    }
    ctx->pc = 0x1A6DB8u;
label_1a6db8:
    // 0x1a6db8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6dbc: 0xc0697b6  jal         func_1A5ED8
    ctx->pc = 0x1A6DBCu;
    SET_GPR_U32(ctx, 31, 0x1A6DC4u);
    ctx->pc = 0x1A6DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DBCu;
            // 0x1a6dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5ED8u;
    if (runtime->hasFunction(0x1A5ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1A5ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DC4u; }
        if (ctx->pc != 0x1A6DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5ED8_0x1a5ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DC4u; }
        if (ctx->pc != 0x1A6DC4u) { return; }
    }
    ctx->pc = 0x1A6DC4u;
label_1a6dc4:
    // 0x1a6dc4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6DC4u;
    {
        const bool branch_taken_0x1a6dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DC4u;
            // 0x1a6dc8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dc4) {
            ctx->pc = 0x1A6DD8u;
            goto label_1a6dd8;
        }
    }
    ctx->pc = 0x1A6DCCu;
    // 0x1a6dcc: 0xf  sync
    ctx->pc = 0x1a6dccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6dd0: 0x42000038  ei
    ctx->pc = 0x1a6dd0u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x1a6dd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6dd8:
    // 0x1a6dd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DE0u;
            // 0x1a6de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6DE8u;
label_1a6de8:
    // 0x1a6de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6df0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a6df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a6df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6df8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A6DF8u;
    SET_GPR_U32(ctx, 31, 0x1A6E00u);
    ctx->pc = 0x1A6DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DF8u;
            // 0x1a6dfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E00u; }
        if (ctx->pc != 0x1A6E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E00u; }
        if (ctx->pc != 0x1A6E00u) { return; }
    }
    ctx->pc = 0x1A6E00u;
label_1a6e00:
    // 0x1a6e00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e04: 0xc069856  jal         func_1A6158
    ctx->pc = 0x1A6E04u;
    SET_GPR_U32(ctx, 31, 0x1A6E0Cu);
    ctx->pc = 0x1A6E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E04u;
            // 0x1a6e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6158u;
    if (runtime->hasFunction(0x1A6158u)) {
        auto targetFn = runtime->lookupFunction(0x1A6158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E0Cu; }
        if (ctx->pc != 0x1A6E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6158_0x1a6158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E0Cu; }
        if (ctx->pc != 0x1A6E0Cu) { return; }
    }
    ctx->pc = 0x1A6E0Cu;
label_1a6e0c:
    // 0x1a6e0c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6E0Cu;
    {
        const bool branch_taken_0x1a6e0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E0Cu;
            // 0x1a6e10: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e0c) {
            ctx->pc = 0x1A6E20u;
            goto label_1a6e20;
        }
    }
    ctx->pc = 0x1A6E14u;
    // 0x1a6e14: 0xf  sync
    ctx->pc = 0x1a6e14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6e18: 0x42000038  ei
    ctx->pc = 0x1a6e18u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x1a6e1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6e20:
    // 0x1a6e20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6e28: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E28u;
            // 0x1a6e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6E30u;
label_1a6e30:
    // 0x1a6e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6e34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a6e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a6e38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a6e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6e44: 0x111282  srl         $v0, $s1, 10
    ctx->pc = 0x1a6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 10));
    // 0x1a6e48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a6e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a6e4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a6e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e50: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A6E50u;
    SET_GPR_U32(ctx, 31, 0x1A6E58u);
    ctx->pc = 0x1A6E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E50u;
            // 0x1a6e54: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E58u; }
        if (ctx->pc != 0x1A6E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E58u; }
        if (ctx->pc != 0x1A6E58u) { return; }
    }
    ctx->pc = 0x1A6E58u;
label_1a6e58:
    // 0x1a6e58: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A6E58u;
    {
        const bool branch_taken_0x1a6e58 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1A6E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E58u;
            // 0x1a6e5c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e58) {
            ctx->pc = 0x1A6E84u;
            goto label_1a6e84;
        }
    }
    ctx->pc = 0x1A6E60u;
    // 0x1a6e60: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a6e64: 0x322203ff  andi        $v0, $s1, 0x3FF
    ctx->pc = 0x1a6e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1023);
    // 0x1a6e68: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6E68u;
    {
        const bool branch_taken_0x1a6e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a6e68) {
            ctx->pc = 0x1A6E84u;
            goto label_1a6e84;
        }
    }
    ctx->pc = 0x1A6E70u;
    // 0x1a6e70: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a6e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1a6e74: 0x2482e118  addiu       $v0, $a0, -0x1EE8
    ctx->pc = 0x1a6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959384));
    // 0x1a6e78: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1a6e7c: 0x54710007  bnel        $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6E7Cu;
    {
        const bool branch_taken_0x1a6e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a6e7c) {
            ctx->pc = 0x1A6E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E7Cu;
            // 0x1a6e80: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6E9Cu;
            goto label_1a6e9c;
        }
    }
    ctx->pc = 0x1A6E84u;
label_1a6e84:
    // 0x1a6e84: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A6E84u;
    {
        const bool branch_taken_0x1a6e84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E84u;
            // 0x1a6e88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e84) {
            ctx->pc = 0x1A6F1Cu;
            goto label_1a6f1c;
        }
    }
    ctx->pc = 0x1A6E8Cu;
    // 0x1a6e8c: 0xf  sync
    ctx->pc = 0x1a6e8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6e90: 0x42000038  ei
    ctx->pc = 0x1a6e90u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x1a6e94: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A6E94u;
    {
        const bool branch_taken_0x1a6e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E94u;
            // 0x1a6e98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e94) {
            ctx->pc = 0x1A6F20u;
            goto label_1a6f20;
        }
    }
    ctx->pc = 0x1A6E9Cu;
label_1a6e9c:
    // 0x1a6e9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a6e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a6ea0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A6EA0u;
    {
        const bool branch_taken_0x1a6ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EA0u;
            // 0x1a6ea4: 0xde050018  ld          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ea0) {
            ctx->pc = 0x1A6F04u;
            goto label_1a6f04;
        }
    }
    ctx->pc = 0x1A6EA8u;
    // 0x1a6ea8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6eac: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a6eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1a6eb0: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a6eb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6eb4: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a6eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000010
    // 0x1a6eb8: 0xdc8ae118  ld          $t2, -0x1EE8($a0)
    ctx->pc = 0x1a6eb8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 4294959384)));
    // 0x1a6ebc: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a6ebcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x1a6ec0: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6EC0u;
    {
        const bool branch_taken_0x1a6ec0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EC0u;
            // 0x1a6ec4: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ec0) {
            ctx->pc = 0x1A6ED0u;
            goto label_1a6ed0;
        }
    }
    ctx->pc = 0x1A6EC8u;
    // 0x1a6ec8: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a6ec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6ecc: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a6eccu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a6ed0:
    // 0x1a6ed0: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a6ed0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1a6ed4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a6ed4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a6ed8: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a6ed8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1a6edc: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1a6edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1a6ee0: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a6ee0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1a6ee4: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x1a6ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1a6ee8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a6ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6eec: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x1a6eecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
    // 0x1a6ef0: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x1a6ef0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a6ef4: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x1a6ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x1a6ef8: 0x83182f  dsubu       $v1, $a0, $v1
    ctx->pc = 0x1a6ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x1a6efc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6EFCu;
    {
        const bool branch_taken_0x1a6efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EFCu;
            // 0x1a6f00: 0xa3282d  daddu       $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6efc) {
            ctx->pc = 0x1A6F08u;
            goto label_1a6f08;
        }
    }
    ctx->pc = 0x1A6F04u;
label_1a6f04:
    // 0x1a6f04: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x1a6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_1a6f08:
    // 0x1a6f08: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6F08u;
    {
        const bool branch_taken_0x1a6f08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F08u;
            // 0x1a6f0c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f08) {
            ctx->pc = 0x1A6F1Cu;
            goto label_1a6f1c;
        }
    }
    ctx->pc = 0x1A6F10u;
    // 0x1a6f10: 0xf  sync
    ctx->pc = 0x1a6f10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6f14: 0x42000038  ei
    ctx->pc = 0x1a6f14u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x1a6f18: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a6f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f1c:
    // 0x1a6f1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a6f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6f20:
    // 0x1a6f20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6f20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6f24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6f28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F2Cu;
            // 0x1a6f30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6F34u;
    // 0x1a6f34: 0x0  nop
    ctx->pc = 0x1a6f34u;
    // NOP
label_1a6f38:
    // 0x1a6f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6f40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6f44: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A6F44u;
    SET_GPR_U32(ctx, 31, 0x1A6F4Cu);
    ctx->pc = 0x1A6F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F44u;
            // 0x1a6f48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F4Cu; }
        if (ctx->pc != 0x1A6F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F4Cu; }
        if (ctx->pc != 0x1A6F4Cu) { return; }
    }
    ctx->pc = 0x1A6F4Cu;
label_1a6f4c:
    // 0x1a6f4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f50: 0x101282  srl         $v0, $s0, 10
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 10));
    // 0x1a6f54: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6F54u;
    {
        const bool branch_taken_0x1a6f54 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A6F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F54u;
            // 0x1a6f58: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f54) {
            ctx->pc = 0x1A6F6Cu;
            goto label_1a6f6c;
        }
    }
    ctx->pc = 0x1A6F5Cu;
    // 0x1a6f5c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a6f60: 0x320203ff  andi        $v0, $s0, 0x3FF
    ctx->pc = 0x1a6f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1023);
    // 0x1a6f64: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6F64u;
    {
        const bool branch_taken_0x1a6f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a6f64) {
            ctx->pc = 0x1A6F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F64u;
            // 0x1a6f68: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F74u;
            goto label_1a6f74;
        }
    }
    ctx->pc = 0x1A6F6Cu;
label_1a6f6c:
    // 0x1a6f6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6F6Cu;
    {
        const bool branch_taken_0x1a6f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F6Cu;
            // 0x1a6f70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f6c) {
            ctx->pc = 0x1A6F8Cu;
            goto label_1a6f8c;
        }
    }
    ctx->pc = 0x1A6F74u;
label_1a6f74:
    // 0x1a6f74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a6f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a6f78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6F78u;
    {
        const bool branch_taken_0x1a6f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f78) {
            ctx->pc = 0x1A6F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F78u;
            // 0x1a6f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F8Cu;
            goto label_1a6f8c;
        }
    }
    ctx->pc = 0x1A6F80u;
    // 0x1a6f80: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x1a6f80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a6f84: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x1a6f84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a6f88: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1a6f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_1a6f8c:
    // 0x1a6f8c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6F8Cu;
    {
        const bool branch_taken_0x1a6f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F8Cu;
            // 0x1a6f90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f8c) {
            ctx->pc = 0x1A6FA0u;
            goto label_1a6fa0;
        }
    }
    ctx->pc = 0x1A6F94u;
    // 0x1a6f94: 0xf  sync
    ctx->pc = 0x1a6f94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6f98: 0x42000038  ei
    ctx->pc = 0x1a6f98u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x1a6f9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6fa0:
    // 0x1a6fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FA4u;
            // 0x1a6fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6FACu;
    // 0x1a6fac: 0x0  nop
    ctx->pc = 0x1a6facu;
    // NOP
label_1a6fb0:
    // 0x1a6fb0: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1a6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x1a6fb4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6FB4u;
    {
        const bool branch_taken_0x1a6fb4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A6FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FB4u;
            // 0x1a6fb8: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fb4) {
            ctx->pc = 0x1A6FCCu;
            goto label_1a6fcc;
        }
    }
    ctx->pc = 0x1A6FBCu;
    // 0x1a6fbc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a6fc0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1a6fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1a6fc4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6FC4u;
    {
        const bool branch_taken_0x1a6fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a6fc4) {
            ctx->pc = 0x1A6FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FC4u;
            // 0x1a6fc8: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6FD4u;
            goto label_1a6fd4;
        }
    }
    ctx->pc = 0x1A6FCCu;
label_1a6fcc:
    // 0x1a6fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FCCu;
            // 0x1a6fd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6FD4u;
label_1a6fd4:
    // 0x1a6fd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a6fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a6fd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6FD8u;
    {
        const bool branch_taken_0x1a6fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6fd8) {
            ctx->pc = 0x1A6FF0u;
            goto label_1a6ff0;
        }
    }
    ctx->pc = 0x1A6FE0u;
    // 0x1a6fe0: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x1a6fe0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a6fe4: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x1a6fe4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a6fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FE8u;
            // 0x1a6fec: 0x43102f  dsubu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6FF0u;
label_1a6ff0:
    // 0x1a6ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FF0u;
            // 0x1a6ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6FF8u;
label_1a6ff8:
    // 0x1a6ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7004: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A7004u;
    SET_GPR_U32(ctx, 31, 0x1A700Cu);
    ctx->pc = 0x1A7008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7004u;
            // 0x1a7008: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A700Cu; }
        if (ctx->pc != 0x1A700Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A700Cu; }
        if (ctx->pc != 0x1A700Cu) { return; }
    }
    ctx->pc = 0x1A700Cu;
label_1a700c:
    // 0x1a700c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a700cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7010: 0x101282  srl         $v0, $s0, 10
    ctx->pc = 0x1a7010u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 10));
    // 0x1a7014: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7014u;
    {
        const bool branch_taken_0x1a7014 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A7018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7014u;
            // 0x1a7018: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7014) {
            ctx->pc = 0x1A702Cu;
            goto label_1a702c;
        }
    }
    ctx->pc = 0x1A701Cu;
    // 0x1a701c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a7020: 0x320203ff  andi        $v0, $s0, 0x3FF
    ctx->pc = 0x1a7020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1023);
    // 0x1a7024: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7024u;
    {
        const bool branch_taken_0x1a7024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a7024) {
            ctx->pc = 0x1A7028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7024u;
            // 0x1a7028: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7034u;
            goto label_1a7034;
        }
    }
    ctx->pc = 0x1A702Cu;
label_1a702c:
    // 0x1a702c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A702Cu;
    {
        const bool branch_taken_0x1a702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A702Cu;
            // 0x1a7030: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a702c) {
            ctx->pc = 0x1A7094u;
            goto label_1a7094;
        }
    }
    ctx->pc = 0x1A7034u;
label_1a7034:
    // 0x1a7034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a7034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a7038: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A7038u;
    {
        const bool branch_taken_0x1a7038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A703Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7038u;
            // 0x1a703c: 0xdc860018  ld          $a2, 0x18($a0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7038) {
            ctx->pc = 0x1A7090u;
            goto label_1a7090;
        }
    }
    ctx->pc = 0x1A7040u;
    // 0x1a7040: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a7040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a7044: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a7044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a7048: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a7048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1a704c: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a704cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7050: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a7050u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000010
    // 0x1a7054: 0xdcaae118  ld          $t2, -0x1EE8($a1)
    ctx->pc = 0x1a7054u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 4294959384)));
    // 0x1a7058: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a7058u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x1a705c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A705Cu;
    {
        const bool branch_taken_0x1a705c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A705Cu;
            // 0x1a7060: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a705c) {
            ctx->pc = 0x1A706Cu;
            goto label_1a706c;
        }
    }
    ctx->pc = 0x1A7064u;
    // 0x1a7064: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a7064u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7068: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a7068u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a706c:
    // 0x1a706c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a706cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1a7070: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a7070u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a7074: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a7074u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1a7078: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1a7078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1a707c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a707cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1a7080: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x1a7080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1a7084: 0xdc840010  ld          $a0, 0x10($a0)
    ctx->pc = 0x1a7084u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a7088: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x1a7088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x1a708c: 0xc3302d  daddu       $a2, $a2, $v1
    ctx->pc = 0x1a708cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 3));
label_1a7090:
    // 0x1a7090: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a7090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7094:
    // 0x1a7094: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7094u;
    {
        const bool branch_taken_0x1a7094 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7094u;
            // 0x1a7098: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7094) {
            ctx->pc = 0x1A70A8u;
            goto label_1a70a8;
        }
    }
    ctx->pc = 0x1A709Cu;
    // 0x1a709c: 0xf  sync
    ctx->pc = 0x1a709cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a70a0: 0x42000038  ei
    ctx->pc = 0x1a70a0u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x1a70a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a70a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a70a8:
    // 0x1a70a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a70a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a70ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A70ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A70B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70ACu;
            // 0x1a70b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A70B4u;
    // 0x1a70b4: 0x0  nop
    ctx->pc = 0x1a70b4u;
    // NOP
label_1a70b8:
    // 0x1a70b8: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x1a70bc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A70BCu;
    {
        const bool branch_taken_0x1a70bc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A70C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70BCu;
            // 0x1a70c0: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70bc) {
            ctx->pc = 0x1A70D4u;
            goto label_1a70d4;
        }
    }
    ctx->pc = 0x1A70C4u;
    // 0x1a70c4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1a70c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a70c8: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1a70c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1a70cc: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A70CCu;
    {
        const bool branch_taken_0x1a70cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a70cc) {
            ctx->pc = 0x1A70D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70CCu;
            // 0x1a70d0: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A70DCu;
            goto label_1a70dc;
        }
    }
    ctx->pc = 0x1A70D4u;
label_1a70d4:
    // 0x1a70d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A70D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A70D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70D4u;
            // 0x1a70d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A70DCu;
label_1a70dc:
    // 0x1a70dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a70dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a70e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A70E0u;
    {
        const bool branch_taken_0x1a70e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70E0u;
            // 0x1a70e4: 0xdce60018  ld          $a2, 0x18($a3) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70e0) {
            ctx->pc = 0x1A7138u;
            goto label_1a7138;
        }
    }
    ctx->pc = 0x1A70E8u;
    // 0x1a70e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a70ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a70ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a70f0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a70f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1a70f4: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a70f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a70f8: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a70f8u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000010
    // 0x1a70fc: 0xdcaae118  ld          $t2, -0x1EE8($a1)
    ctx->pc = 0x1a70fcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 4294959384)));
    // 0x1a7100: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a7100u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x1a7104: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7104u;
    {
        const bool branch_taken_0x1a7104 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7104u;
            // 0x1a7108: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7104) {
            ctx->pc = 0x1A7114u;
            goto label_1a7114;
        }
    }
    ctx->pc = 0x1A710Cu;
    // 0x1a710c: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a710cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7110: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a7110u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a7114:
    // 0x1a7114: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a7114u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1a7118: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a7118u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a711c: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a711cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1a7120: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1a7120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1a7124: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a7124u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1a7128: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x1a7128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1a712c: 0xdce40010  ld          $a0, 0x10($a3)
    ctx->pc = 0x1a712cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1a7130: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x1a7130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x1a7134: 0xc3302d  daddu       $a2, $a2, $v1
    ctx->pc = 0x1a7134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 3));
label_1a7138:
    // 0x1a7138: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A713Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7138u;
            // 0x1a713c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7140u;
    ctx->pc = 0x1a7140u;
}
