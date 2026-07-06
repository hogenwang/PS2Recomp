#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FC948
// Address: 0x1fc948 - 0x1fc9a8
void sub_001FC948_0x1fc948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC948_0x1fc948");
#endif

    switch (ctx->pc) {
        case 0x1fc978u: goto label_1fc978;
        case 0x1fc988u: goto label_1fc988;
        case 0x1fc998u: goto label_1fc998;
        default: break;
    }

    ctx->pc = 0x1fc948u;

    // 0x1fc948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc94c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1fc94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fc950: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fc950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fc954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc958: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FC958u;
    {
        const bool branch_taken_0x1fc958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC958u;
            // 0x1fc95c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc958) {
            ctx->pc = 0x1FC998u;
            goto label_1fc998;
        }
    }
    ctx->pc = 0x1FC960u;
    // 0x1fc960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc964: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC964u;
    {
        const bool branch_taken_0x1fc964 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fc964) {
            ctx->pc = 0x1FC968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC964u;
            // 0x1fc968: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC99Cu;
            goto label_1fc99c;
        }
    }
    ctx->pc = 0x1FC96Cu;
    // 0x1fc96c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc970: 0xc07f298  jal         func_1FCA60
    ctx->pc = 0x1FC970u;
    SET_GPR_U32(ctx, 31, 0x1FC978u);
    ctx->pc = 0x1FC974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC970u;
            // 0x1fc974: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCA60u;
    if (runtime->hasFunction(0x1FCA60u)) {
        auto targetFn = runtime->lookupFunction(0x1FCA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC978u; }
        if (ctx->pc != 0x1FC978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCA60_0x1fca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC978u; }
        if (ctx->pc != 0x1FC978u) { return; }
    }
    ctx->pc = 0x1FC978u;
label_1fc978:
    // 0x1fc978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc97c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1fc97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc980: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1FC980u;
    SET_GPR_U32(ctx, 31, 0x1FC988u);
    ctx->pc = 0x1FC984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC980u;
            // 0x1fc984: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (runtime->hasFunction(0x1FC9A8u)) {
        auto targetFn = runtime->lookupFunction(0x1FC9A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC988u; }
        if (ctx->pc != 0x1FC988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC9A8_0x1fc9a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC988u; }
        if (ctx->pc != 0x1FC988u) { return; }
    }
    ctx->pc = 0x1FC988u;
label_1fc988:
    // 0x1fc988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc98c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1fc98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc990: 0xc07f284  jal         func_1FCA10
    ctx->pc = 0x1FC990u;
    SET_GPR_U32(ctx, 31, 0x1FC998u);
    ctx->pc = 0x1FC994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC990u;
            // 0x1fc994: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCA10u;
    if (runtime->hasFunction(0x1FCA10u)) {
        auto targetFn = runtime->lookupFunction(0x1FCA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC998u; }
        if (ctx->pc != 0x1FC998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCA10_0x1fca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC998u; }
        if (ctx->pc != 0x1FC998u) { return; }
    }
    ctx->pc = 0x1FC998u;
label_1fc998:
    // 0x1fc998: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fc998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc99c:
    // 0x1fc99c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fc99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC9A0u;
            // 0x1fc9a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC9A8u;
    ctx->pc = 0x1fc9a8u;
}
