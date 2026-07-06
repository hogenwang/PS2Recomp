#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9E10
// Address: 0x1e9e10 - 0x1e9fb0
void sub_001E9E10_0x1e9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9E10_0x1e9e10");
#endif

    switch (ctx->pc) {
        case 0x1e9e18u: goto label_1e9e18;
        case 0x1e9e20u: goto label_1e9e20;
        case 0x1e9e30u: goto label_1e9e30;
        case 0x1e9e40u: goto label_1e9e40;
        case 0x1e9e58u: goto label_1e9e58;
        case 0x1e9e78u: goto label_1e9e78;
        case 0x1e9e88u: goto label_1e9e88;
        case 0x1e9ea0u: goto label_1e9ea0;
        case 0x1e9ec0u: goto label_1e9ec0;
        case 0x1e9ed0u: goto label_1e9ed0;
        case 0x1e9ef0u: goto label_1e9ef0;
        case 0x1e9f10u: goto label_1e9f10;
        case 0x1e9f28u: goto label_1e9f28;
        case 0x1e9f48u: goto label_1e9f48;
        case 0x1e9f68u: goto label_1e9f68;
        case 0x1e9f88u: goto label_1e9f88;
        case 0x1e9fa8u: goto label_1e9fa8;
        default: break;
    }

    ctx->pc = 0x1e9e10u;

    // 0x1e9e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9E18u;
label_1e9e18:
    // 0x1e9e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E18u;
            // 0x1e9e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9E20u;
label_1e9e20:
    // 0x1e9e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9e28: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E9E28u;
    SET_GPR_U32(ctx, 31, 0x1E9E30u);
    ctx->pc = 0x1E9E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E28u;
            // 0x1e9e2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E30u; }
        if (ctx->pc != 0x1E9E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E30u; }
        if (ctx->pc != 0x1E9E30u) { return; }
    }
    ctx->pc = 0x1E9E30u;
label_1e9e30:
    // 0x1e9e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E38u;
            // 0x1e9e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9E40u;
label_1e9e40:
    // 0x1e9e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9e44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e9e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9e4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e9e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e9e50: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E9E50u;
    SET_GPR_U32(ctx, 31, 0x1E9E58u);
    ctx->pc = 0x1E9E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E50u;
            // 0x1e9e54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E58u; }
        if (ctx->pc != 0x1E9E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E58u; }
        if (ctx->pc != 0x1E9E58u) { return; }
    }
    ctx->pc = 0x1E9E58u;
label_1e9e58:
    // 0x1e9e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e9e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9e60: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1e9e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9e64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e9e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9E68u;
    {
        const bool branch_taken_0x1e9e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E68u;
            // 0x1e9e6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e68) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9E70u;
    // 0x1e9e70: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1E9E70u;
    SET_GPR_U32(ctx, 31, 0x1E9E78u);
    ctx->pc = 0x1FD988u;
    if (runtime->hasFunction(0x1FD988u)) {
        auto targetFn = runtime->lookupFunction(0x1FD988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E78u; }
        if (ctx->pc != 0x1E9E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD988_0x1fd988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E78u; }
        if (ctx->pc != 0x1E9E78u) { return; }
    }
    ctx->pc = 0x1E9E78u;
label_1e9e78:
    // 0x1e9e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9e7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e9e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E80u;
            // 0x1e9e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9E88u;
label_1e9e88:
    // 0x1e9e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9e8c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e9e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9e94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e9e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e9e98: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E9E98u;
    SET_GPR_U32(ctx, 31, 0x1E9EA0u);
    ctx->pc = 0x1E9E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E98u;
            // 0x1e9e9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EA0u; }
        if (ctx->pc != 0x1E9EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EA0u; }
        if (ctx->pc != 0x1E9EA0u) { return; }
    }
    ctx->pc = 0x1E9EA0u;
label_1e9ea0:
    // 0x1e9ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ea4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e9ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9ea8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1e9ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e9eac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e9eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9eb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9EB0u;
    {
        const bool branch_taken_0x1e9eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EB0u;
            // 0x1e9eb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9eb0) {
            ctx->pc = 0x1E9EC0u;
            goto label_1e9ec0;
        }
    }
    ctx->pc = 0x1E9EB8u;
    // 0x1e9eb8: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1E9EB8u;
    SET_GPR_U32(ctx, 31, 0x1E9EC0u);
    ctx->pc = 0x1FD988u;
    if (runtime->hasFunction(0x1FD988u)) {
        auto targetFn = runtime->lookupFunction(0x1FD988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EC0u; }
        if (ctx->pc != 0x1E9EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD988_0x1fd988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EC0u; }
        if (ctx->pc != 0x1E9EC0u) { return; }
    }
    ctx->pc = 0x1E9EC0u;
label_1e9ec0:
    // 0x1e9ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9ec4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e9ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EC8u;
            // 0x1e9ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9ED0u;
label_1e9ed0:
    // 0x1e9ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9ed4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e9ed8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e9ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9edc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e9edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9ee8: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E9EE8u;
    SET_GPR_U32(ctx, 31, 0x1E9EF0u);
    ctx->pc = 0x1E9EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EE8u;
            // 0x1e9eec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EF0u; }
        if (ctx->pc != 0x1E9EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EF0u; }
        if (ctx->pc != 0x1E9EF0u) { return; }
    }
    ctx->pc = 0x1E9EF0u;
label_1e9ef0:
    // 0x1e9ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ef4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e9ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ef8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e9ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9efc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e9efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e9f00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9F00u;
    {
        const bool branch_taken_0x1e9f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F00u;
            // 0x1e9f04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f00) {
            ctx->pc = 0x1E9F10u;
            goto label_1e9f10;
        }
    }
    ctx->pc = 0x1E9F08u;
    // 0x1e9f08: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1E9F08u;
    SET_GPR_U32(ctx, 31, 0x1E9F10u);
    ctx->pc = 0x1FD988u;
    if (runtime->hasFunction(0x1FD988u)) {
        auto targetFn = runtime->lookupFunction(0x1FD988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F10u; }
        if (ctx->pc != 0x1E9F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD988_0x1fd988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F10u; }
        if (ctx->pc != 0x1E9F10u) { return; }
    }
    ctx->pc = 0x1E9F10u;
label_1e9f10:
    // 0x1e9f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9f14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F1Cu;
            // 0x1e9f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9F24u;
    // 0x1e9f24: 0x0  nop
    ctx->pc = 0x1e9f24u;
    // NOP
label_1e9f28:
    // 0x1e9f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9f2c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e9f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9f34: 0x34a50a01  ori         $a1, $a1, 0xA01
    ctx->pc = 0x1e9f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2561);
    // 0x1e9f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9f3c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E9F3Cu;
    ctx->pc = 0x1E9F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F3Cu;
            // 0x1e9f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E9F44u;
    // 0x1e9f44: 0x0  nop
    ctx->pc = 0x1e9f44u;
    // NOP
label_1e9f48:
    // 0x1e9f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9f4c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e9f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9f54: 0x34a50a01  ori         $a1, $a1, 0xA01
    ctx->pc = 0x1e9f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2561);
    // 0x1e9f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9f5c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E9F5Cu;
    ctx->pc = 0x1E9F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F5Cu;
            // 0x1e9f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E9F64u;
    // 0x1e9f64: 0x0  nop
    ctx->pc = 0x1e9f64u;
    // NOP
label_1e9f68:
    // 0x1e9f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9f6c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e9f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9f74: 0x34a50a01  ori         $a1, $a1, 0xA01
    ctx->pc = 0x1e9f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2561);
    // 0x1e9f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9f7c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E9F7Cu;
    ctx->pc = 0x1E9F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F7Cu;
            // 0x1e9f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E9F84u;
    // 0x1e9f84: 0x0  nop
    ctx->pc = 0x1e9f84u;
    // NOP
label_1e9f88:
    // 0x1e9f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9f8c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e9f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9f94: 0x34a50a01  ori         $a1, $a1, 0xA01
    ctx->pc = 0x1e9f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2561);
    // 0x1e9f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9f9c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E9F9Cu;
    ctx->pc = 0x1E9FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F9Cu;
            // 0x1e9fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E9FA4u;
    // 0x1e9fa4: 0x0  nop
    ctx->pc = 0x1e9fa4u;
    // NOP
label_1e9fa8:
    // 0x1e9fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9FA8u;
            // 0x1e9fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9FB0u;
    ctx->pc = 0x1e9fb0u;
}
