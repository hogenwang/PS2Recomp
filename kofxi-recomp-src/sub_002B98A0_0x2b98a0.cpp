#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B98A0
// Address: 0x2b98a0 - 0x2b9948
void sub_002B98A0_0x2b98a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B98A0_0x2b98a0");
#endif

    switch (ctx->pc) {
        case 0x2b98c0u: goto label_2b98c0;
        case 0x2b98d8u: goto label_2b98d8;
        case 0x2b98e8u: goto label_2b98e8;
        case 0x2b98f8u: goto label_2b98f8;
        case 0x2b9908u: goto label_2b9908;
        case 0x2b9918u: goto label_2b9918;
        case 0x2b9930u: goto label_2b9930;
        default: break;
    }

    ctx->pc = 0x2b98a0u;

    // 0x2b98a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b98a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b98a4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b98a8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b98a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2b98ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b98acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b98b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b98b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b98b4: 0x2484e6f0  addiu       $a0, $a0, -0x1910
    ctx->pc = 0x2b98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960880));
    // 0x2b98b8: 0xc0a5c1c  jal         func_297070
    ctx->pc = 0x2B98B8u;
    SET_GPR_U32(ctx, 31, 0x2B98C0u);
    ctx->pc = 0x2B98BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B98B8u;
            // 0x2b98bc: 0xac407cc8  sw          $zero, 0x7CC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297070u;
    if (runtime->hasFunction(0x297070u)) {
        auto targetFn = runtime->lookupFunction(0x297070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98C0u; }
        if (ctx->pc != 0x2B98C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297070_0x297070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98C0u; }
        if (ctx->pc != 0x2B98C0u) { return; }
    }
    ctx->pc = 0x2B98C0u;
label_2b98c0:
    // 0x2b98c0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2b98c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2b98c4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b98c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2b98c8: 0xae0276d8  sw          $v0, 0x76D8($s0)
    ctx->pc = 0x2b98c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30424), GPR_U32(ctx, 2));
    // 0x2b98cc: 0x2484e6f8  addiu       $a0, $a0, -0x1908
    ctx->pc = 0x2b98ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960888));
    // 0x2b98d0: 0xc0a5c1c  jal         func_297070
    ctx->pc = 0x2B98D0u;
    SET_GPR_U32(ctx, 31, 0x2B98D8u);
    ctx->pc = 0x2B98D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B98D0u;
            // 0x2b98d4: 0x261076d8  addiu       $s0, $s0, 0x76D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297070u;
    if (runtime->hasFunction(0x297070u)) {
        auto targetFn = runtime->lookupFunction(0x297070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98D8u; }
        if (ctx->pc != 0x2B98D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297070_0x297070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98D8u; }
        if (ctx->pc != 0x2B98D8u) { return; }
    }
    ctx->pc = 0x2B98D8u;
label_2b98d8:
    // 0x2b98d8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b98d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2b98dc: 0x0  nop
    ctx->pc = 0x2b98dcu;
    // NOP
    // 0x2b98e0: 0xc0a5c1c  jal         func_297070
    ctx->pc = 0x2B98E0u;
    SET_GPR_U32(ctx, 31, 0x2B98E8u);
    ctx->pc = 0x2B98E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B98E0u;
            // 0x2b98e4: 0x2484e668  addiu       $a0, $a0, -0x1998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297070u;
    if (runtime->hasFunction(0x297070u)) {
        auto targetFn = runtime->lookupFunction(0x297070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98E8u; }
        if (ctx->pc != 0x2B98E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297070_0x297070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98E8u; }
        if (ctx->pc != 0x2B98E8u) { return; }
    }
    ctx->pc = 0x2B98E8u;
label_2b98e8:
    // 0x2b98e8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2b98ec: 0x0  nop
    ctx->pc = 0x2b98ecu;
    // NOP
    // 0x2b98f0: 0xc0a5c1c  jal         func_297070
    ctx->pc = 0x2B98F0u;
    SET_GPR_U32(ctx, 31, 0x2B98F8u);
    ctx->pc = 0x2B98F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B98F0u;
            // 0x2b98f4: 0x2484e708  addiu       $a0, $a0, -0x18F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297070u;
    if (runtime->hasFunction(0x297070u)) {
        auto targetFn = runtime->lookupFunction(0x297070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98F8u; }
        if (ctx->pc != 0x2B98F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297070_0x297070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98F8u; }
        if (ctx->pc != 0x2B98F8u) { return; }
    }
    ctx->pc = 0x2B98F8u;
label_2b98f8:
    // 0x2b98f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2b98fc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2b98fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2b9900: 0xc0a5c1c  jal         func_297070
    ctx->pc = 0x2B9900u;
    SET_GPR_U32(ctx, 31, 0x2B9908u);
    ctx->pc = 0x2B9904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9900u;
            // 0x2b9904: 0x2484e710  addiu       $a0, $a0, -0x18F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297070u;
    if (runtime->hasFunction(0x297070u)) {
        auto targetFn = runtime->lookupFunction(0x297070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9908u; }
        if (ctx->pc != 0x2B9908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297070_0x297070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9908u; }
        if (ctx->pc != 0x2B9908u) { return; }
    }
    ctx->pc = 0x2B9908u;
label_2b9908:
    // 0x2b9908: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b9908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2b990c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b990cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2b9910: 0xc0a5c24  jal         func_297090
    ctx->pc = 0x2B9910u;
    SET_GPR_U32(ctx, 31, 0x2B9918u);
    ctx->pc = 0x2B9914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9910u;
            // 0x2b9914: 0x2484e640  addiu       $a0, $a0, -0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297090u;
    if (runtime->hasFunction(0x297090u)) {
        auto targetFn = runtime->lookupFunction(0x297090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9918u; }
        if (ctx->pc != 0x2B9918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297090_0x297090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9918u; }
        if (ctx->pc != 0x2B9918u) { return; }
    }
    ctx->pc = 0x2B9918u;
label_2b9918:
    // 0x2b9918: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2b9918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2b991c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b991cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2b9920: 0xae0276f8  sw          $v0, 0x76F8($s0)
    ctx->pc = 0x2b9920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30456), GPR_U32(ctx, 2));
    // 0x2b9924: 0x2484e638  addiu       $a0, $a0, -0x19C8
    ctx->pc = 0x2b9924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960696));
    // 0x2b9928: 0xc0a5c24  jal         func_297090
    ctx->pc = 0x2B9928u;
    SET_GPR_U32(ctx, 31, 0x2B9930u);
    ctx->pc = 0x2B992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9928u;
            // 0x2b992c: 0x261076f8  addiu       $s0, $s0, 0x76F8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297090u;
    if (runtime->hasFunction(0x297090u)) {
        auto targetFn = runtime->lookupFunction(0x297090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9930u; }
        if (ctx->pc != 0x2B9930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297090_0x297090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9930u; }
        if (ctx->pc != 0x2B9930u) { return; }
    }
    ctx->pc = 0x2B9930u;
label_2b9930:
    // 0x2b9930: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2b9930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2b9934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b993c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B993Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B993Cu;
            // 0x2b9940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9944u;
    // 0x2b9944: 0x0  nop
    ctx->pc = 0x2b9944u;
    // NOP
    ctx->pc = 0x2b9948u;
}
