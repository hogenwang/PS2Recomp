#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276F28
// Address: 0x276f28 - 0x276f78
void sub_00276F28_0x276f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276F28_0x276f28");
#endif

    switch (ctx->pc) {
        case 0x276f48u: goto label_276f48;
        case 0x276f58u: goto label_276f58;
        default: break;
    }

    ctx->pc = 0x276f28u;

    // 0x276f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276f2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276f30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x276f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x276f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x276f38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x276f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x276f3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x276f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x276f40: 0xc09d3e4  jal         func_274F90
    ctx->pc = 0x276F40u;
    SET_GPR_U32(ctx, 31, 0x276F48u);
    ctx->pc = 0x276F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276F40u;
            // 0x276f44: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F90u;
    if (runtime->hasFunction(0x274F90u)) {
        auto targetFn = runtime->lookupFunction(0x274F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F48u; }
        if (ctx->pc != 0x276F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F90_0x274f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F48u; }
        if (ctx->pc != 0x276F48u) { return; }
    }
    ctx->pc = 0x276F48u;
label_276f48:
    // 0x276f48: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x276f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x276f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f50: 0xc09d41e  jal         func_275078
    ctx->pc = 0x276F50u;
    SET_GPR_U32(ctx, 31, 0x276F58u);
    ctx->pc = 0x276F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276F50u;
            // 0x276f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275078u;
    if (runtime->hasFunction(0x275078u)) {
        auto targetFn = runtime->lookupFunction(0x275078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F58u; }
        if (ctx->pc != 0x276F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275078_0x275078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F58u; }
        if (ctx->pc != 0x276F58u) { return; }
    }
    ctx->pc = 0x276F58u;
label_276f58:
    // 0x276f58: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x276f58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x276f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276f60: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x276f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x276f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276f68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x276f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276f6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x276f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276f70: 0x3e00008  jr          $ra
    ctx->pc = 0x276F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F70u;
            // 0x276f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276F78u;
    ctx->pc = 0x276f78u;
}
