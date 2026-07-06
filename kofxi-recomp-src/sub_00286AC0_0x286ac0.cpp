#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286AC0
// Address: 0x286ac0 - 0x286af8
void sub_00286AC0_0x286ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286AC0_0x286ac0");
#endif

    switch (ctx->pc) {
        case 0x286adcu: goto label_286adc;
        default: break;
    }

    ctx->pc = 0x286ac0u;

    // 0x286ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286acc: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x286accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x286ad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286ad4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x286AD4u;
    SET_GPR_U32(ctx, 31, 0x286ADCu);
    ctx->pc = 0x286AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286AD4u;
            // 0x286ad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286ADCu; }
        if (ctx->pc != 0x286ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286ADCu; }
        if (ctx->pc != 0x286ADCu) { return; }
    }
    ctx->pc = 0x286ADCu;
label_286adc:
    // 0x286adc: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x286adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x286ae0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x286ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x286ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286aec: 0x3e00008  jr          $ra
    ctx->pc = 0x286AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286AECu;
            // 0x286af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286AF4u;
    // 0x286af4: 0x0  nop
    ctx->pc = 0x286af4u;
    // NOP
    ctx->pc = 0x286af8u;
}
