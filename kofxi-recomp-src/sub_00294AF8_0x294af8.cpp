#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294AF8
// Address: 0x294af8 - 0x294b20
void sub_00294AF8_0x294af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294AF8_0x294af8");
#endif

    switch (ctx->pc) {
        case 0x294b0cu: goto label_294b0c;
        default: break;
    }

    ctx->pc = 0x294af8u;

    // 0x294af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294b04: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x294B04u;
    SET_GPR_U32(ctx, 31, 0x294B0Cu);
    ctx->pc = 0x294B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B04u;
            // 0x294b08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B0Cu; }
        if (ctx->pc != 0x294B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B0Cu; }
        if (ctx->pc != 0x294B0Cu) { return; }
    }
    ctx->pc = 0x294B0Cu;
label_294b0c:
    // 0x294b0c: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x294b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
    // 0x294b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294b18: 0x3e00008  jr          $ra
    ctx->pc = 0x294B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B18u;
            // 0x294b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294B20u;
    ctx->pc = 0x294b20u;
}
