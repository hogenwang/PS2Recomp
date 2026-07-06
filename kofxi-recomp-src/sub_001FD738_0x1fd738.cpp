#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD738
// Address: 0x1fd738 - 0x1fd7d8
void sub_001FD738_0x1fd738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD738_0x1fd738");
#endif

    switch (ctx->pc) {
        case 0x1fd75cu: goto label_1fd75c;
        case 0x1fd76cu: goto label_1fd76c;
        case 0x1fd788u: goto label_1fd788;
        case 0x1fd798u: goto label_1fd798;
        case 0x1fd7b8u: goto label_1fd7b8;
        default: break;
    }

    ctx->pc = 0x1fd738u;

    // 0x1fd738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd73c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1fd73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd744: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd748: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd74c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd750: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd754: 0xc07f62e  jal         func_1FD8B8
    ctx->pc = 0x1FD754u;
    SET_GPR_U32(ctx, 31, 0x1FD75Cu);
    ctx->pc = 0x1FD758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD754u;
            // 0x1fd758: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B8u;
    if (runtime->hasFunction(0x1FD8B8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD75Cu; }
        if (ctx->pc != 0x1FD75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD8B8_0x1fd8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD75Cu; }
        if (ctx->pc != 0x1FD75Cu) { return; }
    }
    ctx->pc = 0x1FD75Cu;
label_1fd75c:
    // 0x1fd75c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd760: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fd760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd764: 0xc07f5fe  jal         func_1FD7F8
    ctx->pc = 0x1FD764u;
    SET_GPR_U32(ctx, 31, 0x1FD76Cu);
    ctx->pc = 0x1FD768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD764u;
            // 0x1fd768: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F8u;
    if (runtime->hasFunction(0x1FD7F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD76Cu; }
        if (ctx->pc != 0x1FD76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD7F8_0x1fd7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD76Cu; }
        if (ctx->pc != 0x1FD76Cu) { return; }
    }
    ctx->pc = 0x1FD76Cu;
label_1fd76c:
    // 0x1fd76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd770: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1fd770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1fd774: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fd774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fd778: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD778u;
    {
        const bool branch_taken_0x1fd778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD778u;
            // 0x1fd77c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd778) {
            ctx->pc = 0x1FD7B8u;
            goto label_1fd7b8;
        }
    }
    ctx->pc = 0x1FD780u;
    // 0x1fd780: 0xc07f62e  jal         func_1FD8B8
    ctx->pc = 0x1FD780u;
    SET_GPR_U32(ctx, 31, 0x1FD788u);
    ctx->pc = 0x1FD8B8u;
    if (runtime->hasFunction(0x1FD8B8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD788u; }
        if (ctx->pc != 0x1FD788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD8B8_0x1fd8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD788u; }
        if (ctx->pc != 0x1FD788u) { return; }
    }
    ctx->pc = 0x1FD788u;
label_1fd788:
    // 0x1fd788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd78c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fd78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fd790: 0xc07f5fe  jal         func_1FD7F8
    ctx->pc = 0x1FD790u;
    SET_GPR_U32(ctx, 31, 0x1FD798u);
    ctx->pc = 0x1FD794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD790u;
            // 0x1fd794: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F8u;
    if (runtime->hasFunction(0x1FD7F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD798u; }
        if (ctx->pc != 0x1FD798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD7F8_0x1fd7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD798u; }
        if (ctx->pc != 0x1FD798u) { return; }
    }
    ctx->pc = 0x1FD798u;
label_1fd798:
    // 0x1fd798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd7a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1fd7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fd7a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd7a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd7a8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1fd7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fd7ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd7b0: 0x807f62e  j           func_1FD8B8
    ctx->pc = 0x1FD7B0u;
    ctx->pc = 0x1FD7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7B0u;
            // 0x1fd7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B8u;
    if (runtime->hasFunction(0x1FD8B8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD8B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FD8B8_0x1fd8b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FD7B8u;
label_1fd7b8:
    // 0x1fd7b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd7c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fd7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fd7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd7c8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1fd7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fd7cc: 0x807f62e  j           func_1FD8B8
    ctx->pc = 0x1FD7CCu;
    ctx->pc = 0x1FD7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7CCu;
            // 0x1fd7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B8u;
    if (runtime->hasFunction(0x1FD8B8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD8B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FD8B8_0x1fd8b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FD7D4u;
    // 0x1fd7d4: 0x0  nop
    ctx->pc = 0x1fd7d4u;
    // NOP
    ctx->pc = 0x1fd7d8u;
}
