#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124BF8
// Address: 0x124bf8 - 0x124c68
void sub_00124BF8_0x124bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124BF8_0x124bf8");
#endif

    switch (ctx->pc) {
        case 0x124c20u: goto label_124c20;
        case 0x124c4cu: goto label_124c4c;
        default: break;
    }

    ctx->pc = 0x124bf8u;

    // 0x124bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124bfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124c00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124c04: 0x24100058  addiu       $s0, $zero, 0x58
    ctx->pc = 0x124c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x124c08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124c0c: 0xb08018  mult        $s0, $a1, $s0
    ctx->pc = 0x124c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x124c10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x124c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x124c14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x124c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c18: 0xc049a24  jal         func_126890
    ctx->pc = 0x124C18u;
    SET_GPR_U32(ctx, 31, 0x124C20u);
    ctx->pc = 0x124C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124C18u;
            // 0x124c1c: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126890u;
    if (runtime->hasFunction(0x126890u)) {
        auto targetFn = runtime->lookupFunction(0x126890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C20u; }
        if (ctx->pc != 0x124C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126890_0x126890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C20u; }
        if (ctx->pc != 0x124C20u) { return; }
    }
    ctx->pc = 0x124C20u;
label_124c20:
    // 0x124c20: 0x244f000c  addiu       $t7, $v0, 0xC
    ctx->pc = 0x124c20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x124c24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x124c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c2c: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x124c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x124c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x124C34u;
    {
        const bool branch_taken_0x124c34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C34u;
            // 0x124c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c34) {
            ctx->pc = 0x124C50u;
            goto label_124c50;
        }
    }
    ctx->pc = 0x124C3Cu;
    // 0x124c3c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x124c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x124c40: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x124c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x124c44: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x124C44u;
    SET_GPR_U32(ctx, 31, 0x124C4Cu);
    ctx->pc = 0x124C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124C44u;
            // 0x124c48: 0xae2f0008  sw          $t7, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C4Cu; }
        if (ctx->pc != 0x124C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C4Cu; }
        if (ctx->pc != 0x124C4Cu) { return; }
    }
    ctx->pc = 0x124C4Cu;
label_124c4c:
    // 0x124c4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x124c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124c50:
    // 0x124c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124c58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124c5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x124c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124c60: 0x3e00008  jr          $ra
    ctx->pc = 0x124C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C60u;
            // 0x124c64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124C68u;
    ctx->pc = 0x124c68u;
}
