#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230878
// Address: 0x230878 - 0x2308f0
void sub_00230878_0x230878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230878_0x230878");
#endif

    switch (ctx->pc) {
        case 0x2308a0u: goto label_2308a0;
        case 0x2308b4u: goto label_2308b4;
        default: break;
    }

    ctx->pc = 0x230878u;

    // 0x230878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23087c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230880: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x230884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230888: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x230888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23088c: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x23088cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x230890: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x230890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x230894: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x230894u;
    {
        const bool branch_taken_0x230894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230894u;
            // 0x230898: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230894) {
            ctx->pc = 0x2308CCu;
            goto label_2308cc;
        }
    }
    ctx->pc = 0x23089Cu;
    // 0x23089c: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x23089cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2308a0:
    // 0x2308a0: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x2308a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x2308a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2308a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2308a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2308a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2308ac: 0xc08b65c  jal         func_22D970
    ctx->pc = 0x2308ACu;
    SET_GPR_U32(ctx, 31, 0x2308B4u);
    ctx->pc = 0x2308B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2308ACu;
            // 0x2308b0: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (runtime->hasFunction(0x22D970u)) {
        auto targetFn = runtime->lookupFunction(0x22D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308B4u; }
        if (ctx->pc != 0x2308B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D970_0x22d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308B4u; }
        if (ctx->pc != 0x2308B4u) { return; }
    }
    ctx->pc = 0x2308B4u;
label_2308b4:
    // 0x2308b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2308B4u;
    {
        const bool branch_taken_0x2308b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2308B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308B4u;
            // 0x2308b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308b4) {
            ctx->pc = 0x2308DCu;
            goto label_2308dc;
        }
    }
    ctx->pc = 0x2308BCu;
    // 0x2308bc: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x2308bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2308c0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2308c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2308c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2308C4u;
    {
        const bool branch_taken_0x2308c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2308C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308C4u;
            // 0x2308c8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308c4) {
            ctx->pc = 0x2308A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2308a0;
        }
    }
    ctx->pc = 0x2308CCu;
label_2308cc:
    // 0x2308cc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2308ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2308d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2308d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2308d4: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x2308d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x2308d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2308d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2308dc:
    // 0x2308dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2308dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2308e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2308e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2308e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2308E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2308E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308E4u;
            // 0x2308e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2308ECu;
    // 0x2308ec: 0x0  nop
    ctx->pc = 0x2308ecu;
    // NOP
    ctx->pc = 0x2308f0u;
}
