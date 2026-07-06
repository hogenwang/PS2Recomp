#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3DB0
// Address: 0x1a3db0 - 0x1a3f30
void sub_001A3DB0_0x1a3db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3DB0_0x1a3db0");
#endif

    switch (ctx->pc) {
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3de8u: goto label_1a3de8;
        case 0x1a3e00u: goto label_1a3e00;
        case 0x1a3e30u: goto label_1a3e30;
        case 0x1a3e44u: goto label_1a3e44;
        case 0x1a3e50u: goto label_1a3e50;
        case 0x1a3e5cu: goto label_1a3e5c;
        case 0x1a3e84u: goto label_1a3e84;
        case 0x1a3e9cu: goto label_1a3e9c;
        case 0x1a3ea0u: goto label_1a3ea0;
        case 0x1a3ea8u: goto label_1a3ea8;
        case 0x1a3ec0u: goto label_1a3ec0;
        case 0x1a3ed4u: goto label_1a3ed4;
        case 0x1a3ee4u: goto label_1a3ee4;
        case 0x1a3eecu: goto label_1a3eec;
        default: break;
    }

    ctx->pc = 0x1a3db0u;

    // 0x1a3db0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1a3db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1a3db4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a3db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a3db8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a3db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a3dbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a3dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3dc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3dc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3dcc: 0xc0531b8  jal         func_14C6E0
    ctx->pc = 0x1A3DCCu;
    SET_GPR_U32(ctx, 31, 0x1A3DD4u);
    ctx->pc = 0x1A3DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DCCu;
            // 0x1a3dd0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C6E0u;
    if (runtime->hasFunction(0x14C6E0u)) {
        auto targetFn = runtime->lookupFunction(0x14C6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DD4u; }
        if (ctx->pc != 0x1A3DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C6E0_0x14c6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DD4u; }
        if (ctx->pc != 0x1A3DD4u) { return; }
    }
    ctx->pc = 0x1A3DD4u;
label_1a3dd4:
    // 0x1a3dd4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a3dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a3dd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ddc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a3ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a3de0: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A3DE0u;
    SET_GPR_U32(ctx, 31, 0x1A3DE8u);
    ctx->pc = 0x1A3DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DE0u;
            // 0x1a3de4: 0x24a56860  addiu       $a1, $a1, 0x6860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DE8u; }
        if (ctx->pc != 0x1A3DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DE8u; }
        if (ctx->pc != 0x1A3DE8u) { return; }
    }
    ctx->pc = 0x1A3DE8u;
label_1a3de8:
    // 0x1a3de8: 0x83a40050  lb          $a0, 0x50($sp)
    ctx->pc = 0x1a3de8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3dec: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3DECu;
    {
        const bool branch_taken_0x1a3dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DECu;
            // 0x1a3df0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3dec) {
            ctx->pc = 0x1A3E20u;
            goto label_1a3e20;
        }
    }
    ctx->pc = 0x1A3DF4u;
    // 0x1a3df4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x1a3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1a3df8: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1a3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1a3dfc: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1a3dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_1a3e00:
    // 0x1a3e00: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1a3e00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1a3e04: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3E04u;
    {
        const bool branch_taken_0x1a3e04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3e04) {
            ctx->pc = 0x1A3E10u;
            goto label_1a3e10;
        }
    }
    ctx->pc = 0x1A3E0Cu;
    // 0x1a3e0c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1a3e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_1a3e10:
    // 0x1a3e10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a3e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a3e14: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x1a3e14u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3e18: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A3E18u;
    {
        const bool branch_taken_0x1a3e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e18) {
            ctx->pc = 0x1A3E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E18u;
            // 0x1a3e1c: 0x4263c  dsll32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3e00;
        }
    }
    ctx->pc = 0x1A3E20u;
label_1a3e20:
    // 0x1a3e20: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3e24: 0x24846870  addiu       $a0, $a0, 0x6870
    ctx->pc = 0x1a3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26736));
    // 0x1a3e28: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A3E28u;
    SET_GPR_U32(ctx, 31, 0x1A3E30u);
    ctx->pc = 0x1A3E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E28u;
            // 0x1a3e2c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E30u; }
        if (ctx->pc != 0x1A3E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E30u; }
        if (ctx->pc != 0x1A3E30u) { return; }
    }
    ctx->pc = 0x1A3E30u;
label_1a3e30:
    // 0x1a3e30: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a3e34: 0xa3a0015e  sb          $zero, 0x15E($sp)
    ctx->pc = 0x1a3e34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 350), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3e38: 0xa3a2015c  sb          $v0, 0x15C($sp)
    ctx->pc = 0x1a3e38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 348), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a3e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3e40: 0xa3a2015d  sb          $v0, 0x15D($sp)
    ctx->pc = 0x1a3e40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 349), (uint8_t)GPR_U32(ctx, 2));
label_1a3e44:
    // 0x1a3e44: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x1a3e44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x1a3e48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a3e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3e4c: 0x26316de0  addiu       $s1, $s1, 0x6DE0
    ctx->pc = 0x1a3e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28128));
label_1a3e50:
    // 0x1a3e50: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a3e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a3e54: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A3E54u;
    SET_GPR_U32(ctx, 31, 0x1A3E5Cu);
    ctx->pc = 0x1A3E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E54u;
            // 0x1a3e58: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E5Cu; }
        if (ctx->pc != 0x1A3E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E5Cu; }
        if (ctx->pc != 0x1A3E5Cu) { return; }
    }
    ctx->pc = 0x1A3E5Cu;
label_1a3e5c:
    // 0x1a3e5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3E5Cu;
    {
        const bool branch_taken_0x1a3e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e5c) {
            ctx->pc = 0x1A3E90u;
            goto label_1a3e90;
        }
    }
    ctx->pc = 0x1A3E64u;
    // 0x1a3e64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a3e64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a3e68: 0x2a420398  slti        $v0, $s2, 0x398
    ctx->pc = 0x1a3e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)920) ? 1 : 0);
    // 0x1a3e6c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A3E6Cu;
    {
        const bool branch_taken_0x1a3e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E6Cu;
            // 0x1a3e70: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e6c) {
            ctx->pc = 0x1A3E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3e50;
        }
    }
    ctx->pc = 0x1A3E74u;
    // 0x1a3e74: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3e78: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1a3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a3e7c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A3E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A3E84u);
    ctx->pc = 0x1A3E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E7Cu;
            // 0x1a3e80: 0x24846880  addiu       $a0, $a0, 0x6880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E84u; }
        if (ctx->pc != 0x1A3E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E84u; }
        if (ctx->pc != 0x1A3E84u) { return; }
    }
    ctx->pc = 0x1A3E84u;
label_1a3e84:
    // 0x1a3e84: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1A3E84u;
    {
        const bool branch_taken_0x1a3e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e84) {
            ctx->pc = 0x1A3E44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3e44;
        }
    }
    ctx->pc = 0x1A3E8Cu;
    // 0x1a3e8c: 0x0  nop
    ctx->pc = 0x1a3e8cu;
    // NOP
label_1a3e90:
    // 0x1a3e90: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3e94: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A3E94u;
    SET_GPR_U32(ctx, 31, 0x1A3E9Cu);
    ctx->pc = 0x1A3E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E94u;
            // 0x1a3e98: 0x248468a0  addiu       $a0, $a0, 0x68A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E9Cu; }
        if (ctx->pc != 0x1A3E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E9Cu; }
        if (ctx->pc != 0x1A3E9Cu) { return; }
    }
    ctx->pc = 0x1A3E9Cu;
label_1a3e9c:
    // 0x1a3e9c: 0x128940  sll         $s1, $s2, 5
    ctx->pc = 0x1a3e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_1a3ea0:
    // 0x1a3ea0: 0xc047062  jal         func_11C188
    ctx->pc = 0x1A3EA0u;
    SET_GPR_U32(ctx, 31, 0x1A3EA8u);
    ctx->pc = 0x1A3EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EA0u;
            // 0x1a3ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C188u;
    if (runtime->hasFunction(0x11C188u)) {
        auto targetFn = runtime->lookupFunction(0x11C188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EA8u; }
        if (ctx->pc != 0x1A3EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C188_0x11c188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EA8u; }
        if (ctx->pc != 0x1A3EA8u) { return; }
    }
    ctx->pc = 0x1A3EA8u;
label_1a3ea8:
    // 0x1a3ea8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a3eac: 0x24426de0  addiu       $v0, $v0, 0x6DE0
    ctx->pc = 0x1a3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28128));
    // 0x1a3eb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a3eb4: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x1a3eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1a3eb8: 0x24520008  addiu       $s2, $v0, 0x8
    ctx->pc = 0x1a3eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a3ebc: 0x0  nop
    ctx->pc = 0x1a3ebcu;
    // NOP
label_1a3ec0:
    // 0x1a3ec0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a3ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a3ec4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1a3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a3ec8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ecc: 0xc0470ea  jal         func_11C3A8
    ctx->pc = 0x1A3ECCu;
    SET_GPR_U32(ctx, 31, 0x1A3ED4u);
    ctx->pc = 0x1A3ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3ECCu;
            // 0x1a3ed0: 0x27a7015c  addiu       $a3, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (runtime->hasFunction(0x11C3A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3ED4u; }
        if (ctx->pc != 0x1A3ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C3A8_0x11c3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3ED4u; }
        if (ctx->pc != 0x1A3ED4u) { return; }
    }
    ctx->pc = 0x1A3ED4u;
label_1a3ed4:
    // 0x1a3ed4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A3ED4u;
    {
        const bool branch_taken_0x1a3ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ed4) {
            ctx->pc = 0x1A3EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3ec0;
        }
    }
    ctx->pc = 0x1A3EDCu;
    // 0x1a3edc: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1A3EDCu;
    SET_GPR_U32(ctx, 31, 0x1A3EE4u);
    ctx->pc = 0x1A3EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EDCu;
            // 0x1a3ee0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EE4u; }
        if (ctx->pc != 0x1A3EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EE4u; }
        if (ctx->pc != 0x1A3EE4u) { return; }
    }
    ctx->pc = 0x1A3EE4u;
label_1a3ee4:
    // 0x1a3ee4: 0xc047196  jal         func_11C658
    ctx->pc = 0x1A3EE4u;
    SET_GPR_U32(ctx, 31, 0x1A3EECu);
    ctx->pc = 0x11C658u;
    if (runtime->hasFunction(0x11C658u)) {
        auto targetFn = runtime->lookupFunction(0x11C658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EECu; }
        if (ctx->pc != 0x1A3EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C658_0x11c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EECu; }
        if (ctx->pc != 0x1A3EECu) { return; }
    }
    ctx->pc = 0x1A3EECu;
label_1a3eec:
    // 0x1a3eec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A3EECu;
    {
        const bool branch_taken_0x1a3eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3eec) {
            ctx->pc = 0x1A3EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3ea0;
        }
    }
    ctx->pc = 0x1A3EF4u;
    // 0x1a3ef4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a3ef8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3efc: 0x24426df8  addiu       $v0, $v0, 0x6DF8
    ctx->pc = 0x1a3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28152));
    // 0x1a3f00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a3f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3f04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a3f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a3f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3f0c: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1a3f0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3f10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3f18: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1a3f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1a3f1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a3f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a3f20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a3f20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a3f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F24u;
            // 0x1a3f28: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3F2Cu;
    // 0x1a3f2c: 0x0  nop
    ctx->pc = 0x1a3f2cu;
    // NOP
    ctx->pc = 0x1a3f30u;
}
