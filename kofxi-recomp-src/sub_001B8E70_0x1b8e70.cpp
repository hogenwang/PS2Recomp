#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8E70
// Address: 0x1b8e70 - 0x1b8ef8
void sub_001B8E70_0x1b8e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8E70_0x1b8e70");
#endif

    switch (ctx->pc) {
        case 0x1b8e98u: goto label_1b8e98;
        case 0x1b8eacu: goto label_1b8eac;
        case 0x1b8ed0u: goto label_1b8ed0;
        case 0x1b8ee0u: goto label_1b8ee0;
        case 0x1b8ee8u: goto label_1b8ee8;
        default: break;
    }

    ctx->pc = 0x1b8e70u;

    // 0x1b8e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8e74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b8e78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b8e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b8e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8e80: 0x24502368  addiu       $s0, $v0, 0x2368
    ctx->pc = 0x1b8e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9064));
    // 0x1b8e84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b8e88: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1b8e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b8e8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b8e90: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b8e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8e94: 0x0  nop
    ctx->pc = 0x1b8e94u;
    // NOP
label_1b8e98:
    // 0x1b8e98: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b8e98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8e9c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8E9Cu;
    {
        const bool branch_taken_0x1b8e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1b8e9c) {
            ctx->pc = 0x1B8EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E9Cu;
            // 0x1b8ea0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8EB0u;
            goto label_1b8eb0;
        }
    }
    ctx->pc = 0x1B8EA4u;
    // 0x1b8ea4: 0xc06e31c  jal         func_1B8C70
    ctx->pc = 0x1B8EA4u;
    SET_GPR_U32(ctx, 31, 0x1B8EACu);
    ctx->pc = 0x1B8EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EA4u;
            // 0x1b8ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C70u;
    if (runtime->hasFunction(0x1B8C70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EACu; }
        if (ctx->pc != 0x1B8EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8C70_0x1b8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EACu; }
        if (ctx->pc != 0x1B8EACu) { return; }
    }
    ctx->pc = 0x1B8EACu;
label_1b8eac:
    // 0x1b8eac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b8eacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b8eb0:
    // 0x1b8eb0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B8EB0u;
    {
        const bool branch_taken_0x1b8eb0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B8EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EB0u;
            // 0x1b8eb4: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8eb0) {
            ctx->pc = 0x1B8E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8e98;
        }
    }
    ctx->pc = 0x1B8EB8u;
    // 0x1b8eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8ec0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b8ec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8ec4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b8ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EC8u;
            // 0x1b8ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8ED0u;
label_1b8ed0:
    // 0x1b8ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8ed8: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B8ED8u;
    SET_GPR_U32(ctx, 31, 0x1B8EE0u);
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EE0u; }
        if (ctx->pc != 0x1B8EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EE0u; }
        if (ctx->pc != 0x1B8EE0u) { return; }
    }
    ctx->pc = 0x1B8EE0u;
label_1b8ee0:
    // 0x1b8ee0: 0xc06e3be  jal         func_1B8EF8
    ctx->pc = 0x1B8EE0u;
    SET_GPR_U32(ctx, 31, 0x1B8EE8u);
    ctx->pc = 0x1B8EF8u;
    if (runtime->hasFunction(0x1B8EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EE8u; }
        if (ctx->pc != 0x1B8EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8EF8_0x1b8ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EE8u; }
        if (ctx->pc != 0x1B8EE8u) { return; }
    }
    ctx->pc = 0x1B8EE8u;
label_1b8ee8:
    // 0x1b8ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8eec: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B8EECu;
    ctx->pc = 0x1B8EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EECu;
            // 0x1b8ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8EF4u;
    // 0x1b8ef4: 0x0  nop
    ctx->pc = 0x1b8ef4u;
    // NOP
    ctx->pc = 0x1b8ef8u;
}
