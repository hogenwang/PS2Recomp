#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00257EA8
// Address: 0x257ea8 - 0x257ee0
void sub_00257EA8_0x257ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257EA8_0x257ea8");
#endif

    switch (ctx->pc) {
        case 0x257ebcu: goto label_257ebc;
        default: break;
    }

    ctx->pc = 0x257ea8u;

    // 0x257ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257eb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257eb4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x257EB4u;
    SET_GPR_U32(ctx, 31, 0x257EBCu);
    ctx->pc = 0x257EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257EB4u;
            // 0x257eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257EBCu; }
        if (ctx->pc != 0x257EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257EBCu; }
        if (ctx->pc != 0x257EBCu) { return; }
    }
    ctx->pc = 0x257EBCu;
label_257ebc:
    // 0x257ebc: 0x96030028  lhu         $v1, 0x28($s0)
    ctx->pc = 0x257ebcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x257ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x257ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257ec8: 0x3063bfff  andi        $v1, $v1, 0xBFFF
    ctx->pc = 0x257ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
    // 0x257ecc: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x257eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x257ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257ed4: 0x808c698  j           func_231A60
    ctx->pc = 0x257ED4u;
    ctx->pc = 0x257ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257ED4u;
            // 0x257ed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x257EDCu;
    // 0x257edc: 0x0  nop
    ctx->pc = 0x257edcu;
    // NOP
    ctx->pc = 0x257ee0u;
}
