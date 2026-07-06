#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4950
// Address: 0x1a4950 - 0x1a49d0
void sub_001A4950_0x1a4950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4950_0x1a4950");
#endif

    switch (ctx->pc) {
        case 0x1a4970u: goto label_1a4970;
        default: break;
    }

    ctx->pc = 0x1a4950u;

    // 0x1a4950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4954: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a4954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a4958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a495c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4960: 0x8c45b7f0  lw          $a1, -0x4810($v0)
    ctx->pc = 0x1a4960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948848)));
    // 0x1a4964: 0x248469a0  addiu       $a0, $a0, 0x69A0
    ctx->pc = 0x1a4964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27040));
    // 0x1a4968: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x1A4968u;
    SET_GPR_U32(ctx, 31, 0x1A4970u);
    ctx->pc = 0x1A496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4968u;
            // 0x1a496c: 0x3c060030  lui         $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (runtime->hasFunction(0x1A3F30u)) {
        auto targetFn = runtime->lookupFunction(0x1A3F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4970u; }
        if (ctx->pc != 0x1A4970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3F30_0x1a3f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4970u; }
        if (ctx->pc != 0x1A4970u) { return; }
    }
    ctx->pc = 0x1A4970u;
label_1a4970:
    // 0x1a4970: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a4970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a4974: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x1a4974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x1a4978: 0x8c68b7f0  lw          $t0, -0x4810($v1)
    ctx->pc = 0x1a4978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948848)));
    // 0x1a497c: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x1a497cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x1a4980: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1a4980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1a4984: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x1a4984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a4988: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a4988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a498c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1a498cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1a4990: 0xacc7b7e8  sw          $a3, -0x4818($a2)
    ctx->pc = 0x1a4990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294948840), GPR_U32(ctx, 7));
    // 0x1a4994: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1a4994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a4998: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1a4998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1a499c: 0xaca6b7d0  sw          $a2, -0x4830($a1)
    ctx->pc = 0x1a499cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294948816), GPR_U32(ctx, 6));
    // 0x1a49a0: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x1a49a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1a49a4: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1a49a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1a49a8: 0xac859bf0  sw          $a1, -0x6410($a0)
    ctx->pc = 0x1a49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941680), GPR_U32(ctx, 5));
    // 0x1a49ac: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x1a49acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1a49b0: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1a49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1a49b4: 0xac64b7c8  sw          $a0, -0x4838($v1)
    ctx->pc = 0x1a49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948808), GPR_U32(ctx, 4));
    // 0x1a49b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a49b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a49bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A49BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A49C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49BCu;
            // 0x1a49c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A49C4u;
    // 0x1a49c4: 0x0  nop
    ctx->pc = 0x1a49c4u;
    // NOP
    // 0x1a49c8: 0x0  nop
    ctx->pc = 0x1a49c8u;
    // NOP
    // 0x1a49cc: 0x0  nop
    ctx->pc = 0x1a49ccu;
    // NOP
    ctx->pc = 0x1a49d0u;
}
