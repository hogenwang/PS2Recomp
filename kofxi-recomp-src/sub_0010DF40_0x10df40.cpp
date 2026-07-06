#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010DF40
// Address: 0x10df40 - 0x10dfb0
void sub_0010DF40_0x10df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DF40_0x10df40");
#endif

    switch (ctx->pc) {
        case 0x10df78u: goto label_10df78;
        case 0x10df88u: goto label_10df88;
        case 0x10dfa0u: goto label_10dfa0;
        default: break;
    }

    ctx->pc = 0x10df40u;

    // 0x10df40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10df44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10df44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10df48: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10df48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10df4c: 0x24426290  addiu       $v0, $v0, 0x6290
    ctx->pc = 0x10df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
    // 0x10df50: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x10df50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x10df54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10df58: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10df58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10df5c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10df60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10df60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10df68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10df68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10df6c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x10df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x10df70: 0xc043424  jal         func_10D090
    ctx->pc = 0x10DF70u;
    SET_GPR_U32(ctx, 31, 0x10DF78u);
    ctx->pc = 0x10DF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF70u;
            // 0x10df74: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF78u; }
        if (ctx->pc != 0x10DF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF78u; }
        if (ctx->pc != 0x10DF78u) { return; }
    }
    ctx->pc = 0x10DF78u;
label_10df78:
    // 0x10df78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10df78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df7c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF7Cu;
            // 0x10df80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF84u;
    // 0x10df84: 0x0  nop
    ctx->pc = 0x10df84u;
    // NOP
label_10df88:
    // 0x10df88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10df88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10df8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10df90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10df90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10df98: 0xc043424  jal         func_10D090
    ctx->pc = 0x10DF98u;
    SET_GPR_U32(ctx, 31, 0x10DFA0u);
    ctx->pc = 0x10DF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF98u;
            // 0x10df9c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFA0u; }
        if (ctx->pc != 0x10DFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFA0u; }
        if (ctx->pc != 0x10DFA0u) { return; }
    }
    ctx->pc = 0x10DFA0u;
label_10dfa0:
    // 0x10dfa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10dfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x10DFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFA4u;
            // 0x10dfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DFACu;
    // 0x10dfac: 0x0  nop
    ctx->pc = 0x10dfacu;
    // NOP
    ctx->pc = 0x10dfb0u;
}
