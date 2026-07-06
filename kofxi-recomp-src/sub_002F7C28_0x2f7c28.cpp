#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7C28
// Address: 0x2f7c28 - 0x2f7c78
void sub_002F7C28_0x2f7c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7C28_0x2f7c28");
#endif

    switch (ctx->pc) {
        case 0x2f7c58u: goto label_2f7c58;
        case 0x2f7c68u: goto label_2f7c68;
        default: break;
    }

    ctx->pc = 0x2f7c28u;

    // 0x2f7c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7c30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f7c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f7c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c38: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2f7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2f7c3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7C3Cu;
    {
        const bool branch_taken_0x2f7c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C3Cu;
            // 0x2f7c40: 0x2402fc0b  addiu       $v0, $zero, -0x3F5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c3c) {
            ctx->pc = 0x2F7C50u;
            goto label_2f7c50;
        }
    }
    ctx->pc = 0x2F7C44u;
    // 0x2f7c44: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2f7c48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7C48u;
    {
        const bool branch_taken_0x2f7c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C48u;
            // 0x2f7c4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c48) {
            ctx->pc = 0x2F7C68u;
            goto label_2f7c68;
        }
    }
    ctx->pc = 0x2F7C50u;
label_2f7c50:
    // 0x2f7c50: 0xc0bde5a  jal         func_2F7968
    ctx->pc = 0x2F7C50u;
    SET_GPR_U32(ctx, 31, 0x2F7C58u);
    ctx->pc = 0x2F7C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C50u;
            // 0x2f7c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7968u;
    if (runtime->hasFunction(0x2F7968u)) {
        auto targetFn = runtime->lookupFunction(0x2F7968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C58u; }
        if (ctx->pc != 0x2F7C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7968_0x2f7968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C58u; }
        if (ctx->pc != 0x2F7C58u) { return; }
    }
    ctx->pc = 0x2F7C58u;
label_2f7c58:
    // 0x2f7c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c5c: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x2f7c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2f7c60: 0xc0bde92  jal         func_2F7A48
    ctx->pc = 0x2F7C60u;
    SET_GPR_U32(ctx, 31, 0x2F7C68u);
    ctx->pc = 0x2F7C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C60u;
            // 0x2f7c64: 0x8c860058  lw          $a2, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7A48u;
    if (runtime->hasFunction(0x2F7A48u)) {
        auto targetFn = runtime->lookupFunction(0x2F7A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C68u; }
        if (ctx->pc != 0x2F7C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7A48_0x2f7a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C68u; }
        if (ctx->pc != 0x2F7C68u) { return; }
    }
    ctx->pc = 0x2F7C68u;
label_2f7c68:
    // 0x2f7c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f7c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C70u;
            // 0x2f7c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7C78u;
    ctx->pc = 0x2f7c78u;
}
