#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0E10
// Address: 0x1b0e10 - 0x1b0ec8
void sub_001B0E10_0x1b0e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0E10_0x1b0e10");
#endif

    switch (ctx->pc) {
        case 0x1b0e30u: goto label_1b0e30;
        case 0x1b0e38u: goto label_1b0e38;
        case 0x1b0e4cu: goto label_1b0e4c;
        case 0x1b0e70u: goto label_1b0e70;
        case 0x1b0e94u: goto label_1b0e94;
        case 0x1b0ea4u: goto label_1b0ea4;
        case 0x1b0eacu: goto label_1b0eac;
        default: break;
    }

    ctx->pc = 0x1b0e10u;

    // 0x1b0e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0e18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0e1c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1b0e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b0e20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0e24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b0e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0e28: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B0E28u;
    SET_GPR_U32(ctx, 31, 0x1B0E30u);
    ctx->pc = 0x1B0E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E28u;
            // 0x1b0e2c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E30u; }
        if (ctx->pc != 0x1B0E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E30u; }
        if (ctx->pc != 0x1B0E30u) { return; }
    }
    ctx->pc = 0x1B0E30u;
label_1b0e30:
    // 0x1b0e30: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b0e34: 0x2450f818  addiu       $s0, $v0, -0x7E8
    ctx->pc = 0x1b0e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965272));
label_1b0e38:
    // 0x1b0e38: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0e3c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0E3Cu;
    {
        const bool branch_taken_0x1b0e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1b0e3c) {
            ctx->pc = 0x1B0E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E3Cu;
            // 0x1b0e40: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0E50u;
            goto label_1b0e50;
        }
    }
    ctx->pc = 0x1B0E44u;
    // 0x1b0e44: 0xc06c348  jal         func_1B0D20
    ctx->pc = 0x1B0E44u;
    SET_GPR_U32(ctx, 31, 0x1B0E4Cu);
    ctx->pc = 0x1B0E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E44u;
            // 0x1b0e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0D20u;
    if (runtime->hasFunction(0x1B0D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B0D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E4Cu; }
        if (ctx->pc != 0x1B0E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0D20_0x1b0d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E4Cu; }
        if (ctx->pc != 0x1B0E4Cu) { return; }
    }
    ctx->pc = 0x1B0E4Cu;
label_1b0e4c:
    // 0x1b0e4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b0e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b0e50:
    // 0x1b0e50: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B0E50u;
    {
        const bool branch_taken_0x1b0e50 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B0E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E50u;
            // 0x1b0e54: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e50) {
            ctx->pc = 0x1B0E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0e38;
        }
    }
    ctx->pc = 0x1B0E58u;
    // 0x1b0e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0e5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0e60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0e64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b0e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0e68: 0x806b494  j           func_1AD250
    ctx->pc = 0x1B0E68u;
    ctx->pc = 0x1B0E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E68u;
            // 0x1b0e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0E70u;
label_1b0e70:
    // 0x1b0e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0e78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0e80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b0e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0e88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b0e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0e8c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B0E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E94u);
    ctx->pc = 0x1B0E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E8Cu;
            // 0x1b0e90: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E94u; }
        if (ctx->pc != 0x1B0E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E94u; }
        if (ctx->pc != 0x1B0E94u) { return; }
    }
    ctx->pc = 0x1B0E94u;
label_1b0e94:
    // 0x1b0e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e9c: 0xc06c3b2  jal         func_1B0EC8
    ctx->pc = 0x1B0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0EA4u);
    ctx->pc = 0x1B0EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E9Cu;
            // 0x1b0ea0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0EC8u;
    if (runtime->hasFunction(0x1B0EC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B0EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EA4u; }
        if (ctx->pc != 0x1B0EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0EC8_0x1b0ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EA4u; }
        if (ctx->pc != 0x1B0EA4u) { return; }
    }
    ctx->pc = 0x1B0EA4u;
label_1b0ea4:
    // 0x1b0ea4: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B0EA4u;
    SET_GPR_U32(ctx, 31, 0x1B0EACu);
    ctx->pc = 0x1B0EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EA4u;
            // 0x1b0ea8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EACu; }
        if (ctx->pc != 0x1B0EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EACu; }
        if (ctx->pc != 0x1B0EACu) { return; }
    }
    ctx->pc = 0x1B0EACu;
label_1b0eac:
    // 0x1b0eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0eb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0eb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0ebc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b0ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EC0u;
            // 0x1b0ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0EC8u;
    ctx->pc = 0x1b0ec8u;
}
