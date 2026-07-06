#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010E098
// Address: 0x10e098 - 0x10e150
void sub_0010E098_0x10e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E098_0x10e098");
#endif

    switch (ctx->pc) {
        case 0x10e0c0u: goto label_10e0c0;
        case 0x10e0d0u: goto label_10e0d0;
        case 0x10e0f4u: goto label_10e0f4;
        case 0x10e100u: goto label_10e100;
        case 0x10e118u: goto label_10e118;
        case 0x10e128u: goto label_10e128;
        case 0x10e140u: goto label_10e140;
        default: break;
    }

    ctx->pc = 0x10e098u;

    // 0x10e098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e09c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10e09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e0a0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x10e0a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x10e0a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10e0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e0ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e0b0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x10e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x10e0b4: 0x2404fffa  addiu       $a0, $zero, -0x6
    ctx->pc = 0x10e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x10e0b8: 0xc043424  jal         func_10D090
    ctx->pc = 0x10E0B8u;
    SET_GPR_U32(ctx, 31, 0x10E0C0u);
    ctx->pc = 0x10E0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0B8u;
            // 0x10e0bc: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0C0u; }
        if (ctx->pc != 0x10E0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0C0u; }
        if (ctx->pc != 0x10E0C0u) { return; }
    }
    ctx->pc = 0x10E0C0u;
label_10e0c0:
    // 0x10e0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0C4u;
            // 0x10e0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E0CCu;
    // 0x10e0cc: 0x0  nop
    ctx->pc = 0x10e0ccu;
    // NOP
label_10e0d0:
    // 0x10e0d0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x10e0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x10e0d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e0d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e0d8: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x10e0d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x10e0dc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10e0e0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10e0e4: 0x2404fff9  addiu       $a0, $zero, -0x7
    ctx->pc = 0x10e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x10e0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e0ec: 0xc043424  jal         func_10D090
    ctx->pc = 0x10E0ECu;
    SET_GPR_U32(ctx, 31, 0x10E0F4u);
    ctx->pc = 0x10E0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0ECu;
            // 0x10e0f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0F4u; }
        if (ctx->pc != 0x10E0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0F4u; }
        if (ctx->pc != 0x10E0F4u) { return; }
    }
    ctx->pc = 0x10E0F4u;
label_10e0f4:
    // 0x10e0f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0F8u;
            // 0x10e0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E100u;
label_10e100:
    // 0x10e100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e104: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10e104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10e108: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e10c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e110: 0xc043424  jal         func_10D090
    ctx->pc = 0x10E110u;
    SET_GPR_U32(ctx, 31, 0x10E118u);
    ctx->pc = 0x10E114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E110u;
            // 0x10e114: 0x2404fff8  addiu       $a0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E118u; }
        if (ctx->pc != 0x10E118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E118u; }
        if (ctx->pc != 0x10E118u) { return; }
    }
    ctx->pc = 0x10E118u;
label_10e118:
    // 0x10e118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e11c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E11Cu;
            // 0x10e120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E124u;
    // 0x10e124: 0x0  nop
    ctx->pc = 0x10e124u;
    // NOP
label_10e128:
    // 0x10e128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e12c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10e130: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e138: 0xc043424  jal         func_10D090
    ctx->pc = 0x10E138u;
    SET_GPR_U32(ctx, 31, 0x10E140u);
    ctx->pc = 0x10E13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E138u;
            // 0x10e13c: 0x2404fff7  addiu       $a0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E140u; }
        if (ctx->pc != 0x10E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E140u; }
        if (ctx->pc != 0x10E140u) { return; }
    }
    ctx->pc = 0x10E140u;
label_10e140:
    // 0x10e140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e144: 0x3e00008  jr          $ra
    ctx->pc = 0x10E144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E144u;
            // 0x10e148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E14Cu;
    // 0x10e14c: 0x0  nop
    ctx->pc = 0x10e14cu;
    // NOP
    ctx->pc = 0x10e150u;
}
