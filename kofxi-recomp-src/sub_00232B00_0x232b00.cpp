#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232B00
// Address: 0x232b00 - 0x232b68
void sub_00232B00_0x232b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232B00_0x232b00");
#endif

    switch (ctx->pc) {
        case 0x232b28u: goto label_232b28;
        case 0x232b40u: goto label_232b40;
        case 0x232b48u: goto label_232b48;
        case 0x232b50u: goto label_232b50;
        default: break;
    }

    ctx->pc = 0x232b00u;

    // 0x232b00: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x232b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x232b04: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232b08: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x232b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x232b0c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x232b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x232b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232b14: 0x2442fa30  addiu       $v0, $v0, -0x5D0
    ctx->pc = 0x232b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965808));
    // 0x232b18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x232b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x232b1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x232b20: 0xc08c682  jal         func_231A08
    ctx->pc = 0x232B20u;
    SET_GPR_U32(ctx, 31, 0x232B28u);
    ctx->pc = 0x232B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232B20u;
            // 0x232b24: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B28u; }
        if (ctx->pc != 0x232B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B28u; }
        if (ctx->pc != 0x232B28u) { return; }
    }
    ctx->pc = 0x232B28u;
label_232b28:
    // 0x232b28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b2c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x232b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x232b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232B30u;
    {
        const bool branch_taken_0x232b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232b30) {
            ctx->pc = 0x232B40u;
            goto label_232b40;
        }
    }
    ctx->pc = 0x232B38u;
    // 0x232b38: 0xc08ca5a  jal         func_232968
    ctx->pc = 0x232B38u;
    SET_GPR_U32(ctx, 31, 0x232B40u);
    ctx->pc = 0x232B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232B38u;
            // 0x232b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232968u;
    if (runtime->hasFunction(0x232968u)) {
        auto targetFn = runtime->lookupFunction(0x232968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B40u; }
        if (ctx->pc != 0x232B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232968_0x232968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B40u; }
        if (ctx->pc != 0x232B40u) { return; }
    }
    ctx->pc = 0x232B40u;
label_232b40:
    // 0x232b40: 0xc08c698  jal         func_231A60
    ctx->pc = 0x232B40u;
    SET_GPR_U32(ctx, 31, 0x232B48u);
    ctx->pc = 0x232B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232B40u;
            // 0x232b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B48u; }
        if (ctx->pc != 0x232B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B48u; }
        if (ctx->pc != 0x232B48u) { return; }
    }
    ctx->pc = 0x232B48u;
label_232b48:
    // 0x232b48: 0xc08ce18  jal         func_233860
    ctx->pc = 0x232B48u;
    SET_GPR_U32(ctx, 31, 0x232B50u);
    ctx->pc = 0x232B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232B48u;
            // 0x232b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233860u;
    if (runtime->hasFunction(0x233860u)) {
        auto targetFn = runtime->lookupFunction(0x233860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B50u; }
        if (ctx->pc != 0x232B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233860_0x233860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B50u; }
        if (ctx->pc != 0x232B50u) { return; }
    }
    ctx->pc = 0x232B50u;
label_232b50:
    // 0x232b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232b54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x232b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232b60: 0x3e00008  jr          $ra
    ctx->pc = 0x232B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B60u;
            // 0x232b64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232B68u;
    ctx->pc = 0x232b68u;
}
