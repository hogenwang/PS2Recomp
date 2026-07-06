#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C34A0
// Address: 0x1c34a0 - 0x1c34f8
void sub_001C34A0_0x1c34a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C34A0_0x1c34a0");
#endif

    switch (ctx->pc) {
        case 0x1c34c4u: goto label_1c34c4;
        case 0x1c34d0u: goto label_1c34d0;
        default: break;
    }

    ctx->pc = 0x1c34a0u;

    // 0x1c34a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c34a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c34a4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c34a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c34a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c34a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c34ac: 0x58e00  sll         $s1, $a1, 24
    ctx->pc = 0x1c34acu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1c34b0: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x1c34b0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x1c34b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c34b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c34b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c34b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c34bc: 0xc070d1a  jal         func_1C3468
    ctx->pc = 0x1C34BCu;
    SET_GPR_U32(ctx, 31, 0x1C34C4u);
    ctx->pc = 0x1C34C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34BCu;
            // 0x1c34c0: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3468u;
    if (runtime->hasFunction(0x1C3468u)) {
        auto targetFn = runtime->lookupFunction(0x1C3468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34C4u; }
        if (ctx->pc != 0x1C34C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3468_0x1c3468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34C4u; }
        if (ctx->pc != 0x1C34C4u) { return; }
    }
    ctx->pc = 0x1C34C4u;
label_1c34c4:
    // 0x1c34c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c34c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34c8: 0xc070d1a  jal         func_1C3468
    ctx->pc = 0x1C34C8u;
    SET_GPR_U32(ctx, 31, 0x1C34D0u);
    ctx->pc = 0x1C34CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34C8u;
            // 0x1c34cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3468u;
    if (runtime->hasFunction(0x1C3468u)) {
        auto targetFn = runtime->lookupFunction(0x1C3468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34D0u; }
        if (ctx->pc != 0x1C34D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3468_0x1c3468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34D0u; }
        if (ctx->pc != 0x1C34D0u) { return; }
    }
    ctx->pc = 0x1C34D0u;
label_1c34d0:
    // 0x1c34d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c34d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c34d4: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x1c34d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1c34d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c34d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34dc: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x1c34dcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1c34e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c34e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c34e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c34e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c34e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c34e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c34ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C34ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C34F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34ECu;
            // 0x1c34f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C34F4u;
    // 0x1c34f4: 0x0  nop
    ctx->pc = 0x1c34f4u;
    // NOP
    ctx->pc = 0x1c34f8u;
}
