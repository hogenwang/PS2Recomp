#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244018
// Address: 0x244018 - 0x244070
void sub_00244018_0x244018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244018_0x244018");
#endif

    switch (ctx->pc) {
        case 0x24403cu: goto label_24403c;
        case 0x244054u: goto label_244054;
        default: break;
    }

    ctx->pc = 0x244018u;

    // 0x244018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24401c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24401cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x244020: 0xac40ffb8  sw          $zero, -0x48($v0)
    ctx->pc = 0x244020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967224), GPR_U32(ctx, 0));
    // 0x244024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x244028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24402c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24402cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x244030: 0x2610ff98  addiu       $s0, $s0, -0x68
    ctx->pc = 0x244030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967192));
    // 0x244034: 0xc08a054  jal         func_228150
    ctx->pc = 0x244034u;
    SET_GPR_U32(ctx, 31, 0x24403Cu);
    ctx->pc = 0x244038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244034u;
            // 0x244038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228150u;
    if (runtime->hasFunction(0x228150u)) {
        auto targetFn = runtime->lookupFunction(0x228150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24403Cu; }
        if (ctx->pc != 0x24403Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228150_0x228150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24403Cu; }
        if (ctx->pc != 0x24403Cu) { return; }
    }
    ctx->pc = 0x24403Cu;
label_24403c:
    // 0x24403c: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x24403cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x244040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244044: 0x24c643d8  addiu       $a2, $a2, 0x43D8
    ctx->pc = 0x244044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17368));
    // 0x244048: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x244048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x24404c: 0xc08a058  jal         func_228160
    ctx->pc = 0x24404Cu;
    SET_GPR_U32(ctx, 31, 0x244054u);
    ctx->pc = 0x244050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24404Cu;
            // 0x244050: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244054u; }
        if (ctx->pc != 0x244054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228160_0x228160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244054u; }
        if (ctx->pc != 0x244054u) { return; }
    }
    ctx->pc = 0x244054u;
label_244054:
    // 0x244054: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x244054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x244058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24405c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24405cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244064: 0xac62fee0  sw          $v0, -0x120($v1)
    ctx->pc = 0x244064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967008), GPR_U32(ctx, 2));
    // 0x244068: 0x3e00008  jr          $ra
    ctx->pc = 0x244068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244068u;
            // 0x24406c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244070u;
    ctx->pc = 0x244070u;
}
